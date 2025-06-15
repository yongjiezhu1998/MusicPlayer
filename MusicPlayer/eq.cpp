#include "eq.h"
#include "ui_eq.h"

Eq::Eq(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Eq)
{
    ui->setupUi(this);
}

Eq::~Eq()
{
    delete ui;
}
