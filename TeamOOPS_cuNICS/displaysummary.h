#ifndef DISPLAYSUMMARY_H
#define DISPLAYSUMMARY_H

#include <QWidget>

namespace Ui {
class DisplaySummary;
}

class DisplaySummary : public QWidget
{
    Q_OBJECT

public:
    explicit DisplaySummary(QWidget *parent = 0);
    ~DisplaySummary();

private:
    Ui::DisplaySummary *ui;
};

#endif // DISPLAYSUMMARY_H
