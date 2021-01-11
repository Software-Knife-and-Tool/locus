/********
 **
 **  SPDX-License-Identifier: BSD-3-Clause
 **
 **  Copyright (c) 2017-2021 James M. Putnam <putnamjm.design@gmail.com>
 **
 **/

/********
 **
 **  Tile.h: Tile class
 **
 **/
#ifndef GYREUI_UI_TILE_H_
#define GYREUI_UI_TILE_H_

#include <QFrame>
#include <QLabel>
#include <QTextEdit>
#include <QToolBar>
#include <QWidget>

#include "GyreEnv.h"
#include "ViewFrame.h"

QT_BEGIN_NAMESPACE
class QLabel;
class QTextEdit;
class QToolBar;
class QVBoxLayout;
class QWidget;
QT_END_NAMESPACE

namespace gyreui {

class ViewFrame;
class MainWindow;

class Tile : public QFrame {
  Q_OBJECT

 public:
  explicit Tile(ViewFrame*, QFrame*);

  void rebase(QFrame*);
  void split(QFrame*);
  void splith();
  void splitv();

 private:
  enum STATE { UNSPLIT, HORIZONTAL, VERTICAL };

  void log(QString msg) { viewFrame->log(msg); }

  ViewFrame* viewFrame;
  STATE splitState;
  QFrame* baseFrame;
  Tile* splitTile;
};

}  // namespace gyreui

#endif /* GYREUI_UI_TILE_H_ */
