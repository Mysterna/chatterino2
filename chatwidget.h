#ifndef CHATWIDGET_H
#define CHATWIDGET_H

#include <QWidget>
#include "QVBoxLayout"
#include "QFont"
#include "chatwidgetheader.h"
#include "chatwidgetview.h"
#include "chatwidgetinput.h"
#include "channel.h"

class ChatWidget : public QWidget
{
    Q_OBJECT

public:
    ChatWidget(QWidget *parent = 0);
    ~ChatWidget();

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    QFont font;
    QVBoxLayout vbox;
    ChatWidgetHeader header;
    ChatWidgetView view;
    ChatWidgetInput input;


    Channel* channel = NULL;
};

#endif // CHATWIDGET_H