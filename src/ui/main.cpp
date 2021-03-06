/********
 **
 **  SPDX-License-Identifier: BSD-3-Clause
 **
 **  Copyright (c) 2017-2021 James M. Putnam <putnamjm.design@gmail.com>
 **
 **/

/********
 **
 **  main.cpp: Gyreui Ui main
 **
 **/
#include <QApplication>
#include <QDesktopWidget>

#include "MainWindow.h"

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  gyreui::MainWindow mainWindow;
  mainWindow.show();

  return app.exec();
}
