#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

struct retro_core_option_definition option_defs_chs[] = {

   /* These variable names and possible values constitute an ABI with ZMZ (ZSNES Libretro player).
    * Changing "Show layer 1" is fine, but don't change "layer_1"/etc or the possible values ("Yes|No").
    * Adding more variables and rearranging them is safe. */

   {
      "snes9x_region",
      "系统制式（需要重启）",
      "指定系统制式。'PAL'制是50hz，'NTSC'制是60hz。\n"
      "如果选择了不正确的制式，游戏可能会运行偏快或者偏慢。",
      {
         { "auto", "自动" },
         { "ntsc", "NTSC" },
         { "pal",  "PAL" },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "snes9x_aspect",
      "显示宽高比",
      "选择期望的显示宽高比。\n"
      "此项设置只有当RetroArch的宽高比设为‘内核提供’时有效。",
      {
         { "4:3",         NULL },
         { "uncorrected", "未修正的" },
         { "auto",        "自动" },
         { "ntsc",        "NTSC" },
         { "pal",         "PAL" },
         { NULL, NULL},
      },
      "4:3"
   },
   {
      "snes9x_overscan",
      "切除过扫描区域",
      "移除屏幕上下边缘的大约8个像素，这些像素通常并未被游戏使用，在标准电视上被边框隐藏了。\n"
      "'自动'表示根据当前游戏自动检测和切除过扫描区域。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { "auto",     "自动" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_gfx_hires",
      "启用高分辨率模式",
      "允许游戏切换到高分比率模式（512x448）或者强制所有游戏以256x224输出（会有破损像素）。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_hires_blend",
      "高分辨率混合",
      "当游戏切换到高分辨率模式时（512x448），混合相邻像素。\n"
      "某些有些需要此方法产生透明效果（例如Kirby's Dream Land, Jurassic Park...）",
      {
         { "disabled", "禁用" },
         { "merge",    "融合" },
         { "blur",     "模糊" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_blargg",
      "Blargg NTSC滤镜",
      "使用一个视频滤镜来模拟不同的NTSC TV信号。",
      {
         { "disabled",   "禁用" },
         { "monochrome", "单色" },
         { "rf",         "射频" },
         { "composite",  "复合视频" },
         { "s-video",    "S-Video" },
         { "rgb",        "RGB" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_audio_interpolation",
      "音频插值",
      "使用音频滤镜。'Gaussian'产生比原始硬件加强的低音效果。\n"
	  "'Cubic'和'Sinc'精确度较低，但是保留更多高频。",
      {
         { "gaussian", "Gaussian" },
         { "cubic",    "Cubic" },
         { "sinc",     "Sinc" },
         { "none",     "None" },
         { "linear",   "Linear" },
         { NULL, NULL},
      },
      "gaussian"
   },
   {
      "snes9x_up_down_allowed",
      "允许同时按下相反方向键",
      "启用此项允许同时按下/快速切换/按住左右或者上下方向键。\n"
      "这可能会引起移动问题。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "snes9x_overclock_superfx",
      "SuperFX超频",
      "SuperFX协处理器倍频。可以提高帧率也可能引起时序错误。\n"
      "低于100%的值可以提高在低端设备上的游戏性能。",
      {
         { "50%",  NULL },
         { "60%",  NULL },
         { "70%",  NULL },
         { "80%",  NULL },
         { "90%",  NULL },
         { "100%", NULL },
         { "150%", NULL },
         { "200%", NULL },
         { "250%", NULL },
         { "300%", NULL },
         { "350%", NULL },
         { "400%", NULL },
         { "450%", NULL },
         { "500%", NULL },
         { NULL, NULL},
      },
      "100%"
   },
   {
      "snes9x_overclock_cycles",
      "减少拖慢（Hack，不安全）",
      "超频SNES的CPU。可能导致游戏崩溃！\n"
      "'轻度'可以缩短游戏载入时间。\n"
      "'兼容方式'可以解决绝大部分游戏的拖慢。\n"
      "'最大'只针对某些绝对需要的游戏（例如Gradius 3, Super R-type...）",
      {
         { "disabled",   "禁用" },
         { "light",      "轻度" },
         { "compatible", "兼容方式" },
         { "max",        "最大" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_reduce_sprite_flicker",
      "减少闪烁（Hack，不安全）",
      "增加屏幕上可以同时绘制的角色数量。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_randomize_memory",
      "随机内存初始值（不安全）",
      "启动时随机化内存值。\n"
      "有些游戏例如'Super Off Road'使用系统内存\n"
      "作为随机数生成器来随机化物品放置或者AI行为，\n"
      "以使游戏更加难以预测。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_block_invalid_vram_access",
      "阻止无效的VRAM访问",
      "有些自制程序/修改版ROM需要禁用此项才能正确运行。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_echo_buffer_hack",
      "回声缓存Hack（不安全，只对旧式添加音乐修改版ROM启用）",
      "有些自制程序/修改版ROM需要启用此项才能正确运行。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_show_lightgun_settings",
      "显示光枪设置",
      "启用对Super Scope / Justifier / M.A.C.S.步枪输入设备的设置选项。\n"
      "注意：必须重新切换快速菜单以生效。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_lightgun_mode",
      "光枪模式",
      "使用鼠标控制的‘光枪’或者使用触屏输入。",
      {
         { "Lightgun",    "光枪" },
         { "Touchscreen", "触屏" },
         { NULL, NULL},
      },
      "Lightgun"
   },
   {
      "snes9x_superscope_reverse_buttons",
      "交换Super Scope的扳机按钮",
      "交换Super Scope的‘开火’键和‘光标’键的位置。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_superscope_crosshair",
      "Super Scope准心大小",
      "改变屏幕上的准心大小。",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { NULL, NULL},
      },
      "2"
   },
   {
      "snes9x_superscope_color",
      "Super Scope准心颜色",
      "改变屏幕上的准心颜色。",
      {
         { "White",            "白色" },
         { "White (blend)",    "白色（混合）" },
         { "Red",              "红色" },
         { "Red (blend)",      "红色（混合）" },
         { "Orange",           "橙色" },
         { "Orange (blend)",   "橙色（混合）" },
         { "Yellow",           "黄色" },
         { "Yellow (blend)",   "黄色（混合）" },
         { "Green",            "绿色" },
         { "Green (blend)",    "绿色（混合）" },
         { "Cyan",             "青色" },
         { "Cyan (blend)",     "青色（混合）" },
         { "Sky",              "天蓝色" },
         { "Sky (blend)",      "天蓝色（混合）" },
         { "Blue",             "蓝色" },
         { "Blue (blend)",     "蓝色（混合）" },
         { "Violet",           "蓝紫色" },
         { "Violet (blend)",   "蓝紫色（混合）" },
         { "Pink",             "粉红色" },
         { "Pink (blend)",     "粉红色（混合）" },
         { "Purple",           "紫红色" },
         { "Purple (blend)",   "紫红色（混合）" },
         { "Black",            "黑色" },
         { "Black (blend)",    "黑色（混合）" },
         { "25% Grey",         "25%灰度" },
         { "25% Grey (blend)", "25%灰度（混合）" },
         { "50% Grey",         "50%灰度" },
         { "50% Grey (blend)", "50%灰度（混合）" },
         { "75% Grey",         "75%灰度" },
         { "75% Grey (blend)", "75%灰度（混合）" },
         { NULL, NULL},
      },
      "White"
   },
   {
      "snes9x_justifier1_crosshair",
      "Justifier 1准心大小",
      "改变屏幕上的准心大小。",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { NULL, NULL},
      },
      "4"
   },
   {
      "snes9x_justifier1_color",
      "Justifier 1准心颜色",
      "改变屏幕上的准心颜色。",
      {
         { "Blue",             "蓝色" },
         { "Blue (blend)",     "蓝色（混合）" },
         { "Violet",           "蓝紫色" },
         { "Violet (blend)",   "蓝紫色（混合）" },
         { "Pink",             "粉红色" },
         { "Pink (blend)",     "粉红色（混合）" },
         { "Purple",           "紫红色" },
         { "Purple (blend)",   "紫红色（混合）" },
         { "Black",            "黑色" },
         { "Black (blend)",    "黑色（混合）" },
         { "25% Grey",         "25%灰度" },
         { "25% Grey (blend)", "25%灰度（混合）" },
         { "50% Grey",         "50%灰度" },
         { "50% Grey (blend)", "50%灰度（混合）" },
         { "75% Grey",         "75%灰度" },
         { "75% Grey (blend)", "75%灰度（混合）" },
         { "White",            "白色" },
         { "White (blend)",    "白色（混合）" },
         { "Red",              "红色" },
         { "Red (blend)",      "红色（混合）" },
         { "Orange",           "橙色" },
         { "Orange (blend)",   "橙色（混合）" },
         { "Yellow",           "黄色" },
         { "Yellow (blend)",   "黄色（混合）" },
         { "Green",            "绿色" },
         { "Green (blend)",    "绿色（混合）" },
         { "Cyan",             "青色" },
         { "Cyan (blend)",     "青色（混合）" },
         { "Sky",              "天蓝色" },
         { "Sky (blend)",      "天蓝色（混合）" },
         { NULL, NULL},
      },
      "Blue"
   },
   {
      "snes9x_justifier2_crosshair",
      "Justifier 2准心大小",
      "改变屏幕上的准心大小。",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { NULL, NULL},
      },
      "4"
   },
   {
      "snes9x_justifier2_color",
      "Justifier 2准心颜色",
      "改变屏幕上的准心颜色。",
      {
         { "Pink",             "粉红色" },
         { "Pink (blend)",     "粉红色（混合）" },
         { "Purple",           "紫红色" },
         { "Purple (blend)",   "紫红色（混合）" },
         { "Black",            "黑色" },
         { "Black (blend)",    "黑色（混合）" },
         { "25% Grey",         "25%灰度" },
         { "25% Grey (blend)", "25%灰度（混合）" },
         { "50% Grey",         "50%灰度" },
         { "50% Grey (blend)", "50%灰度（混合）" },
         { "75% Grey",         "75%灰度" },
         { "75% Grey (blend)", "75%灰度（混合）" },
         { "White",            "白色" },
         { "White (blend)",    "白色（混合）" },
         { "Red",              "红色" },
         { "Red (blend)",      "红色（混合）" },
         { "Orange",           "橙色" },
         { "Orange (blend)",   "橙色（混合）" },
         { "Yellow",           "黄色" },
         { "Yellow (blend)",   "黄色（混合）" },
         { "Green",            "绿色" },
         { "Green (blend)",    "绿色（混合）" },
         { "Cyan",             "青色" },
         { "Cyan (blend)",     "青色（混合）" },
         { "Sky",              "天蓝色" },
         { "Sky (blend)",      "天蓝色（混合）" },
         { "Blue",             "蓝色" },
         { "Blue (blend)",     "蓝色（混合）" },
         { "Violet",           "蓝紫色" },
         { "Violet (blend)",   "蓝紫色（混合）" },
         { NULL, NULL},
      },
      "Pink"
   },
   {
      "snes9x_rifle_crosshair",
      "M.A.C.S.步枪准心大小",
      "改变屏幕上的准心大小。",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { NULL, NULL},
      },
      "2"
   },
   {
      "snes9x_rifle_color",
      "M.A.C.S.步枪准心颜色",
      "改变屏幕上的准心颜色。",
      {
         { "White",            "白色" },
         { "White (blend)",    "白色（混合）" },
         { "Red",              "红色" },
         { "Red (blend)",      "红色（混合）" },
         { "Orange",           "橙色" },
         { "Orange (blend)",   "橙色（混合）" },
         { "Yellow",           "黄色" },
         { "Yellow (blend)",   "黄色（混合）" },
         { "Green",            "绿色" },
         { "Green (blend)",    "绿色（混合）" },
         { "Cyan",             "青色" },
         { "Cyan (blend)",     "青色（混合）" },
         { "Sky",              "天蓝色" },
         { "Sky (blend)",      "天蓝色（混合）" },
         { "Blue",             "蓝色" },
         { "Blue (blend)",     "蓝色（混合）" },
         { "Violet",           "蓝紫色" },
         { "Violet (blend)",   "蓝紫色（混合）" },
         { "Pink",             "粉红色" },
         { "Pink (blend)",     "粉红色（混合）" },
         { "Purple",           "紫红色" },
         { "Purple (blend)",   "紫红色（混合）" },
         { "Black",            "黑色" },
         { "Black (blend)",    "黑色（混合）" },
         { "25% Grey",         "25%灰度" },
         { "25% Grey (blend)", "25%灰度（混合）" },
         { "50% Grey",         "50%灰度" },
         { "50% Grey (blend)", "50%灰度（混合）" },
         { "75% Grey",         "75%灰度" },
         { "75% Grey (blend)", "75%灰度（混合）" },
         { NULL, NULL},
      },
      "White"
   },
   {
      "snes9x_show_advanced_av_settings",
      "显示高级音频/视频设置",
      "显示图层/GFX特效/音频通道的底层设置。\n"
      "注意：必须重新切换快速菜单以生效。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "snes9x_layer_1",
      "显示图层1",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_layer_2",
      "显示图层2",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_layer_3",
      "显示图层3",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_layer_4",
      "显示图层4",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_layer_5",
      "显示角色层",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_gfx_clip",
      "启用图形剪切窗口",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_gfx_transp",
      "启用透明特效",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_1",
      "启用声音通道1",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_2",
      "启用声音通道2",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_3",
      "启用声音通道3",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_4",
      "启用声音通道4",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_5",
      "启用声音通道5",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_6",
      "启用声音通道6",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_7",
      "启用声音通道7",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "snes9x_sndchan_8",
      "启用声音通道8",
      NULL,
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "hacks",
      NULL,
      NULL
   },
   {
      "lightgun",
      NULL,
      NULL
   },
   {
      "advanced_av",
      NULL,
      NULL
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "snes9x_region",
      "Konsol Bölgesi (Core Yenilenir)",
      NULL,
      "Sistemin hangi bölgeden olduğunu belirtir.. 'PAL' 50hz'dir, 'NTSC' ise 60hz. Yanlış bölge seçiliyse, oyunlar normalden daha hızlı veya daha yavaş çalışacaktır.",
      NULL,
      NULL,
      {
         { "auto", "Otomatik" },
         { "ntsc", "NTSC" },
         { "pal",  "PAL" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_aspect",
      "Tercih Edilen En Boy Oranı",
      NULL,
      "Tercih edilen içerik en boy oranını seçin. Bu, yalnızca RetroArch’ın en boy oranı Video ayarlarında 'Core tarafından' olarak ayarlandığında uygulanacaktır.",
      NULL,
      NULL,
      {
         { "4:3",         NULL },
         { "4:3 scaled",  "4:3 (Korunmuş)" },
         { "uncorrected", "Düzeltilmemiş" },
         { "auto",        "Otomatik" },
         { "ntsc",        "NTSC" },
         { "pal",         "PAL" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_overscan",
      "Aşırı Taramayı Kırp",
      NULL,
      "Ekranın üst ve alt kısmındaki sınırlarını, tipik olarak standart çözünürlüklü bir televizyondakini kaldırır. 'Otomatik (~8 piksel)' ise geçerli içeriğe bağlı olarak aşırı taramayı algılamaya ve kırpmaya çalışacaktır.",
      NULL,
      NULL,
      {
         { "enabled",      "~8 piksel" },
         { "12_pixels",    "12 piksel" },
         { "16_pixels",    "16 piksel" },
         { "auto",         "Otomatik (~8 piksel)" },
         { "disabled",     NULL },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_hires_blend",
      "Hi-Res Karışımı",
      NULL,
      "Oyun hi-res moduna geçtiğinde pikselleri karıştırır (512x448). Şeffaflık efektleri üretmek için hi-res modunu kullanan bazı oyunlar için gereklidir (Kirby's Dream Land, Jurassic Park ...).",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "merge",    "Birlşetir" },
         { "blur",     "Bulanıklaştır" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_blargg",
      "Blargg NTSC Filtresi",
      NULL,
      "Çeşitli NTSC TV sinyallerini taklit etmek için bir video filtresi uygular.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_audio_interpolation",
      "Ses Enterpolasyonu",
      NULL,
      "Belirtilen ses filtresini uygular. 'Gaussian', orijinal donanımın bas ağırlıklı sesini üretir. 'Cubic' ve 'Sinc' daha az doğrudur ve daha fazla aralığı korur.",
      NULL,
      NULL,
      {
         { "gaussian", "Gaussian" },
         { "cubic",    "Cubic" },
         { "sinc",     "Sinc" },
         { "none",     "Hiçbiri" },
         { "linear",   "Linear" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_up_down_allowed",
      "Karşı Yönlere İzin Ver",
      NULL,
      "Bunu etkinleştirmek aynı anda hem sola hem de sağa (veya yukarı ve aşağı) yönlere basma / hızlı değiştirme / tutma imkanı sağlar. Bu harekete dayalı hatalara neden olabilir.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_overclock_superfx",
      "SuperFX Hız Aşırtma",
      NULL,
      "SuperFX işlemcisi frekans çarpanıdır. Kare hızını artırabilir veya zamanlama hatalarına neden olabilir. % 100'ün altındaki değerler yavaş cihazlarda oyun performansını artırabilir.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_overclock_cycles",
      "Yavaşlamayı Azalt (Hack, Güvensiz)",
      "Yavaşlamayı Azalt (Güvensiz)",
      "SNES İşlemcisi için hız aşırtmadır. Oyunların çökmesine neden olabilir! Daha kısa yükleme süreleri için 'Hafif'i, yavaşlama gösteren oyunların çoğunda' Uyumlu 've yalnızca kesinlikle gerekliyse' Maks 'kullanın (Gradius 3, Süper R tipi ...).",
      NULL,
      NULL,
      {
         { "disabled",   NULL },
         { "light",      "Hafif" },
         { "compatible", "Uyumlu" },
         { "max",        "Maks" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_reduce_sprite_flicker",
      "Kırılmayı Azalt (Hack, Güvensiz)",
      "Kırılmayı Azalt (Güvensiz)",
      "Ekranda aynı anda çizilebilen sprite sayısını arttırır.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_randomize_memory",
      "Belleği Rastgele Kıl (Güvensiz)",
      NULL,
      "Başlatıldığında sistem RAM'ını rastgele ayarlar. 'Super Off Road' gibi bazı oyunlar, oyunu daha öngörülemeyen hale getirmek için öğe yerleştirme ve AI davranışı için rastgele sayı üreticisi olarak sistem RAM'ini kullanır.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_block_invalid_vram_access",
      "Geçersiz VRAM Erişimini Engelle",
      NULL,
      "Bazı Homebrew/ROM'lar, doğru işlem için bu seçeneğin devre dışı bırakılmasını gerektirir.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_echo_buffer_hack",
      "Eko Tampon Hack (Güvenli değil, yalnızca eski addmusic için etkinleştirin)",
      NULL,
      "Bazı Homebrew/ROM'lar, doğru işlem için bu seçeneğin devre dışı bırakılmasını gerektirir.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_show_lightgun_settings",
      "Light Gun Ayarlarını Göster",
      NULL,
      "Super Scope / Justifier / M.A.C.S. için tüfek girişi yapılandırmasını etkinleştir. NOT: Bu ayarın etkili olabilmesi için Hızlı Menü’nün açılması gerekir.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_lightgun_mode",
      "Light Gun Modu",
      "Modu",
      "Fare kontrollü 'Light Gun' veya 'Dokunmatik Ekran' girişini kullanın.",
      NULL,
      NULL,
      {
         { "Lightgun",    "Light Gun" },
         { "Touchscreen", "Dokunmatik Ekran" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_superscope_reverse_buttons",
      "Super Scope Ters Tetik Düğmeleri",
      NULL,
      "Süper Scope için 'Ateş' ve 'İmleç' butonlarının pozisyonlarını değiştir.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_superscope_crosshair",
      "Super Scope İmkeç",
      NULL,
      "Ekrandaki imleç işaretini değiştirin.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_superscope_color",
      "Super Scope Rengi",
      NULL,
      "Ekrandaki imleç işaretinin rengini değiştirin.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_justifier1_crosshair",
      "Justifier 1 İmleci",
      NULL,
      "Ekrandaki imleç işaretinin boyutunu değiştirin.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_justifier1_color",
      "Justifier 1 Rengi",
      NULL,
      "Ekrandaki imleç işaretinin rengini değiştirin.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_justifier2_crosshair",
      "Justifier 2 İmleci",
      NULL,
      "Ekrandaki imleç işaretinin boyutunu değiştirin.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_justifier2_color",
      "Justifier 2 REngi",
      NULL,
      "Ekrandaki imleç işaretinin rengini değiştirin.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_rifle_crosshair",
      "M.A.C.S. Tüfek ",
      NULL,
      "Ekrandaki imleç işaretinin rengini değiştirin..",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_rifle_color",
      "M.A.C.S. Tüfek Rengi",
      NULL,
      "Ekrandaki imleç işaretinin rengini değiştirin.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_show_advanced_av_settings",
      "Gelişmiş Ses/Video Ayarlarını Göster",
      NULL,
      "Düşük seviye video katmanı / GFX etkisi / ses kanalı parametrelerinin yapılandırılmasını etkinleştirir. NOT: Bu ayarın etkili olabilmesi için Hızlı Menü’nün açılması gerekir.",
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_layer_1",
      "1. Katmanı Göster",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_layer_2",
      "2. Katmanı Göster",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_layer_3",
      "3. Katmanı Göster",
      NULL,
      NULL,
      NULL,
      NULL,
      {
        { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_layer_4",
      "4. Katmanı Göster",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_layer_5",
      "Sprite Katmanını Göster",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_gfx_clip",
      "Grafik Klibi Pencerelerini Etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_gfx_transp",
      "Saydamlık Efektlerini Etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_1",
      "Ses Kanalı 1'i etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_2",
      "Ses Kanalı 2'yi etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_3",
      "Ses Kanalı 3'ü etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_4",
      "Ses Kanalı 4'ü etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_5",
      "Ses Kanalı 5'i etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_6",
      "Ses Kanalı 6'yı etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_7",
      "Ses Kanalı 7'yi etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_sndchan_8",
      "Ses Kanalı 8'i etkinleştir",
      NULL,
      NULL,
      NULL,
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_SLOVAK */

/* RETRO_LANGUAGE_PERSIAN */

/* RETRO_LANGUAGE_HEBREW */

/* RETRO_LANGUAGE_ASTURIAN */

/* RETRO_LANGUAGE_FINNISH */

#ifdef __cplusplus
}
#endif

#endif
