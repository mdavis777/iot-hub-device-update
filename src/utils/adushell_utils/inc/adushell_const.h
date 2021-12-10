/**
 * @file adushell_const.h
 * @brief Private header contains all constants used by adu-shell and its consumers.
 * @copyright Copyright (c) 2021, Microsoft Corp.
 */
#ifndef ADU_SHELL_CONST_H
#define ADU_SHELL_CONST_H

namespace Adu
{
namespace Shell
{
namespace Const
{
extern const char* adu_shell;

extern const char* update_type_opt;
extern const char* update_type_common;
extern const char* update_type_microsoft_apt;
extern const char* update_type_microsoft_swupdate;
extern const char* update_action_opt;
extern const char* update_action_initialize;
extern const char* update_action_download;
extern const char* update_action_install;
extern const char* update_action_apply;
extern const char* update_action_cancel;
extern const char* update_action_rollback;
extern const char* update_action_reboot;

extern const char* target_data_opt;
extern const char* target_options_opt;
extern const char* target_log_folder_opt;
} // namespace Const
} // namespace Shell
} // namespace Adu

#endif // ADU_SHELL_CONST_HPP