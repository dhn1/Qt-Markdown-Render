#include "MainWindow.h"

#include <QTextDocument>

#include "./ui_MainWindow.h"
#include "MarkdownImporter/MarkdownImporter.h"

QByteArray markdown = R"(
# Heading 1
## Heading 2
### Heading 3
Some text
```
Some code
```
Simple demonstration of using a our own Markdown to QTextDocument converter/importer. It is a modified version of Qt's own QTextMarkdownImporter, modified to adjust some paragraph spacing and pint level 2 headings in red.

)";


MainWindow::MainWindow (QWidget* parent) : QMainWindow (parent), ui (new Ui::MainWindow)
{
    ui->setupUi (this);

    auto doc = new QTextDocument;
    MarkdownImporter importer (doc, MarkdownImporter::DialectGitHub);
    importer.import(markdown);
    ui->textBrowser->setDocument(doc);
}

MainWindow::~MainWindow ()
{
    delete ui;
}
