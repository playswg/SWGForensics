/****************************************************************************
** Meta object code from reading C++ file 'DebuggerEngine.h'
**
** Created: Thu 10. Mar 23:24:29 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/debugger/DebuggerEngine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebuggerEngine[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      42,   35,   15,   15, 0x05,
      69,   35,   15,   15, 0x05,
      98,   94,   15,   15, 0x05,
     121,   15,   15,   15, 0x05,
     141,  138,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DebuggerEngine[] = {
    "DebuggerEngine\0\0successfulAttach()\0"
    "string\0outputDebugString(QString)\0"
    "outputToConsole(QString)\0msg\0"
    "debuggerError(QString)\0processCreated()\0"
    "bp\0breakpointSignal(Breakpoint*)\0"
};

const QMetaObject DebuggerEngine::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DebuggerEngine,
      qt_meta_data_DebuggerEngine, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebuggerEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebuggerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebuggerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerEngine))
        return static_cast<void*>(const_cast< DebuggerEngine*>(this));
    return QThread::qt_metacast(_clname);
}

int DebuggerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: successfulAttach(); break;
        case 1: outputDebugString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: outputToConsole((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: debuggerError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: processCreated(); break;
        case 5: breakpointSignal((*reinterpret_cast< Breakpoint*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DebuggerEngine::successfulAttach()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DebuggerEngine::outputDebugString(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DebuggerEngine::outputToConsole(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DebuggerEngine::debuggerError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DebuggerEngine::processCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void DebuggerEngine::breakpointSignal(Breakpoint * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
