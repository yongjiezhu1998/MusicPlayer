#ifndef EQ_H
#define EQ_H

#include <QWidget>

namespace Ui {
class Eq;
}

class Eq : public QWidget
{
    Q_OBJECT

public:
    explicit Eq(QWidget *parent = nullptr);
    ~Eq();

private:
    Ui::Eq *ui;
};

#endif // EQ_H
