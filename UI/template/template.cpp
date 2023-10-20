//
// Created by patrick on 10/20/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_template.h" resolved

#include "template.h"
#include "ui_template.h"


template ::template(QWidget
*parent) :

QWidget (parent), ui(new Ui::template) {
    ui->setupUi(this);
}

template :: ~ template() {
    delete ui;
}
