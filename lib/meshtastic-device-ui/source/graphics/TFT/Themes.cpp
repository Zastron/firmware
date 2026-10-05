#if defined(VIEW_320x240) || defined(VIEW_240x320)

#include "graphics/view/TFT/Themes.h"
#include "stdint.h"

static enum Themes::Theme theme = Themes::eDark;

Themes::Theme Themes::get(void)
{
    return theme;
}

enum ThemeColor {
    eMainScreenStyle,
    eTopPanelBg,
    eTopPanelText,
    eTopImageBg,
    eTopImageRecolor,
    eTopImageRecolorOpa,
    ePositiveImageRecolor,
    ePanelBg,
    ePanelPressedBg,
    ePanelText,
    ePanelBorder,
    eNodePanelBg,
    eNodePanelBorder,
    eNodePanelText,
    eNodeButtonBg,
    eNodeButtonBgOpa,
    eButtonPanelBg,
    eMainButtonBg,
    eMainButtonText,
    eMainButtonBorder,
    eMainButtonShadow,
    eMainButtonImageRecolor,
    eMainButtonImageRecolorOpa,
    eHomeContainerBg,
    eHomeContainerBorder,
    eHomeContainerShadow,
    eHomeContainerText,
    eHomeButtonBg,
    eHomeButtonText,
    eHomeButtonBorder,
    eHomeButtonImageRecolor,
    eHomeButtonImageRecolorOpa,
    eChannelButtonBg,
    eChannelButtonBorder,
    eChannelButtonText,
    eSettingsPanelBg,
    eSettingsPanelText,
    eSettingsPanelBorder,
    eSettingsPanelShadow,
    eSettingsPanelBgOpa,
    eSettingsButtonBg,
    eSettingsButtonText,
    eSettingsButtonBorder,
    eSettingsButtonImageRecolor,
    eSettingsButtonImageRecolorOpa,
    eSettingsLabelBg,
    eSettingsLabelBorder,
    eTabViewBg,
    eTabViewText,
    eTabButtonDefaultBg,
    eTabButtonActiveBg,
    eTabButtonPressedBg,
    eTabButtonDefaultText,
    eTabButtonActiveText,
    eTabButtonPressedText,
    eTabButtonDefaultBorder,
    eChatMessageBg,
    eChatMessageBgOpa,
    eChatMessageText,
    eChatMessageBorder,
    eNewMessageBg,
    eNewMessageBgOpa,
    eNewMessageText,
    eNewMessageBorder,
    eAlertPanelBg,
    eBtnMatrixBorderMain,
    eBtnMatrixBorderItems,
    eBtnMatrixBgItems,
    eBtnMatrixTextItems,
    eBatteryPercentageText,
    eColorTextLabel,
    eSpinnerMainArc,
    eSpinnerIndicatorArc,
    eTableHeadingText,
    eTableHeadingBg,
    eTableItemText,
    eTableItemBg,
    eTableItemDarkBg,
    eTableBorder,
    eTableCellBorder
};

uint32_t themeColor[][4] = {
    // dark,       light,      red,         material
    {0xff303030, 0xfff4f4f4, 0xff303030, 0xfff1f3f4}, // eMainScreenStyle
    {0xff436C70, 0xff67ea94, 0xff7f0000, 0xff1f1f1f}, // eTopPanelBg
    {0xffE0E0E0, 0xff212121, 0xffe0e0e0, 0xffe8eaed}, // eTopPanelText
    {0xff436C70, 0xff67ea94, 0xff7f0000, 0xff1f1f1f}, // eTopImageBg
    {0xffffffff, 0xff212121, 0xffffffff, 0xffe8eaed}, // eTopImageRecolor
    {255, 255, 255, 255},               // eTopImageRecolorOpa
    {0xffffffff, 0xff212121, 0xffffffff, 0xffe8eaed}, // ePositiveImageRecolor,
    {0xff303030, 0xfff4f4f0, 0xff303030, 0xfffafafa}, // ePanelBg
    {0xff303030, 0xfffafafa, 0xffe0e0e0, 0xffeceff1}, // ePanelPressedBg
    {0xfff0f0f0, 0xff202124, 0xfff0f0f0, 0xff202124}, // ePanelText
    {0xff67ea94, 0xff67ea94, 0xff67ea94, 0xffe0e0e0}, // ePanelBorder
    {0xff404040, 0xffffffff, 0xff404040, 0xffffffff}, // eNodePanelBg
    {0xff808080, 0xff979797, 0xff808080, 0xffe0e0e0}, // eNodePanelBorder
    {0xfff0f0f0, 0xff202124, 0xfff0f0f0, 0xff202124}, // eNodePanelText
    {0xff404040, 0xffffffff, 0xff404040, 0xffffffff}, // eNodeButtonBg
    {0, 0, 0, 0},                   // eNodeButtonBgOpa
    {0xff585858, 0xffffffff, 0xff585858, 0xffffffff}, // eButtonPanelBg
    {0xff585858, 0xffeaeae0, 0xff585858, 0xffe3f2fd}, // eMainButtonBg
    {0xffaafbff, 0xff101010, 0xffaafbff, 0xff0d47a1}, // eMainButtonText
    {0xff67ea94, 0xff67ea94, 0xff67ea94, 0xffeceff1}, // eMainButtonBorder
    {0xff9e9e9e, 0xffc0c0c0, 0xff9e9e9e, 0xff90a4ae}, // eMainButtonShadow
    {0xff67ea94, 0xff757575, 0xff67ea94, 0xff0d47a1}, // eMainButtonImageRecolor
    {0, 255, 0, 255},                 // eMainButtonImageRecolorOpa
    {0xff303030, 0xfffafaf4, 0xff303030, 0xfffafafa}, // eHomeContainerBg
    {0xff67EA94, 0xffaaaaaa, 0xff67EA94, 0xffe0e0e0}, // eHomeContainerBorder
    {0xff2B824A, 0xff999999, 0xff2B824A, 0xffb0bec5}, // eHomeContainerShadow
    {0xffaafbff, 0xff294337, 0xffaafbff, 0xff202124}, // eHomeContainerText
    {0xff303030, 0xffffffff, 0xff303030, 0xffe3f2fd}, // eHomeButtonBg
    {0xffffffff, 0xff101010, 0xffffffff, 0xff0d47a1}, // eHomeButtonText
    {0xff303030, 0xffd0d0d0, 0xff303030, 0xffeceff1}, // eHomeButtonBorder
    {0xff606060, 0xff57a6b3, 0xff606060, 0xff0d47a1}, // eHomeButtonImageRecolor
    {0, 255, 0, 255},                 // eHomeButtonImageRecolorOpa
    {0xff404040, 0xfffafaf4, 0xff404040, 0xfff5f5f5}, // eChannelButtonBg
    {0xffA0A0A0, 0xffD0D0D0, 0xffA0A0A0, 0xffeceff1}, // eChannelButtonBorder
    {0xffffffff, 0xff101010, 0xffffffff, 0xff202124}, // eChannelButtonText
    {0xff303030, 0xfff0f0f0, 0xff303030, 0xfffafafa}, // eSettingsPanelBg
    {0xffaafbff, 0xff003c9f, 0xffaafbff, 0xff202124}, // eSettingsPanelText
    {0, 0xff979797, 0, 0xffe0e0e0},          // eSettingsPanelBorder
    {0, 0xff7e7e7e, 0, 0xffb0bec5},          // eSettingsPanelShadow
    {250, 250, 250, 250},               // eSettingsPanelBgOpa
    {0xff505050, 0xffeaeae0, 0xff505050, 0xfff5f5f5}, // eSettingsButtonBg
    {0xffaafbff, 0xff294337, 0xffaafbff, 0xff202124}, // eSettingsButtonText
    {0xff303030, 0xffd0d0d0, 0xff303030, 0xffeceff1}, // eSettingsButtonBorder
    {0, 0xff67ea94, 0, 0xff0d47a1},          // eSettingsButtonImageRecolor
    {0, 255, 0, 255},                 // eSettingsButtonImageRecolorOpa
    {0xff404040, 0xffffffff, 0xff404040, 0xffffffff}, // eSettingsLabelBg
    {0xff404040, 0xff808080, 0xff404040, 0xffe0e0e0}, // eSettingsLabelBorder
    {0xff303030, 0xfff4f4f4, 0xff303030, 0xfffafafa}, // eTabViewBg
    {0xffaafbff, 0xff003c9f, 0xffaafbff, 0xff202124}, // eTabViewText
    {0xff303030, 0xffe0e0e0, 0xff303030, 0xfffafafa}, // eTabButtonDefaultBg
    {0xff303030, 0xffffffff, 0xff303030, 0xffe3f2fd}, // eTabButtonActiveBg
    {0xff67ea94, 0xffaafbff, 0xff67ea94, 0xffe3f2fd}, // eTabButtonPressedBg
    {0xffA0A0A0, 0xff606060, 0xffA0A0A0, 0xff5f6368}, // eTabButtonDefaultText
    {0xffffffff, 0xff101010, 0xffffffff, 0xff0d47a1}, // eTabButtonActiveText
    {0xffffffff, 0xffffffff, 0xffffffff, 0xff0d47a1}, // eTabButtonPressedText
    {0xff505050, 0xffb0b0b0, 0xff505050, 0xffeceff1}, // eTabButtonDefaultBorder
    {0xff303030, 0xfffbfce9, 0xff303030, 0xffe3f2fd}, // eChatMessageBg
    {255, 255, 255, 255},               // eChatMessageBgOpa
    {0xffffffff, 0xff294337, 0xffffffff, 0xff0d47a1}, // eChatMessageText
    {0xff707070, 0xff888888, 0xff707070, 0xffbbdefb}, // eChatMessageBorder
    {0xff404040, 0xffffffff, 0xff404040, 0xffe8f5e9}, // eNewMessageBg
    {255, 255, 255, 255},               // eNewMessageBgOpa
    {0xffd0d0d0, 0xff294337, 0xffd0d0d0, 0xff1b5e20}, // eNewMessageText
    {0xff808080, 0xff888888, 0xff808080, 0xffc8e6c9}, // eNewMessageBorder
    {0xff303030, 0xfffbfbfb, 0xff303030, 0xfffff8e1}, // eAlertPanelBg
    {0xff303030, 0xfff4f4f4, 0xff303030, 0xff1f1f1f}, // eBtnMatrixBorderMain
    {0xff67ea94, 0xff67ea94, 0xff67ea94, 0xffe0e0e0}, // eBtnMatrixBorderItems
    {0xff606060, 0xfffffff8, 0xff606060, 0xfff1f3f4}, // eBtnMatrixBgItems
    {0xffaafbff, 0xff212121, 0xffaafbff, 0xff202124}, // eBtnMatrixTextItems
    {0xffaafbff, 0xff212121, 0xffaafbff, 0xff202124}, // eBatteryPercentageText
    {0xffaafbff, 0xff003c9f, 0xffaafbff, 0xff0d47a1}, // eColorTextLabel
    {0xff404040, 0xffe0e0e0, 0xff404040, 0xffbdbdbd}, // eSpinnerMainArc
    {0xff67ea94, 0xff67ea94, 0xff67ea94, 0xff0d47a1}, // eSpinnerIndicatorArc
    {0xffaafbff, 0xff212121, 0xffaafbff, 0xff202124}, // eTableHeadingText,
    {0xff303030, 0xfff4f4f0, 0xff303030, 0xff1f1f1f}, // eTableHeadingBg
    {0xffaafbff, 0xff212121, 0xffaafbff, 0xff202124}, // eTableItemText,
    {0xff505050, 0xfff4f4f0, 0xff505050, 0xfffafafa}, // eTableItemBg
    {0xff303030, 0xffd4d4d0, 0xff303030, 0xfff1f3f4}, // eTableItemDarkBg
    {0xff404040, 0xffe0e0e0, 0xff404040, 0xffe0e0e0}, // eTableBorder
    {0xff404040, 0xffe0e0e0, 0xff404040, 0xffe0e0e0}  // eTableCellBorder
};

#include "fonts.h"
#include "images.h"
#include "styles.h"

#define THEME(COLOR) (themeColor[COLOR][theme])

// the following styles are copied from eez-studio generated styles and parametrized
extern "C" {
void apply_style_top_panel_style(void)
{
    lv_style_t *style = get_style_top_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTopPanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eTopPanelText)));
    // lv_style_set_text_font(style, &ui_font_montserrat_16);
};
void apply_style_panel_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(ePanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(ePanelText)));
    lv_style_set_border_color(style, lv_color_hex(THEME(ePanelBorder)));
    // lv_style_set_shadow_color(style, lv_color_hex(0xffe0e0e0));
};
void apply_style_panel_style_MAIN_PRESSED(void)
{
    lv_style_t *style = get_style_panel_style_MAIN_PRESSED();
    lv_style_set_bg_color(style, lv_color_hex(THEME(ePanelPressedBg)));
};
void apply_style_home_container_style(void)
{
    lv_style_t *style = get_style_home_container_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eHomeContainerBorder)));
    lv_style_set_border_width(style, 3);
    lv_style_set_border_side(style, LV_BORDER_SIDE_FULL);
    lv_style_set_bg_color(style, lv_color_hex(THEME(eHomeContainerBg)));
    lv_style_set_shadow_color(style, lv_color_hex(THEME(eHomeContainerShadow)));
    lv_style_set_text_font(style, &ui_font_montserrat_16);
    lv_style_set_radius(style, 10);
    lv_style_set_text_color(style, lv_color_hex(THEME(eHomeContainerText)));
};
void apply_style_settings_panel_style(void)
{
    lv_style_t *style = get_style_settings_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eSettingsPanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eSettingsPanelText)));
    lv_style_set_shadow_color(style, lv_color_hex(THEME(eSettingsPanelShadow)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eSettingsPanelBorder)));
    lv_style_set_bg_opa(style, THEME(eSettingsPanelBgOpa));
};
void apply_style_node_panel_style(void)
{
    lv_style_t *style = get_style_node_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eNodePanelBg)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eNodePanelBorder)));
    lv_style_set_text_font(style, &ui_font_montserrat_12);
    lv_style_set_text_color(style, lv_color_hex(THEME(eNodePanelText)));
};
void apply_style_node_button_style(void)
{
    lv_style_t *style = get_style_node_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eNodeButtonBg)));
    lv_style_set_bg_opa(style, THEME(eNodeButtonBgOpa));
};
void apply_style_button_panel_style(void)
{
    lv_style_t *style = get_style_button_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eButtonPanelBg)));
};
void apply_style_home_button_style(void)
{
    lv_style_t *style = get_style_home_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eHomeButtonBg)));
    lv_style_set_bg_image_recolor_opa(style, THEME(eHomeButtonImageRecolorOpa));
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eHomeButtonImageRecolor)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eHomeButtonBorder)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eHomeButtonText)));
};
void apply_style_settings_button_style(void)
{
    lv_style_t *style = get_style_settings_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eSettingsButtonBg)));
    lv_style_set_bg_image_recolor_opa(style, THEME(eSettingsButtonImageRecolorOpa));
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eSettingsButtonImageRecolor)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eSettingsButtonBorder)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eSettingsButtonText)));
};
void apply_style_main_button_style(void)
{
    lv_style_t *style = get_style_main_button_style_MAIN_DEFAULT();
    lv_style_set_bg_image_recolor_opa(style, THEME(eMainButtonImageRecolorOpa));
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eMainButtonImageRecolor)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eMainButtonBorder)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eMainButtonBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eMainButtonText)));
    lv_style_set_shadow_color(style, lv_color_hex(THEME(eMainButtonShadow)));
};
void apply_style_new_message_style(void)
{
    lv_style_t *style = get_style_new_message_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eNewMessageBorder)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eNewMessageBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eNewMessageText)));
    lv_style_set_bg_opa(style, THEME(eNewMessageBgOpa));
};
void apply_style_chat_message_style(void)
{
    lv_style_t *style = get_style_chat_message_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eChatMessageBorder)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eChatMessageBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eChatMessageText)));
    lv_style_set_bg_opa(style, THEME(eChatMessageBgOpa));
};
void apply_style_tab_view_style(void)
{
    lv_style_t *style = get_style_tab_view_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTabViewBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eTabViewText)));
};
void apply_style_drop_down_style(void) {};
void apply_style_bw_label_style(void)
{
    lv_style_t *style = get_style_bw_label_style_MAIN_DEFAULT();
    lv_style_set_text_color(style, lv_color_hex(THEME(eBatteryPercentageText)));
};
void apply_style_color_label_style(void)
{
    lv_style_t *style = get_style_color_label_style_MAIN_DEFAULT();
    lv_style_set_text_color(style, lv_color_hex(THEME(eColorTextLabel)));
};
void apply_style_top_image_style(void)
{
    lv_style_t *style = get_style_top_image_style_MAIN_DEFAULT();
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eTopImageRecolor)));
    lv_style_set_bg_image_recolor_opa(style, THEME(eTopImageRecolorOpa));
    lv_style_set_image_recolor(style, lv_color_hex(THEME(eTopImageRecolor)));
    lv_style_set_image_recolor_opa(style, THEME(eTopImageRecolorOpa));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTopImageBg)));
};
void apply_style_alert_panel_style(void)
{
    lv_style_t *style = get_style_alert_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eAlertPanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(ePanelText)));
};
void apply_style_main_screen_style(void)
{
    lv_style_t *style = get_style_main_screen_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eMainScreenStyle)));
};
void apply_style_channel_button_style(void)
{
    lv_style_t *style = get_style_channel_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eChannelButtonBg)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eChannelButtonBorder)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eChannelButtonText)));
};
void apply_style_button_matrix_style_ITEMS_DEFAULT(void)
{
    lv_style_t *style = get_style_button_matrix_style_ITEMS_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eBtnMatrixBorderItems)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eBtnMatrixBgItems)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eBtnMatrixTextItems)));
};
void apply_style_button_matrix_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_button_matrix_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eBtnMatrixBorderMain)));
};
void apply_style_spinner_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_spinner_style_MAIN_DEFAULT();
    lv_style_set_arc_color(style, lv_color_hex(THEME(eSpinnerMainArc)));
};
void apply_style_spinner_style_INDICATOR_DEFAULT(void)
{
    lv_style_t *style = get_style_spinner_style_INDICATOR_DEFAULT();
    lv_style_set_arc_color(style, lv_color_hex(THEME(eSpinnerIndicatorArc)));
};
void apply_style_settings_label_style(void)
{
    lv_style_t *style = get_style_settings_label_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eSettingsLabelBorder)));
    // lv_style_set_bg_opa(style, 255);
    lv_style_set_bg_color(style, lv_color_hex(THEME(eSettingsLabelBg)));
};
void apply_style_positive_image_style(void)
{
    lv_style_t *style = get_style_positive_image_style_MAIN_DEFAULT();
    lv_style_set_image_recolor(style, lv_color_hex(THEME(ePositiveImageRecolor)));
};
void apply_style_statistics_table_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_statistics_table_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eTableBorder)));
};
void apply_style_statistics_table_style_ITEMS_DEFAULT(void)
{
    lv_style_t *style = get_style_statistics_table_style_ITEMS_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTableItemBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eTableItemText)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eTableCellBorder)));
};
}

// Material shape: rounded cards and circular buttons. Applied only for eMaterial so the
// existing Dark/Light/Red looks are byte-for-byte unchanged.
static void apply_material_shape(void)
{
    if (theme != eMaterial)
        return;

    // Main/home/settings nav buttons read as circular icon buttons.
    lv_style_t *main_button = get_style_main_button_style_MAIN_DEFAULT();
    lv_style_set_radius(main_button, LV_RADIUS_CIRCLE);

    lv_style_t *home_button = get_style_home_button_style_MAIN_DEFAULT();
    lv_style_set_radius(home_button, LV_RADIUS_CIRCLE);

    lv_style_t *settings_button = get_style_settings_button_style_MAIN_DEFAULT();
    lv_style_set_radius(settings_button, LV_RADIUS_CIRCLE);

    // Cards / panels: 12dp is the Material corner radius.
    lv_style_t *home_container = get_style_home_container_style_MAIN_DEFAULT();
    lv_style_set_radius(home_container, 12);
    lv_style_set_border_width(home_container, 0);
    lv_style_set_shadow_width(home_container, 0);

    lv_style_t *panel = get_style_panel_style_MAIN_DEFAULT();
    lv_style_set_radius(panel, 12);

    lv_style_t *node_panel = get_style_node_panel_style_MAIN_DEFAULT();
    lv_style_set_radius(node_panel, 12);

    lv_style_t *node_button = get_style_node_button_style_MAIN_DEFAULT();
    lv_style_set_radius(node_button, 8);

    // Chat bubbles: rounded, and asymmetric would be nicer but the generated layout
    // does not carry per-side radii, so keep them symmetric.
    lv_style_t *chat_message = get_style_chat_message_style_MAIN_DEFAULT();
    lv_style_set_radius(chat_message, 12);

    lv_style_t *new_message = get_style_new_message_style_MAIN_DEFAULT();
    lv_style_set_radius(new_message, 12);

    lv_style_t *channel_button = get_style_channel_button_style_MAIN_DEFAULT();
    lv_style_set_radius(channel_button, 8);

    lv_style_t *settings_label = get_style_settings_label_style_MAIN_DEFAULT();
    lv_style_set_radius(settings_label, 8);

    lv_style_t *tab_view = get_style_tab_view_style_MAIN_DEFAULT();
    lv_style_set_radius(tab_view, 12);

    lv_style_t *alert_panel = get_style_alert_panel_style_MAIN_DEFAULT();
    lv_style_set_radius(alert_panel, 12);

    lv_style_t *btn_matrix_items = get_style_button_matrix_style_ITEMS_DEFAULT();
    lv_style_set_radius(btn_matrix_items, 8);
}

void Themes::set(enum Theme th)
{
    theme = th;
    apply_style_top_panel_style();
    apply_style_panel_style_MAIN_DEFAULT();
    apply_style_panel_style_MAIN_PRESSED();
    apply_style_home_container_style();
    apply_style_settings_panel_style();
    apply_style_node_panel_style();
    apply_style_node_button_style();
    apply_style_button_panel_style();
    apply_style_home_button_style();
    apply_style_settings_button_style();
    apply_style_main_button_style();
    apply_style_new_message_style();
    apply_style_chat_message_style();
    apply_style_tab_view_style();
    apply_style_drop_down_style();
    apply_style_bw_label_style();
    apply_style_color_label_style();
    apply_style_top_image_style();
    apply_style_alert_panel_style();
    apply_style_main_screen_style();
    apply_style_channel_button_style();
    apply_style_button_matrix_style_ITEMS_DEFAULT();
    apply_style_button_matrix_style_MAIN_DEFAULT();
    apply_style_spinner_style_MAIN_DEFAULT();
    apply_style_spinner_style_INDICATOR_DEFAULT();
    apply_style_settings_label_style();
    apply_style_positive_image_style();
    apply_style_statistics_table_style_MAIN_DEFAULT();
        apply_style_statistics_table_style_ITEMS_DEFAULT();
        apply_material_shape();
    }

void Themes::initStyles(void)
{
    // set(get());
    //  lvgl v9 tabview buttons are not btn-matrix anymore but array of buttons
    //  see https://forum.lvgl.io/t/style-a-tabview-widget-in-v9-0-0/14747
    lv_style_init(&style_btn_default);
    lv_style_set_text_color(&style_btn_default, lv_color_hex(THEME(eTabButtonDefaultText)));
    lv_style_set_bg_color(&style_btn_default, lv_color_hex(THEME(eTabButtonDefaultBg)));
    lv_style_set_bg_opa(&style_btn_default, LV_OPA_COVER);
    lv_style_set_border_color(&style_btn_default, lv_color_hex(THEME(eTabButtonDefaultBorder)));
    lv_style_set_border_opa(&style_btn_default, LV_OPA_COVER);
    lv_style_set_border_width(&style_btn_default, 1);
    lv_style_set_border_side(&style_btn_default, LV_BORDER_SIDE_FULL);

    lv_style_init(&style_btn_active);
        lv_style_set_text_color(&style_btn_active, lv_color_hex(THEME(eTabButtonActiveText)));
        lv_style_set_bg_color(&style_btn_active, lv_color_hex(THEME(eTabButtonActiveBg)));
        lv_style_set_bg_opa(&style_btn_active, LV_OPA_COVER);
        lv_style_set_border_color(&style_btn_active, lv_color_hex(accentColor()));
        lv_style_set_border_opa(&style_btn_active, LV_OPA_COVER);
        lv_style_set_border_width(&style_btn_active, 3);
        lv_style_set_border_side(&style_btn_active, LV_BORDER_SIDE_BOTTOM);

        lv_style_init(&style_btn_pressed);
        lv_style_set_text_color(&style_btn_pressed, lv_color_hex(THEME(eTabButtonPressedText)));
        lv_style_set_bg_color(&style_btn_pressed, lv_color_hex(THEME(eTabButtonPressedBg)));
        lv_style_set_bg_opa(&style_btn_pressed, LV_OPA_COVER);
        lv_style_set_border_color(&style_btn_pressed, lv_color_hex(accentColor()));
        lv_style_set_border_opa(&style_btn_pressed, LV_OPA_COVER);
        lv_style_set_border_width(&style_btn_pressed, 3);
        lv_style_set_border_side(&style_btn_pressed, LV_BORDER_SIDE_BOTTOM);
    }

// Meshtastic's brand green is hardcoded in a few style sites upstream; route those
// through the palette so non-green themes actually recolor.
static uint32_t accentColor(void)
{
    return (theme == eMaterial) ? 0xff0d47a1 : 0xff67ea94;
}

const char *Themes::name(enum Theme th)
{
    switch (th) {
    case eLight:
        return "Light";
    case eRed:
        return "Red";
    case eMaterial:
        return "Material";
    default:
        return "Dark";
    }
}

// Disabled-state recolors are per-theme rather than in the main table, so keep them here.
static uint32_t disabledRecolor(void)
{
    return (theme == eDark) ? 0xff606060 : 0xffc0c0c0;
}

void Themes::recolorButton(lv_obj_t *obj, bool enabled, lv_opa_t opa)
{
    uint32_t onColor = (theme == eDark) ? 0xffe0e0e0 : THEME(eHomeButtonImageRecolor);
    lv_color_t color = lv_color_hex(enabled ? onColor : disabledRecolor());
    lv_obj_set_style_bg_image_recolor(obj, color, ((lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT));
    lv_obj_set_style_bg_image_recolor_opa(obj, opa, ((lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT));
}

void Themes::recolorImage(lv_obj_t *obj, bool enabled)
{
    uint32_t onColor = (theme == eDark) ? 0xffe0e0e0 : THEME(eHomeButtonImageRecolor);
    lv_color_t color = lv_color_hex(enabled ? onColor : disabledRecolor());
    lv_obj_set_style_image_recolor(obj, color, ((lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT));
}

void Themes::recolorText(lv_obj_t *obj, bool enabled)
{
    lv_color_t color = lv_color_hex(enabled ? THEME(eHomeContainerText) : disabledRecolor());
    lv_obj_set_style_text_color(obj, color, ((lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT));
}

void Themes::recolorTopLabel(lv_obj_t *obj, bool alert)
{
    lv_color_t color = lv_color_hex(alert ? 0xfff72b2b : THEME(eTopPanelText));
    lv_obj_set_style_text_color(obj, color, ((lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT));
}

void Themes::recolorTableRow(lv_draw_fill_dsc_t *fill_draw_dsc, bool odd)
{
    if (odd) {
        fill_draw_dsc->color = lv_color_hex(THEME(eTableItemBg));
    } else {
        fill_draw_dsc->color = lv_color_hex(THEME(eTableItemDarkBg));
    }
}

#endif // VIEW_320x240