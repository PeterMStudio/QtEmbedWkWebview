
foreach(v ${QtModels})
    target_link_libraries(${TOOL_NAME} Qt${QT_VERSION_MAJOR}::${v})
endforeach(v)