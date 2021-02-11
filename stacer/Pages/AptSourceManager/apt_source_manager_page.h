#ifndef APTSourceManagerPage_PAGE_H
#define APTSourceManagerPage_PAGE_H

#include <QWidget>
#include <QListWidgetItem>

#include "apt_source_repository_item.h"
#include "apt_source_edit.h"
#include "Managers/info_manager.h"

namespace Ui {
class APTSourceManagerPage;
}

class APTSourceManagerPage : public QWidget
{
    Q_OBJECT

public:
    explicit APTSourceManagerPage(QWidget *parent = 0);
    ~APTSourceManagerPage();

public:
    static APTSourcePtr selectedAptSource;

private slots:
    void loadAptSources();
    void changeElementsVisible(const bool checked);
    void on_btnAddAPTSourceRepository_clicked(bool checked);
    void on_listWidgetAptSources_itemClicked(QListWidgetItem *item);
    void on_listWidgetAptSources_itemDoubleClicked(QListWidgetItem *item);
    void on_txtSearchAptSource_textChanged(const QString &val);
    void on_btnDeleteAptSource_clicked();
    void on_btnEditAptSource_clicked();
    void on_btnCancel_clicked();

private:
    void init();

private:
    Ui::APTSourceManagerPage *ui;

    QSharedPointer<APTSourceEdit> mAptSourceEditDialog;
};

#endif
