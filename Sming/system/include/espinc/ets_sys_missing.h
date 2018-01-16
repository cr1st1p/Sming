#ifndef ETS_SYS_MISSING_H
#define ETS_SYS_MISSING_H


#if defined (__cplusplus)
extern "C" {
#endif


#ifndef ETS_SLC_INUM
// older versions?

typedef void (*int_handler_t)(void*);
#define ETS_SLC_INUM        1
#define ETS_CCOMPARE0_INUM  6
#define ETS_SOFT_INUM       7
#define ETS_WDT_INUM        8


#define ETS_SLC_INTR_ATTACH(func, arg) \
    ets_isr_attach(ETS_SLC_INUM, (int_handler_t)(func), (void *)(arg))

#define ETS_SLC_INTR_ENABLE() \
    ETS_INTR_ENABLE(ETS_SLC_INUM)

#define ETS_SLC_INTR_DISABLE() \
    ETS_INTR_DISABLE(ETS_SLC_INUM)


#endif

#if defined (__cplusplus)
} // extern "C"
#endif

#endif // ETS_SYS_MISSING_H

