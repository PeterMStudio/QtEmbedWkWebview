
#include <QApplication>
#include <QWidget>
#include <QString>
#include <QWindow>
#include "WebView.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    MyWebView *webView = [[MyWebView alloc] init];

    NSURL *url = [NSURL URLWithString:QString("https://www.google.com").toNSString()];
    NSURLRequest * request = [NSURLRequest requestWithURL:url];
    [webView->pWebView loadRequest:request];
    QWidget* widget  = QWidget::createWindowContainer(QWindow::fromWinId(WId(webView->pWebView)));
    widget->show();

    return app.exec();
}
