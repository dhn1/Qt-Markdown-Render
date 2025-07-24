# Introduction

This is a simple Qt Widgets app that shows how to control the display of Markdown text in a Qt app. It reimplements Qt's internal QTextMarkdownImporter class allowing its behaviour to be modified.

Why would you want to do this? Well, Qt's default rendering of Markdown leaves something to be desired. It need more padding and tables look awful. You may also want to change fonts and colours.

In the example, it draws second level headings in Red and increases the vertical spacing between heading paragraphs.

## Building

On Linux, you need to install md4c - it does the parsing of the Markdown.
```
sudo apt install libmd4c-dev libmd4c0
```
On windows, I guess, get the code for md4c and include it in your project. https://github.com/mity/md4c.

It should then build under QtCreator.

## Modifying the code
The file MarkdoenImporter.cpp is where the action happens, that is, the chunks of Markdown text are reported in callbacks and converted into relevant QTextDocument stuff.

The calls to this class are in MainWinow.cpp.
