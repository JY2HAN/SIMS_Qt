#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SIMS_Qt.h"

class SIMS_Qt : public QMainWindow
{
    Q_OBJECT

public:
    SIMS_Qt(QWidget *parent = Q_NULLPTR);

private:
    Ui::SIMS_QtClass ui;
};
