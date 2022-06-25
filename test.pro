QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    affichage.cpp \
    agent_de_labo.cpp \
    ajout_agent_de_labo.cpp \
    ajout_ouvrier.cpp \
    ajoute_res.cpp \
    congee.cpp \
    creation.cpp \
    directeur.cpp \
    emp_responsable.cpp \
    emp_technicien.cpp \
    employer.cpp \
    enregistre.cpp \
    institution.cpp \
    liste_conge.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    modifier_par_nom_prenom_cin.cpp \
    ouvrier.cpp \
    recherche_par_nom.cpp \
    responsable.cpp \
    supprimer_par_nom.cpp \
    technicien.cpp

HEADERS += \
    affichage.h \
    agent_de_labo.h \
    ajout_agent_de_labo.h \
    ajout_ouvrier.h \
    ajoute_res.h \
    congee.h \
    creation.h \
    directeur.h \
    emp_responsable.h \
    emp_technicien.h \
    employer.h \
    enregistre.h \
    institution.h \
    liste_conge.h \
    login.h \
    mainwindow.h \
    modifier_par_nom_prenom_cin.h \
    ouvrier.h \
    recherche_par_nom.h \
    responsable.h \
    supprimer_par_nom.h \
    technicien.h

FORMS += \
    affichage.ui \
    ajout_agent_de_labo.ui \
    ajout_ouvrier.ui \
    congee.ui \
    creation.ui \
    enregistre.ui \
    liste_conge.ui \
    login.ui \
    mainwindow.ui \
    modifier_par_nom_prenom_cin.ui \
    recherche_par_nom.ui \
    responsable.ui \
    supprimer_par_nom.ui \
    technicien.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    Sghaier.pro

DISTFILES +=
