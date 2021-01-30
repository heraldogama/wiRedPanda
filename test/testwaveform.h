#ifndef TESTWAVEFORM_H
#define TESTWAVEFORM_H

#include <QObject>
#include <QTest>

#include "editor.h"

class TestWaveForm : public QObject
{
    Q_OBJECT

    Editor *editor;

private slots:

    /* functions executed by QtTest before and after each test */
    void init();
    void cleanup();
    void testDisplay4Bits();
};

#endif /* TESTWAVEFORM_H */