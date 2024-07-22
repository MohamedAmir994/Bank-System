QT = core
QT += network
CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    createuserwindow.cpp \
    deleteuserwindow.cpp \
    getaccbalance.cpp \
    getaccountnumwindow.cpp \
    login.cpp \
    maketransaction.cpp \
    maketransfer.cpp \
    server.cpp \
    serverhandler.cpp \
    transactionlogger.cpp \
    updateuserwindow.cpp \
    viewdb.cpp \
    viewtranshistory.cpp \


HEADERS += \
    admininterface.h \
    createuserwindow.h \
    deleteuserwindow.h \
    getaccbalance.h \
    getaccountnumwindow.h \
    login.h \
    maketransaction.h \
    maketransfer.h \
    server.h \
    serverhandler.h \
    transactionlogger.h \
    updateuserwindow.h \
    viewdb.h \
    viewtranshistory.h \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
