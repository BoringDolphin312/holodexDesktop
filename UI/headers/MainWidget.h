//
// Created by patrick on 10/20/23.
//

#ifndef HOLODEXDESKTOP_MAINWIDGET_H
#define HOLODEXDESKTOP_MAINWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget {
Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);

    ~MainWidget() override;

private:
    Ui::MainWidget *ui;
};


#endif //HOLODEXDESKTOP_MAINWIDGET_H
