#ifndef A_1_YPLS_CHECK_H
#define A_1_YPLS_CHECK_H

#include <QDialog>
#include <QDebug>
#include <QtSql/QSqlResult>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql>
#include <QtSql/QtSql>
#include <QPluginLoader>

namespace Ui {
class a_1_ypls_check;
}

class a_1_ypls_check : public QDialog
{
    Q_OBJECT

public:
    explicit a_1_ypls_check(QWidget *parent = nullptr);
    ~a_1_ypls_check();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::a_1_ypls_check *ui;
};

#endif // A_1_YPLS_CHECK_H
