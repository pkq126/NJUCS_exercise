#ifndef INSERT_H
#define INSERT_H

#include <QWidget>
#include <QDir>
#include <QMessageBox>

#include "database.hpp"
#include "json.hpp"

namespace Ui {
class Insert;
}

class Insert : public QWidget
{
    Q_OBJECT

public:
    explicit Insert(QWidget *parent = nullptr);
    ~Insert();

    void operation(int id);

private slots:
    void on_opButtonUpdate_clicked();

    void on_opButtonInsert_clicked();

    void on_opButtonClear_clicked();

    void on_opButtonClose_clicked();

private:
    Ui::Insert *ui;

    Database *db_ptr;

    QString m_sql;
    QString dbPath;
    QString theme;

    int maxId;
};

#endif // INSERT_H
