#ifndef BUTTON_LIB_H
#define BUTTON_LIB_H

/**
 * @brief lib_init
 * @return
 */
int lib_init(void);
/**
 * @brief button_init
 * @return
 */
int button_init(void (*callback)(void));
int PIR_init(void (*motion_start_callback)(void),void (*motion_end_callback)(void));
#endif
