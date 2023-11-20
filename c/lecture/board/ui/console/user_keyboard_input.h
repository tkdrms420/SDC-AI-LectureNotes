#ifndef __BOARD_MODEL_TITLE_H__
#define __BOARD_MODEL_TITLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_USER_KEYBOARD_INPUT         32

void get_user_keyboard_input(char *keyboard_input);

void get_user_keyboard_input_with_message(
    char *output_message, char *keyboard_input);

void get_user_keyboard_hidden_input_with_message(
    char *output_message, char *keyboard_hidden_input);

#ifdef __cplusplus
}
#endif

#endif