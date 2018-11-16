#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 379
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 4
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  anon_sym_verb = 3,
  aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_display_math_env_name = 9,
  sym_inline_math_env_name = 10,
  anon_sym_tag = 11,
  aux_sym_SLASH_DOT_SLASH = 12,
  sym_verbatim_env_name = 13,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 14,
  anon_sym_begin = 15,
  anon_sym_end = 16,
  anon_sym_documentclass = 17,
  anon_sym_usepackage = 18,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 19,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 20,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 21,
  anon_sym_EQ = 22,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 23,
  anon_sym_emph = 24,
  anon_sym_textbf = 25,
  anon_sym_textit = 26,
  anon_sym_texttt = 27,
  anon_sym_makeatletter = 28,
  anon_sym_makeatother = 29,
  sym_magic_comment = 30,
  sym_comment = 31,
  sym__escape = 32,
  sym_begin_group = 33,
  sym_end_group = 34,
  sym_math_shift = 35,
  sym_alignment_tab = 36,
  sym__end_of_line = 37,
  sym_parameter_char = 38,
  sym_superscript = 39,
  sym_subscript = 40,
  sym__name = 41,
  sym__name_at = 42,
  sym_active_char = 43,
  sym_text = 44,
  sym_number = 45,
  sym_document = 46,
  sym__common = 47,
  sym__text_mode_common = 48,
  sym_inline_verbatim = 49,
  sym_verb_token = 50,
  sym__whitespace = 51,
  sym__text_mode = 52,
  sym_text_mode = 53,
  sym__text_mode_at = 54,
  sym_text_mode_at = 55,
  sym_text_mode_at_region = 56,
  sym__math_mode_common = 57,
  sym__math_mode = 58,
  sym_math_mode = 59,
  sym__math_mode_at = 60,
  sym_math_mode_at = 61,
  sym_parameter = 62,
  sym_text_env = 63,
  sym_text_env_at = 64,
  sym_math_env = 65,
  sym_math_env_at = 66,
  sym__display_math = 67,
  sym__display_math_at = 68,
  sym_tex_display_math = 69,
  sym_tex_display_math_at = 70,
  sym_latex_display_math = 71,
  sym_latex_display_math_at = 72,
  sym_begin_display_math = 73,
  sym_end_display_math = 74,
  sym_begin_inline_math = 75,
  sym_end_inline_math = 76,
  sym_display_math_env = 77,
  sym_display_math_env_at = 78,
  sym_display_math_begin = 79,
  sym_display_math_begin_at = 80,
  sym_display_math_end = 81,
  sym_display_math_env_group = 82,
  sym__inline_math = 83,
  sym__inline_math_at = 84,
  sym_tex_inline_math = 85,
  sym_tex_inline_math_at = 86,
  sym_latex_inline_math = 87,
  sym_latex_inline_math_at = 88,
  sym_inline_math_env = 89,
  sym_inline_math_env_at = 90,
  sym_inline_math_begin = 91,
  sym_inline_math_end = 92,
  sym_inline_math_env_group = 93,
  sym_tag = 94,
  sym_tag_at = 95,
  sym_tag_token = 96,
  sym_verbatim_env = 97,
  sym_verbatim_begin = 98,
  sym_verbatim_end = 99,
  sym_verbatim_text = 100,
  sym_verbatim_env_group = 101,
  sym_escaped = 102,
  sym_begin = 103,
  sym_begin_token = 104,
  sym_end = 105,
  sym_end_token = 106,
  sym_documentclass = 107,
  sym_documentclass_token = 108,
  sym_usepackage = 109,
  sym_usepackage_token = 110,
  sym_include = 111,
  sym_include_at = 112,
  sym_include_token = 113,
  sym_section = 114,
  sym_section_at = 115,
  sym_section_token = 116,
  sym_storage = 117,
  sym_storage_token = 118,
  sym_catcode = 119,
  sym_catcode_token = 120,
  sym_emph = 121,
  sym_emph_at = 122,
  sym_emph_token = 123,
  sym_textbf = 124,
  sym_textbf_at = 125,
  sym_textbf_token = 126,
  sym_textit = 127,
  sym_textit_at = 128,
  sym_textit_token = 129,
  sym_texttt = 130,
  sym_texttt_at = 131,
  sym_texttt_token = 132,
  sym_makeatletter = 133,
  sym_makeatletter_token = 134,
  sym_makeatother = 135,
  sym_makeatother_token = 136,
  sym_text_group = 137,
  sym_text_group_at = 138,
  sym_simple_text_group = 139,
  sym_opt_text_group = 140,
  sym_opt_text_group_at = 141,
  sym_math_group = 142,
  sym_math_group_at = 143,
  sym_opt_math_group = 144,
  sym_opt_math_group_at = 145,
  sym_math_text_group = 146,
  sym_math_text_group_at = 147,
  sym_token = 148,
  sym_token_at = 149,
  sym_begin_opt = 150,
  sym_end_opt = 151,
  aux_sym__whitespace_repeat1 = 152,
  aux_sym_text_mode_repeat1 = 153,
  aux_sym_text_mode_at_repeat1 = 154,
  aux_sym_math_mode_repeat1 = 155,
  aux_sym_math_mode_at_repeat1 = 156,
  aux_sym_parameter_repeat1 = 157,
  aux_sym_verbatim_text_repeat1 = 158,
  aux_sym_verbatim_text_repeat2 = 159,
  anon_alias_sym_class_name = 160,
  anon_alias_sym_env_name = 161,
  anon_alias_sym_package_name = 162,
  anon_alias_sym_text = 163,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [ts_builtin_sym_end] = "END",
  [anon_sym_verb] = "verb",
  [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = "/[\\s\\t]/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_display_math_env_name] = "display_math_env_name",
  [sym_inline_math_env_name] = "inline_math_env_name",
  [anon_sym_tag] = "tag",
  [aux_sym_SLASH_DOT_SLASH] = "/./",
  [sym_verbatim_env_name] = "verbatim_env_name",
  [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = "/[^()\\[\\]]/",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_documentclass] = "documentclass",
  [anon_sym_usepackage] = "usepackage",
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = "/include|input/",
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = "/section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/",
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = "/[egx]?def/",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [anon_sym_emph] = "emph",
  [anon_sym_textbf] = "textbf",
  [anon_sym_textit] = "textit",
  [anon_sym_texttt] = "texttt",
  [anon_sym_makeatletter] = "makeatletter",
  [anon_sym_makeatother] = "makeatother",
  [sym_magic_comment] = "magic_comment",
  [sym_comment] = "comment",
  [sym__escape] = "_escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_alignment_tab] = "alignment_tab",
  [sym__end_of_line] = "_end_of_line",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym__name] = "_name",
  [sym__name_at] = "_name_at",
  [sym_active_char] = "active_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym__common] = "_common",
  [sym__text_mode_common] = "_text_mode_common",
  [sym_inline_verbatim] = "inline_verbatim",
  [sym_verb_token] = "verb_token",
  [sym__whitespace] = "_whitespace",
  [sym__text_mode] = "_text_mode",
  [sym_text_mode] = "text_mode",
  [sym__text_mode_at] = "_text_mode_at",
  [sym_text_mode_at] = "text_mode_at",
  [sym_text_mode_at_region] = "text_mode_at_region",
  [sym__math_mode_common] = "_math_mode_common",
  [sym__math_mode] = "_math_mode",
  [sym_math_mode] = "math_mode",
  [sym__math_mode_at] = "_math_mode_at",
  [sym_math_mode_at] = "math_mode_at",
  [sym_parameter] = "parameter",
  [sym_text_env] = "text_env",
  [sym_text_env_at] = "text_env_at",
  [sym_math_env] = "math_env",
  [sym_math_env_at] = "math_env_at",
  [sym__display_math] = "_display_math",
  [sym__display_math_at] = "_display_math_at",
  [sym_tex_display_math] = "tex_display_math",
  [sym_tex_display_math_at] = "tex_display_math_at",
  [sym_latex_display_math] = "latex_display_math",
  [sym_latex_display_math_at] = "latex_display_math_at",
  [sym_begin_display_math] = "begin_display_math",
  [sym_end_display_math] = "end_display_math",
  [sym_begin_inline_math] = "begin_inline_math",
  [sym_end_inline_math] = "end_inline_math",
  [sym_display_math_env] = "display_math_env",
  [sym_display_math_env_at] = "display_math_env_at",
  [sym_display_math_begin] = "display_math_begin",
  [sym_display_math_begin_at] = "display_math_begin",
  [sym_display_math_end] = "display_math_end",
  [sym_display_math_env_group] = "display_math_env_group",
  [sym__inline_math] = "_inline_math",
  [sym__inline_math_at] = "_inline_math_at",
  [sym_tex_inline_math] = "tex_inline_math",
  [sym_tex_inline_math_at] = "tex_inline_math_at",
  [sym_latex_inline_math] = "latex_inline_math",
  [sym_latex_inline_math_at] = "latex_inline_math_at",
  [sym_inline_math_env] = "inline_math_env",
  [sym_inline_math_env_at] = "inline_math_env_at",
  [sym_inline_math_begin] = "inline_math_begin",
  [sym_inline_math_end] = "inline_math_end",
  [sym_inline_math_env_group] = "inline_math_env_group",
  [sym_tag] = "tag",
  [sym_tag_at] = "tag_at",
  [sym_tag_token] = "tag_token",
  [sym_verbatim_env] = "verbatim_env",
  [sym_verbatim_begin] = "verbatim_begin",
  [sym_verbatim_end] = "verbatim_end",
  [sym_verbatim_text] = "verbatim_text",
  [sym_verbatim_env_group] = "verbatim_env_group",
  [sym_escaped] = "escaped",
  [sym_begin] = "begin",
  [sym_begin_token] = "begin_token",
  [sym_end] = "end",
  [sym_end_token] = "end_token",
  [sym_documentclass] = "documentclass",
  [sym_documentclass_token] = "documentclass_token",
  [sym_usepackage] = "usepackage",
  [sym_usepackage_token] = "usepackage_token",
  [sym_include] = "include",
  [sym_include_at] = "include_at",
  [sym_include_token] = "include_token",
  [sym_section] = "section",
  [sym_section_at] = "section_at",
  [sym_section_token] = "section_token",
  [sym_storage] = "storage",
  [sym_storage_token] = "storage_token",
  [sym_catcode] = "catcode",
  [sym_catcode_token] = "catcode_token",
  [sym_emph] = "emph",
  [sym_emph_at] = "emph_at",
  [sym_emph_token] = "emph_token",
  [sym_textbf] = "textbf",
  [sym_textbf_at] = "textbf_at",
  [sym_textbf_token] = "textbf_token",
  [sym_textit] = "textit",
  [sym_textit_at] = "textit_at",
  [sym_textit_token] = "textit_token",
  [sym_texttt] = "texttt",
  [sym_texttt_at] = "texttt_at",
  [sym_texttt_token] = "texttt_token",
  [sym_makeatletter] = "makeatletter",
  [sym_makeatletter_token] = "makeatletter_token",
  [sym_makeatother] = "makeatother",
  [sym_makeatother_token] = "makeatother_token",
  [sym_text_group] = "text_group",
  [sym_text_group_at] = "text_group_at",
  [sym_simple_text_group] = "simple_text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_opt_text_group_at] = "opt_text_group_at",
  [sym_math_group] = "math_group",
  [sym_math_group_at] = "math_group_at",
  [sym_opt_math_group] = "opt_math_group",
  [sym_opt_math_group_at] = "opt_math_group_at",
  [sym_math_text_group] = "math_text_group",
  [sym_math_text_group_at] = "math_text_group_at",
  [sym_token] = "token",
  [sym_token_at] = "token_at",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym__whitespace_repeat1] = "_whitespace_repeat1",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_text_mode_at_repeat1] = "text_mode_at_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
  [aux_sym_math_mode_at_repeat1] = "math_mode_at_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [aux_sym_verbatim_text_repeat2] = "verbatim_text_repeat2",
  [anon_alias_sym_class_name] = "class_name",
  [anon_alias_sym_env_name] = "env_name",
  [anon_alias_sym_package_name] = "package_name",
  [anon_alias_sym_text] = "text",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_verb_body] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_delim] = {
    .visible = true,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_verb] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_display_math_env_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_verbatim_env_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_documentclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usepackage] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_emph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textbf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texttt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_makeatletter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_makeatother] = {
    .visible = true,
    .named = false,
  },
  [sym_magic_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym_begin_group] = {
    .visible = true,
    .named = true,
  },
  [sym_end_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_alignment_tab] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_char] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__name_at] = {
    .visible = false,
    .named = true,
  },
  [sym_active_char] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__common] = {
    .visible = false,
    .named = true,
  },
  [sym__text_mode_common] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_token] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_text_mode] = {
    .visible = true,
    .named = true,
  },
  [sym__text_mode_at] = {
    .visible = false,
    .named = true,
  },
  [sym_text_mode_at] = {
    .visible = true,
    .named = true,
  },
  [sym_text_mode_at_region] = {
    .visible = true,
    .named = true,
  },
  [sym__math_mode_common] = {
    .visible = false,
    .named = true,
  },
  [sym__math_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_math_mode] = {
    .visible = true,
    .named = true,
  },
  [sym__math_mode_at] = {
    .visible = false,
    .named = true,
  },
  [sym_math_mode_at] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_text_env] = {
    .visible = true,
    .named = true,
  },
  [sym_text_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_math_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym__display_math] = {
    .visible = false,
    .named = true,
  },
  [sym__display_math_at] = {
    .visible = false,
    .named = true,
  },
  [sym_tex_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_tex_display_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_display_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_begin_at] = {
    .visible = true,
    .named = false,
  },
  [sym_display_math_end] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_env_group] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_math] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_math_at] = {
    .visible = false,
    .named = true,
  },
  [sym_tex_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_tex_inline_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_inline_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_end] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env_group] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_at] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_token] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_env] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_end] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_text] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_env_group] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_token] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_end_token] = {
    .visible = true,
    .named = true,
  },
  [sym_documentclass] = {
    .visible = true,
    .named = true,
  },
  [sym_documentclass_token] = {
    .visible = true,
    .named = true,
  },
  [sym_usepackage] = {
    .visible = true,
    .named = true,
  },
  [sym_usepackage_token] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_include_at] = {
    .visible = true,
    .named = true,
  },
  [sym_include_token] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_at] = {
    .visible = true,
    .named = true,
  },
  [sym_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_token] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode_token] = {
    .visible = true,
    .named = true,
  },
  [sym_emph] = {
    .visible = true,
    .named = true,
  },
  [sym_emph_at] = {
    .visible = true,
    .named = true,
  },
  [sym_emph_token] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf_at] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf_token] = {
    .visible = true,
    .named = true,
  },
  [sym_textit] = {
    .visible = true,
    .named = true,
  },
  [sym_textit_at] = {
    .visible = true,
    .named = true,
  },
  [sym_textit_token] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt_at] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt_token] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatletter] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatletter_token] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatother] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatother_token] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_text_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_math_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_token_at] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_end_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_mode_at_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_mode_at_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_text_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_class_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_env_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_package_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_text] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_text,
  },
  [2] = {
    [1] = anon_alias_sym_env_name,
  },
  [3] = {
    [1] = anon_alias_sym_class_name,
  },
  [4] = {
    [1] = anon_alias_sym_package_name,
  },
  [5] = {
    [2] = anon_alias_sym_class_name,
  },
  [6] = {
    [2] = anon_alias_sym_package_name,
  },
  [7] = {
    [3] = anon_alias_sym_class_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == ')')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      ADVANCE(37);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__end_of_line);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '!')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'T')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'X')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_magic_comment);
      END_STATE();
    case 14:
      if (lookahead == '!')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(16);
      if (lookahead == 'T')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(16);
      if (lookahead == 'X')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '!')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '~')
        ADVANCE(35);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'd')
        ADVANCE(73);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'k')
        ADVANCE(102);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'p')
        ADVANCE(119);
      if (lookahead == 's')
        ADVANCE(127);
      if (lookahead == 't')
        ADVANCE(142);
      if (lookahead == 'u')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(162);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '!')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(45);
      if (lookahead == 'p')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'h')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'm')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(95);
      if (lookahead == 'p')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'i')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(122);
      if (lookahead == 't')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(128);
      if (lookahead == 'u')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(135);
      if (lookahead == 's')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(128);
      if (lookahead == 'u')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(146);
      if (lookahead == 'i')
        ADVANCE(148);
      if (lookahead == 't')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 169:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(39);
      END_STATE();
    case 170:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if ((lookahead < '[' || lookahead > '_'))
        ADVANCE(39);
      END_STATE();
    case 171:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(23);
      END_STATE();
    case 172:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 173:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      ADVANCE(39);
      END_STATE();
    case 174:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(175);
      END_STATE();
    case 176:
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      END_STATE();
    case 177:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(39);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 179:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 180:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(181);
      if (lookahead == 'd')
        ADVANCE(182);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'k')
        ADVANCE(102);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 186:
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'n')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'd')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 190:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 191:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'd')
        ADVANCE(73);
      if (lookahead == 'e')
        ADVANCE(192);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'k')
        ADVANCE(102);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'p')
        ADVANCE(119);
      if (lookahead == 's')
        ADVANCE(127);
      if (lookahead == 't')
        ADVANCE(142);
      if (lookahead == 'u')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(162);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'm')
        ADVANCE(90);
      if (lookahead == 'n')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 195:
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == 'V')
        ADVANCE(196);
      if (lookahead == 'a')
        ADVANCE(205);
      if (lookahead == 'd')
        ADVANCE(213);
      if (lookahead == 'e')
        ADVANCE(239);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'g')
        ADVANCE(252);
      if (lookahead == 'l')
        ADVANCE(257);
      if (lookahead == 'm')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == 'v')
        ADVANCE(284);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(214);
      if (lookahead == 'g')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(231);
      if (lookahead == 's')
        ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'u')
        ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 292:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(33);
      END_STATE();
    case 293:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 294:
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 295:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(314);
      if (lookahead == 'd')
        ADVANCE(326);
      if (lookahead == 'e')
        ADVANCE(341);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead == 's')
        ADVANCE(379);
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == 'v')
        ADVANCE(414);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(297);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(298);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(299);
      if (lookahead == 'p')
        ADVANCE(304);
      if (lookahead == 's')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'h')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(67);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(327);
      if (lookahead == 'o')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(348);
      if (lookahead == 'p')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'i')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead == 't')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 'u')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 'u')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(400);
      if (lookahead == 't')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 420:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(181);
      if (lookahead == 'd')
        ADVANCE(182);
      if (lookahead == 'e')
        ADVANCE(421);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'k')
        ADVANCE(102);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 422:
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(26);
      END_STATE();
    case 423:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    case 424:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(314);
      if (lookahead == 'd')
        ADVANCE(326);
      if (lookahead == 'e')
        ADVANCE(341);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 'm')
        ADVANCE(425);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead == 's')
        ADVANCE(379);
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == 'v')
        ADVANCE(414);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 426:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(427);
      if (lookahead == 'd')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 't')
        ADVANCE(429);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 432:
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == 'm')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'a')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'k')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'e')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'a')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 't')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'o')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 't')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'h')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'r')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 444:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(314);
      if (lookahead == 'd')
        ADVANCE(326);
      if (lookahead == 'e')
        ADVANCE(445);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 'm')
        ADVANCE(425);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead == 's')
        ADVANCE(379);
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == 'v')
        ADVANCE(414);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(343);
      if (lookahead == 'n')
        ADVANCE(446);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(447);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 448:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(427);
      if (lookahead == 'd')
        ADVANCE(428);
      if (lookahead == 'e')
        ADVANCE(449);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 't')
        ADVANCE(429);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(168);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (lookahead == 'n')
        ADVANCE(446);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 450:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(33);
      if (lookahead == '~')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 170},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 38, .external_lex_state = 2},
  [8] = {.lex_state = 171},
  [9] = {.lex_state = 169},
  [10] = {.lex_state = 169},
  [11] = {.lex_state = 169},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 172},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 169},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 169},
  [20] = {.lex_state = 173},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 174},
  [30] = {.lex_state = 176, .external_lex_state = 2},
  [31] = {.lex_state = 177},
  [32] = {.lex_state = 177},
  [33] = {.lex_state = 173},
  [34] = {.lex_state = 176},
  [35] = {.lex_state = 176},
  [36] = {.lex_state = 176},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 169},
  [39] = {.lex_state = 173},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 176},
  [42] = {.lex_state = 176},
  [43] = {.lex_state = 176},
  [44] = {.lex_state = 176},
  [45] = {.lex_state = 177},
  [46] = {.lex_state = 173},
  [47] = {.lex_state = 173},
  [48] = {.lex_state = 169},
  [49] = {.lex_state = 169},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 169},
  [52] = {.lex_state = 179},
  [53] = {.lex_state = 180},
  [54] = {.lex_state = 169},
  [55] = {.lex_state = 169},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 169},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 179},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 171, .external_lex_state = 3},
  [63] = {.lex_state = 38},
  [64] = {.lex_state = 169},
  [65] = {.lex_state = 38},
  [66] = {.lex_state = 38},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 186},
  [69] = {.lex_state = 170},
  [70] = {.lex_state = 38},
  [71] = {.lex_state = 38},
  [72] = {.lex_state = 190},
  [73] = {.lex_state = 172},
  [74] = {.lex_state = 191},
  [75] = {.lex_state = 169},
  [76] = {.lex_state = 169},
  [77] = {.lex_state = 170},
  [78] = {.lex_state = 38},
  [79] = {.lex_state = 38},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 195},
  [82] = {.lex_state = 292},
  [83] = {.lex_state = 169},
  [84] = {.lex_state = 292},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 170},
  [88] = {.lex_state = 176},
  [89] = {.lex_state = 179},
  [90] = {.lex_state = 170},
  [91] = {.lex_state = 38},
  [92] = {.lex_state = 179},
  [93] = {.lex_state = 173},
  [94] = {.lex_state = 170},
  [95] = {.lex_state = 38},
  [96] = {.lex_state = 293},
  [97] = {.lex_state = 294},
  [98] = {.lex_state = 170},
  [99] = {.lex_state = 170},
  [100] = {.lex_state = 170},
  [101] = {.lex_state = 170},
  [102] = {.lex_state = 295},
  [103] = {.lex_state = 169},
  [104] = {.lex_state = 169},
  [105] = {.lex_state = 38},
  [106] = {.lex_state = 169},
  [107] = {.lex_state = 169},
  [108] = {.lex_state = 169},
  [109] = {.lex_state = 169},
  [110] = {.lex_state = 38},
  [111] = {.lex_state = 38},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 169},
  [114] = {.lex_state = 38},
  [115] = {.lex_state = 38},
  [116] = {.lex_state = 38},
  [117] = {.lex_state = 38},
  [118] = {.lex_state = 170},
  [119] = {.lex_state = 170},
  [120] = {.lex_state = 38},
  [121] = {.lex_state = 38},
  [122] = {.lex_state = 173},
  [123] = {.lex_state = 174},
  [124] = {.lex_state = 38, .external_lex_state = 2},
  [125] = {.lex_state = 176, .external_lex_state = 2},
  [126] = {.lex_state = 169},
  [127] = {.lex_state = 177},
  [128] = {.lex_state = 169},
  [129] = {.lex_state = 38},
  [130] = {.lex_state = 176},
  [131] = {.lex_state = 169},
  [132] = {.lex_state = 176},
  [133] = {.lex_state = 169},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 38},
  [136] = {.lex_state = 38},
  [137] = {.lex_state = 38},
  [138] = {.lex_state = 38},
  [139] = {.lex_state = 177},
  [140] = {.lex_state = 38},
  [141] = {.lex_state = 38},
  [142] = {.lex_state = 295},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 173},
  [145] = {.lex_state = 169},
  [146] = {.lex_state = 176},
  [147] = {.lex_state = 173},
  [148] = {.lex_state = 169},
  [149] = {.lex_state = 38},
  [150] = {.lex_state = 170},
  [151] = {.lex_state = 169},
  [152] = {.lex_state = 173},
  [153] = {.lex_state = 420},
  [154] = {.lex_state = 173},
  [155] = {.lex_state = 169},
  [156] = {.lex_state = 173},
  [157] = {.lex_state = 173},
  [158] = {.lex_state = 179},
  [159] = {.lex_state = 169},
  [160] = {.lex_state = 38, .external_lex_state = 2},
  [161] = {.lex_state = 176},
  [162] = {.lex_state = 170},
  [163] = {.lex_state = 169},
  [164] = {.lex_state = 422},
  [165] = {.lex_state = 170},
  [166] = {.lex_state = 170},
  [167] = {.lex_state = 38},
  [168] = {.lex_state = 170},
  [169] = {.lex_state = 38},
  [170] = {.lex_state = 176},
  [171] = {.lex_state = 170},
  [172] = {.lex_state = 195},
  [173] = {.lex_state = 170},
  [174] = {.lex_state = 172},
  [175] = {.lex_state = 190},
  [176] = {.lex_state = 172},
  [177] = {.lex_state = 38},
  [178] = {.lex_state = 38},
  [179] = {.lex_state = 173},
  [180] = {.lex_state = 295},
  [181] = {.lex_state = 38},
  [182] = {.lex_state = 170},
  [183] = {.lex_state = 38},
  [184] = {.lex_state = 169},
  [185] = {.lex_state = 169},
  [186] = {.lex_state = 169},
  [187] = {.lex_state = 169},
  [188] = {.lex_state = 169},
  [189] = {.lex_state = 169},
  [190] = {.lex_state = 292},
  [191] = {.lex_state = 292},
  [192] = {.lex_state = 179},
  [193] = {.lex_state = 172},
  [194] = {.lex_state = 292},
  [195] = {.lex_state = 292},
  [196] = {.lex_state = 38},
  [197] = {.lex_state = 170},
  [198] = {.lex_state = 176},
  [199] = {.lex_state = 169},
  [200] = {.lex_state = 169},
  [201] = {.lex_state = 38},
  [202] = {.lex_state = 176},
  [203] = {.lex_state = 179},
  [204] = {.lex_state = 170},
  [205] = {.lex_state = 179},
  [206] = {.lex_state = 170},
  [207] = {.lex_state = 294},
  [208] = {.lex_state = 174},
  [209] = {.lex_state = 423},
  [210] = {.lex_state = 173},
  [211] = {.lex_state = 424},
  [212] = {.lex_state = 173},
  [213] = {.lex_state = 169},
  [214] = {.lex_state = 169},
  [215] = {.lex_state = 169},
  [216] = {.lex_state = 426},
  [217] = {.lex_state = 169},
  [218] = {.lex_state = 169},
  [219] = {.lex_state = 38},
  [220] = {.lex_state = 38},
  [221] = {.lex_state = 169},
  [222] = {.lex_state = 179},
  [223] = {.lex_state = 169},
  [224] = {.lex_state = 432},
  [225] = {.lex_state = 170},
  [226] = {.lex_state = 38},
  [227] = {.lex_state = 169},
  [228] = {.lex_state = 38},
  [229] = {.lex_state = 38},
  [230] = {.lex_state = 38},
  [231] = {.lex_state = 444},
  [232] = {.lex_state = 170},
  [233] = {.lex_state = 38},
  [234] = {.lex_state = 292},
  [235] = {.lex_state = 173},
  [236] = {.lex_state = 170},
  [237] = {.lex_state = 38},
  [238] = {.lex_state = 179},
  [239] = {.lex_state = 170},
  [240] = {.lex_state = 170},
  [241] = {.lex_state = 170},
  [242] = {.lex_state = 170},
  [243] = {.lex_state = 38},
  [244] = {.lex_state = 176, .external_lex_state = 2},
  [245] = {.lex_state = 177},
  [246] = {.lex_state = 176},
  [247] = {.lex_state = 176},
  [248] = {.lex_state = 177},
  [249] = {.lex_state = 176},
  [250] = {.lex_state = 422},
  [251] = {.lex_state = 177},
  [252] = {.lex_state = 432},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 173},
  [255] = {.lex_state = 169},
  [256] = {.lex_state = 38},
  [257] = {.lex_state = 173},
  [258] = {.lex_state = 169},
  [259] = {.lex_state = 169},
  [260] = {.lex_state = 173},
  [261] = {.lex_state = 173},
  [262] = {.lex_state = 179},
  [263] = {.lex_state = 170},
  [264] = {.lex_state = 423},
  [265] = {.lex_state = 423},
  [266] = {.lex_state = 195},
  [267] = {.lex_state = 170},
  [268] = {.lex_state = 195},
  [269] = {.lex_state = 170},
  [270] = {.lex_state = 38},
  [271] = {.lex_state = 169},
  [272] = {.lex_state = 176},
  [273] = {.lex_state = 422},
  [274] = {.lex_state = 177},
  [275] = {.lex_state = 432},
  [276] = {.lex_state = 292},
  [277] = {.lex_state = 173},
  [278] = {.lex_state = 292},
  [279] = {.lex_state = 173},
  [280] = {.lex_state = 292},
  [281] = {.lex_state = 169},
  [282] = {.lex_state = 169},
  [283] = {.lex_state = 292},
  [284] = {.lex_state = 292},
  [285] = {.lex_state = 292},
  [286] = {.lex_state = 179},
  [287] = {.lex_state = 172},
  [288] = {.lex_state = 292},
  [289] = {.lex_state = 170},
  [290] = {.lex_state = 38},
  [291] = {.lex_state = 38},
  [292] = {.lex_state = 295},
  [293] = {.lex_state = 38},
  [294] = {.lex_state = 176},
  [295] = {.lex_state = 179},
  [296] = {.lex_state = 173},
  [297] = {.lex_state = 170},
  [298] = {.lex_state = 423},
  [299] = {.lex_state = 38},
  [300] = {.lex_state = 38},
  [301] = {.lex_state = 173},
  [302] = {.lex_state = 169},
  [303] = {.lex_state = 173},
  [304] = {.lex_state = 169},
  [305] = {.lex_state = 38},
  [306] = {.lex_state = 170},
  [307] = {.lex_state = 169},
  [308] = {.lex_state = 173},
  [309] = {.lex_state = 448},
  [310] = {.lex_state = 173},
  [311] = {.lex_state = 169},
  [312] = {.lex_state = 173},
  [313] = {.lex_state = 179},
  [314] = {.lex_state = 169},
  [315] = {.lex_state = 170},
  [316] = {.lex_state = 169},
  [317] = {.lex_state = 170},
  [318] = {.lex_state = 170},
  [319] = {.lex_state = 170},
  [320] = {.lex_state = 170},
  [321] = {.lex_state = 169},
  [322] = {.lex_state = 169},
  [323] = {.lex_state = 292},
  [324] = {.lex_state = 292},
  [325] = {.lex_state = 179},
  [326] = {.lex_state = 170},
  [327] = {.lex_state = 169},
  [328] = {.lex_state = 169},
  [329] = {.lex_state = 292},
  [330] = {.lex_state = 179},
  [331] = {.lex_state = 177},
  [332] = {.lex_state = 177},
  [333] = {.lex_state = 177},
  [334] = {.lex_state = 170},
  [335] = {.lex_state = 173},
  [336] = {.lex_state = 170},
  [337] = {.lex_state = 170},
  [338] = {.lex_state = 169},
  [339] = {.lex_state = 170},
  [340] = {.lex_state = 177},
  [341] = {.lex_state = 177},
  [342] = {.lex_state = 292},
  [343] = {.lex_state = 169},
  [344] = {.lex_state = 292},
  [345] = {.lex_state = 172},
  [346] = {.lex_state = 176},
  [347] = {.lex_state = 422},
  [348] = {.lex_state = 450},
  [349] = {.lex_state = 432},
  [350] = {.lex_state = 423},
  [351] = {.lex_state = 173},
  [352] = {.lex_state = 169},
  [353] = {.lex_state = 38},
  [354] = {.lex_state = 173},
  [355] = {.lex_state = 169},
  [356] = {.lex_state = 169},
  [357] = {.lex_state = 173},
  [358] = {.lex_state = 173},
  [359] = {.lex_state = 179},
  [360] = {.lex_state = 292},
  [361] = {.lex_state = 169},
  [362] = {.lex_state = 169},
  [363] = {.lex_state = 292},
  [364] = {.lex_state = 179},
  [365] = {.lex_state = 38},
  [366] = {.lex_state = 38},
  [367] = {.lex_state = 292},
  [368] = {.lex_state = 179},
  [369] = {.lex_state = 177},
  [370] = {.lex_state = 170},
  [371] = {.lex_state = 450},
  [372] = {.lex_state = 450},
  [373] = {.lex_state = 450},
  [374] = {.lex_state = 170},
  [375] = {.lex_state = 173},
  [376] = {.lex_state = 292},
  [377] = {.lex_state = 169},
  [378] = {.lex_state = 450},
};

enum {
  ts_external_token_verb_body,
  ts_external_token_verb_delim,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_verb_body] = sym_verb_body,
  [ts_external_token_verb_delim] = sym_verb_delim,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_verb_body] = true,
    [ts_external_token_verb_delim] = true,
  },
  [2] = {
    [ts_external_token_verb_delim] = true,
  },
  [3] = {
    [ts_external_token_verb_body] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_verb_body] = ACTIONS(1),
    [sym_verb_delim] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_magic_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym__end_of_line] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym_active_char] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(6),
    [sym__common] = STATE(28),
    [sym__text_mode_common] = STATE(28),
    [sym_inline_verbatim] = STATE(28),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(28),
    [sym_text_mode] = STATE(8),
    [sym_text_mode_at_region] = STATE(28),
    [sym_parameter] = STATE(28),
    [sym_text_env] = STATE(28),
    [sym__display_math] = STATE(28),
    [sym_tex_display_math] = STATE(28),
    [sym_latex_display_math] = STATE(28),
    [sym_begin_display_math] = STATE(9),
    [sym_begin_inline_math] = STATE(10),
    [sym_display_math_env] = STATE(28),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(28),
    [sym_tex_inline_math] = STATE(28),
    [sym_latex_inline_math] = STATE(28),
    [sym_inline_math_env] = STATE(28),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(28),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(28),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(28),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(28),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(28),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(28),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(28),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(28),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(28),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(28),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(28),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(28),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(28),
    [sym_token] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(28),
    [aux_sym_parameter_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(17),
    [sym_text] = ACTIONS(17),
  },
  [2] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [anon_sym_makeatletter] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name] = ACTIONS(55),
  },
  [3] = {
    [sym__common] = STATE(51),
    [sym__text_mode_common] = STATE(51),
    [sym_inline_verbatim] = STATE(51),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(51),
    [sym_text_mode_at_region] = STATE(51),
    [sym_parameter] = STATE(51),
    [sym_text_env] = STATE(51),
    [sym__display_math] = STATE(51),
    [sym_tex_display_math] = STATE(51),
    [sym_latex_display_math] = STATE(51),
    [sym_begin_display_math] = STATE(48),
    [sym_begin_inline_math] = STATE(49),
    [sym_display_math_env] = STATE(51),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(51),
    [sym_tex_inline_math] = STATE(51),
    [sym_latex_inline_math] = STATE(51),
    [sym_inline_math_env] = STATE(51),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(51),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(51),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(51),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(51),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(51),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(51),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(51),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(51),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(51),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(51),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(51),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(51),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(50),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(51),
    [sym_token] = STATE(51),
    [aux_sym_text_mode_repeat1] = STATE(51),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(59),
    [sym_text] = ACTIONS(59),
  },
  [4] = {
    [sym__common] = STATE(61),
    [sym__math_mode_common] = STATE(61),
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(61),
    [sym_math_env] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(61),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(61),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(61),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(61),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(61),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(69),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [sym_active_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(71),
    [sym_end_group] = ACTIONS(71),
    [sym_math_shift] = ACTIONS(71),
    [sym_alignment_tab] = ACTIONS(71),
    [sym_parameter_char] = ACTIONS(71),
    [sym_superscript] = ACTIONS(71),
    [sym_subscript] = ACTIONS(71),
    [sym_active_char] = ACTIONS(71),
    [sym_text] = ACTIONS(71),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_verb_delim] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [10] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [11] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(66),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [12] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(67),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [13] = {
    [sym_verbatim_end] = STATE(69),
    [sym_verbatim_text] = STATE(70),
    [sym_end_token] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(73),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(83),
    [sym__end_of_line] = ACTIONS(85),
  },
  [14] = {
    [sym__common] = STATE(80),
    [sym__text_mode_common] = STATE(80),
    [sym_inline_verbatim] = STATE(80),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(80),
    [sym_text_mode_at_region] = STATE(80),
    [sym_parameter] = STATE(80),
    [sym_text_env] = STATE(80),
    [sym__display_math] = STATE(80),
    [sym_tex_display_math] = STATE(80),
    [sym_latex_display_math] = STATE(80),
    [sym_begin_display_math] = STATE(75),
    [sym_begin_inline_math] = STATE(76),
    [sym_display_math_env] = STATE(80),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(80),
    [sym_tex_inline_math] = STATE(80),
    [sym_latex_inline_math] = STATE(80),
    [sym_inline_math_env] = STATE(80),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(80),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(80),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_end] = STATE(77),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(80),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(80),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(80),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(80),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(80),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(80),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(80),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(80),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(80),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(80),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(79),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(80),
    [sym_token] = STATE(80),
    [aux_sym_text_mode_repeat1] = STATE(80),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
  },
  [15] = {
    [sym_display_math_env_group] = STATE(82),
    [sym_inline_math_env_group] = STATE(83),
    [sym_verbatim_env_group] = STATE(84),
    [sym_simple_text_group] = STATE(85),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(91),
  },
  [16] = {
    [sym_simple_text_group] = STATE(87),
    [sym_opt_text_group] = STATE(88),
    [sym_begin_opt] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(93),
  },
  [17] = {
    [sym_simple_text_group] = STATE(90),
    [sym_opt_text_group] = STATE(91),
    [sym_begin_opt] = STATE(92),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(93),
  },
  [18] = {
    [sym_text_group] = STATE(93),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(13),
  },
  [19] = {
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(95),
    [sym_begin_opt] = STATE(92),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(13),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(95),
    [sym_end_group] = ACTIONS(95),
    [sym_math_shift] = ACTIONS(95),
    [sym_alignment_tab] = ACTIONS(95),
    [sym_parameter_char] = ACTIONS(95),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(95),
    [sym_text] = ACTIONS(95),
  },
  [21] = {
    [sym_escaped] = STATE(97),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(97),
  },
  [22] = {
    [sym_text_group] = STATE(98),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(13),
  },
  [23] = {
    [sym_text_group] = STATE(99),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(13),
  },
  [24] = {
    [sym_text_group] = STATE(100),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(13),
  },
  [25] = {
    [sym_text_group] = STATE(101),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(13),
  },
  [26] = {
    [sym__common] = STATE(120),
    [sym__text_mode_common] = STATE(120),
    [sym_inline_verbatim] = STATE(120),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(120),
    [sym_text_mode_at] = STATE(105),
    [sym_parameter] = STATE(120),
    [sym_text_env_at] = STATE(120),
    [sym__display_math_at] = STATE(120),
    [sym_tex_display_math_at] = STATE(120),
    [sym_latex_display_math_at] = STATE(120),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(120),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(120),
    [sym_tex_inline_math_at] = STATE(120),
    [sym_latex_inline_math_at] = STATE(120),
    [sym_inline_math_env_at] = STATE(120),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(120),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(120),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(120),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(120),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(120),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(120),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(120),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(120),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(120),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(120),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(120),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(120),
    [sym_texttt_token] = STATE(117),
    [sym_makeatother] = STATE(118),
    [sym_makeatother_token] = STATE(119),
    [sym_text_group_at] = STATE(120),
    [sym_token_at] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(120),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
  },
  [27] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(107),
    [sym_parameter_char] = ACTIONS(107),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(107),
    [sym_text] = ACTIONS(107),
  },
  [28] = {
    [sym__common] = STATE(121),
    [sym__text_mode_common] = STATE(121),
    [sym_inline_verbatim] = STATE(121),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(121),
    [sym_text_mode_at_region] = STATE(121),
    [sym_parameter] = STATE(121),
    [sym_text_env] = STATE(121),
    [sym__display_math] = STATE(121),
    [sym_tex_display_math] = STATE(121),
    [sym_latex_display_math] = STATE(121),
    [sym_begin_display_math] = STATE(9),
    [sym_begin_inline_math] = STATE(10),
    [sym_display_math_env] = STATE(121),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(121),
    [sym_tex_inline_math] = STATE(121),
    [sym_latex_inline_math] = STATE(121),
    [sym_inline_math_env] = STATE(121),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(121),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(121),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(121),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(121),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(121),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(121),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(121),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(121),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(121),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(121),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(121),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(121),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(121),
    [sym_token] = STATE(121),
    [aux_sym_text_mode_repeat1] = STATE(121),
    [aux_sym_parameter_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
  },
  [29] = {
    [aux_sym_parameter_repeat1] = STATE(123),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_parameter_char] = ACTIONS(113),
    [sym_number] = ACTIONS(115),
  },
  [30] = {
    [sym__whitespace] = STATE(124),
    [aux_sym__whitespace_repeat1] = STATE(125),
    [sym_verb_delim] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [sym__whitespace] = STATE(126),
    [aux_sym__whitespace_repeat1] = STATE(127),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(123),
    [sym_alignment_tab] = ACTIONS(123),
    [sym_parameter_char] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(123),
    [sym_text] = ACTIONS(125),
  },
  [32] = {
    [sym__whitespace] = STATE(128),
    [aux_sym__whitespace_repeat1] = STATE(127),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(129),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(131),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_text] = ACTIONS(131),
  },
  [34] = {
    [sym__whitespace] = STATE(129),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(135),
  },
  [35] = {
    [sym__whitespace] = STATE(131),
    [aux_sym__whitespace_repeat1] = STATE(132),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(139),
  },
  [36] = {
    [sym__whitespace] = STATE(133),
    [aux_sym__whitespace_repeat1] = STATE(132),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(141),
  },
  [37] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(143),
  },
  [38] = {
    [anon_sym_LBRACK] = ACTIONS(145),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(145),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(147),
    [sym_math_shift] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(147),
  },
  [40] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(149),
  },
  [41] = {
    [sym__whitespace] = STATE(134),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(151),
  },
  [42] = {
    [sym__whitespace] = STATE(135),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(153),
  },
  [43] = {
    [sym__whitespace] = STATE(136),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(155),
  },
  [44] = {
    [sym__whitespace] = STATE(137),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(157),
  },
  [45] = {
    [sym__whitespace] = STATE(138),
    [aux_sym__whitespace_repeat1] = STATE(139),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_math_shift] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(163),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(165),
    [sym_end_group] = ACTIONS(165),
    [sym_math_shift] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(165),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_text] = ACTIONS(165),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(167),
    [sym_math_shift] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_parameter_char] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(167),
    [sym_active_char] = ACTIONS(167),
    [sym_text] = ACTIONS(167),
  },
  [48] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(140),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [49] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(141),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [50] = {
    [sym__common] = STATE(120),
    [sym__text_mode_common] = STATE(120),
    [sym_inline_verbatim] = STATE(120),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(120),
    [sym_text_mode_at] = STATE(143),
    [sym_parameter] = STATE(120),
    [sym_text_env_at] = STATE(120),
    [sym__display_math_at] = STATE(120),
    [sym_tex_display_math_at] = STATE(120),
    [sym_latex_display_math_at] = STATE(120),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(120),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(120),
    [sym_tex_inline_math_at] = STATE(120),
    [sym_latex_inline_math_at] = STATE(120),
    [sym_inline_math_env_at] = STATE(120),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(120),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(120),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(120),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(120),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(120),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(120),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(120),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(120),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(120),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(120),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(120),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(120),
    [sym_texttt_token] = STATE(117),
    [sym_makeatother] = STATE(118),
    [sym_makeatother_token] = STATE(119),
    [sym_text_group_at] = STATE(120),
    [sym_token_at] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(120),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
  },
  [51] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(48),
    [sym_begin_inline_math] = STATE(49),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(50),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(171),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(173),
    [sym_text] = ACTIONS(173),
  },
  [52] = {
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_math_shift] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(175),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [sym_text] = ACTIONS(175),
  },
  [53] = {
    [anon_sym_tag] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name] = ACTIONS(55),
  },
  [54] = {
    [sym__common] = STATE(148),
    [sym__math_mode_common] = STATE(148),
    [sym__math_mode] = STATE(148),
    [sym_parameter] = STATE(148),
    [sym_math_env] = STATE(148),
    [sym_tag] = STATE(148),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(148),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(148),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(148),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(148),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(148),
    [sym_opt_math_group] = STATE(148),
    [sym_token] = STATE(148),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(148),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(181),
  },
  [55] = {
    [sym__common] = STATE(61),
    [sym__math_mode_common] = STATE(61),
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(149),
    [sym_parameter] = STATE(61),
    [sym_math_env] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(61),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(61),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(61),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(61),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(61),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(69),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [sym_active_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
  },
  [56] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(183),
  },
  [57] = {
    [sym_math_text_group] = STATE(152),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(185),
  },
  [58] = {
    [sym__common] = STATE(155),
    [sym__math_mode_common] = STATE(155),
    [sym__math_mode] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_math_env] = STATE(155),
    [sym_tag] = STATE(155),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(155),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(154),
    [sym_end_token] = STATE(78),
    [sym_include] = STATE(155),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(155),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(155),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(155),
    [sym_opt_math_group] = STATE(155),
    [sym_token] = STATE(155),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(187),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(189),
    [sym_active_char] = ACTIONS(189),
    [sym_text] = ACTIONS(189),
  },
  [59] = {
    [sym_simple_text_group] = STATE(85),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(93),
  },
  [60] = {
    [sym__common] = STATE(158),
    [sym__math_mode_common] = STATE(158),
    [sym__math_mode] = STATE(158),
    [sym_parameter] = STATE(158),
    [sym_math_env] = STATE(158),
    [sym_tag] = STATE(158),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(158),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(158),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(158),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(158),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(158),
    [sym_opt_math_group] = STATE(158),
    [sym_token] = STATE(158),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(157),
    [aux_sym_math_mode_repeat1] = STATE(158),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(193),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(193),
    [sym_active_char] = ACTIONS(193),
    [sym_text] = ACTIONS(193),
  },
  [61] = {
    [sym__common] = STATE(159),
    [sym__math_mode_common] = STATE(159),
    [sym__math_mode] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_math_env] = STATE(159),
    [sym_tag] = STATE(159),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(159),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(159),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(159),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(159),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(159),
    [sym_opt_math_group] = STATE(159),
    [sym_token] = STATE(159),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(159),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(195),
    [sym_alignment_tab] = ACTIONS(197),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(197),
    [sym_active_char] = ACTIONS(197),
    [sym_text] = ACTIONS(197),
  },
  [62] = {
    [sym_verb_body] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [63] = {
    [sym_end_display_math] = STATE(162),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(201),
  },
  [64] = {
    [sym__common] = STATE(163),
    [sym__math_mode_common] = STATE(163),
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_env] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(163),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(163),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(195),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [65] = {
    [sym_end_inline_math] = STATE(165),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(205),
  },
  [66] = {
    [sym_display_math_end] = STATE(166),
    [sym_end_token] = STATE(167),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(83),
  },
  [67] = {
    [sym_inline_math_end] = STATE(168),
    [sym_end_token] = STATE(169),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(83),
  },
  [68] = {
    [anon_sym_end] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_end_group] = ACTIONS(209),
    [sym_math_shift] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [70] = {
    [sym_verbatim_end] = STATE(171),
    [sym_end_token] = STATE(71),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(83),
  },
  [71] = {
    [sym_verbatim_env_group] = STATE(173),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(211),
  },
  [72] = {
    [aux_sym_verbatim_text_repeat1] = STATE(175),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(213),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(215),
  },
  [73] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(176),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(217),
    [sym__end_of_line] = ACTIONS(219),
  },
  [74] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(221),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [anon_sym_makeatletter] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name] = ACTIONS(55),
  },
  [75] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(177),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [76] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(178),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(223),
    [sym_end_group] = ACTIONS(223),
    [sym_math_shift] = ACTIONS(223),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [78] = {
    [sym_simple_text_group] = STATE(179),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(93),
  },
  [79] = {
    [sym__common] = STATE(120),
    [sym__text_mode_common] = STATE(120),
    [sym_inline_verbatim] = STATE(120),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(120),
    [sym_text_mode_at] = STATE(181),
    [sym_parameter] = STATE(120),
    [sym_text_env_at] = STATE(120),
    [sym__display_math_at] = STATE(120),
    [sym_tex_display_math_at] = STATE(120),
    [sym_latex_display_math_at] = STATE(120),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(120),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(120),
    [sym_tex_inline_math_at] = STATE(120),
    [sym_latex_inline_math_at] = STATE(120),
    [sym_inline_math_env_at] = STATE(120),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(120),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(120),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(120),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(120),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(120),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(120),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(120),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(120),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(120),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(120),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(120),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(120),
    [sym_texttt_token] = STATE(117),
    [sym_makeatother] = STATE(118),
    [sym_makeatother_token] = STATE(119),
    [sym_text_group_at] = STATE(120),
    [sym_token_at] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(120),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
  },
  [80] = {
    [sym__common] = STATE(183),
    [sym__text_mode_common] = STATE(183),
    [sym_inline_verbatim] = STATE(183),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(183),
    [sym_text_mode_at_region] = STATE(183),
    [sym_parameter] = STATE(183),
    [sym_text_env] = STATE(183),
    [sym__display_math] = STATE(183),
    [sym_tex_display_math] = STATE(183),
    [sym_latex_display_math] = STATE(183),
    [sym_begin_display_math] = STATE(75),
    [sym_begin_inline_math] = STATE(76),
    [sym_display_math_env] = STATE(183),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(183),
    [sym_tex_inline_math] = STATE(183),
    [sym_latex_inline_math] = STATE(183),
    [sym_inline_math_env] = STATE(183),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(183),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(183),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_end] = STATE(182),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(183),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(183),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(183),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(183),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(183),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(183),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(183),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(183),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(183),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(183),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(79),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(183),
    [sym_token] = STATE(183),
    [aux_sym_text_mode_repeat1] = STATE(183),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [81] = {
    [sym_display_math_env_name] = ACTIONS(229),
    [sym_inline_math_env_name] = ACTIONS(231),
    [sym_verbatim_env_name] = ACTIONS(233),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(235),
  },
  [82] = {
    [sym_text_group] = STATE(190),
    [sym_opt_text_group] = STATE(191),
    [sym_begin_opt] = STATE(192),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(237),
    [sym__end_of_line] = ACTIONS(239),
  },
  [83] = {
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(241),
  },
  [84] = {
    [sym_text_group] = STATE(194),
    [sym_opt_text_group] = STATE(195),
    [sym_begin_opt] = STATE(192),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(237),
    [sym__end_of_line] = ACTIONS(243),
  },
  [85] = {
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_math_shift] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [86] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(247),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(249),
    [sym_end_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(249),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(249),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_text] = ACTIONS(249),
  },
  [88] = {
    [sym__whitespace] = STATE(196),
    [sym_simple_text_group] = STATE(197),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(93),
  },
  [89] = {
    [sym__common] = STATE(203),
    [sym__text_mode_common] = STATE(203),
    [sym_inline_verbatim] = STATE(203),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(203),
    [sym_text_mode_at_region] = STATE(203),
    [sym_parameter] = STATE(203),
    [sym_text_env] = STATE(203),
    [sym__display_math] = STATE(203),
    [sym_tex_display_math] = STATE(203),
    [sym_latex_display_math] = STATE(203),
    [sym_begin_display_math] = STATE(199),
    [sym_begin_inline_math] = STATE(200),
    [sym_display_math_env] = STATE(203),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(203),
    [sym_tex_inline_math] = STATE(203),
    [sym_latex_inline_math] = STATE(203),
    [sym_inline_math_env] = STATE(203),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(203),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(203),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(203),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(203),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(203),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(203),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(203),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(203),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(203),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(203),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(203),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(203),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(201),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(203),
    [sym_token] = STATE(203),
    [sym_end_opt] = STATE(202),
    [aux_sym_text_mode_repeat1] = STATE(203),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(253),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(253),
    [sym_text] = ACTIONS(253),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(255),
    [sym_end_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(255),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_text] = ACTIONS(255),
  },
  [91] = {
    [sym_simple_text_group] = STATE(204),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(93),
  },
  [92] = {
    [sym__common] = STATE(205),
    [sym__text_mode_common] = STATE(205),
    [sym_inline_verbatim] = STATE(205),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(205),
    [sym_text_mode_at_region] = STATE(205),
    [sym_parameter] = STATE(205),
    [sym_text_env] = STATE(205),
    [sym__display_math] = STATE(205),
    [sym_tex_display_math] = STATE(205),
    [sym_latex_display_math] = STATE(205),
    [sym_begin_display_math] = STATE(199),
    [sym_begin_inline_math] = STATE(200),
    [sym_display_math_env] = STATE(205),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(205),
    [sym_tex_inline_math] = STATE(205),
    [sym_latex_inline_math] = STATE(205),
    [sym_inline_math_env] = STATE(205),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(205),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(205),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(205),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(205),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(205),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(205),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(205),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(205),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(205),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(205),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(205),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(205),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(201),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(205),
    [sym_token] = STATE(205),
    [sym_end_opt] = STATE(202),
    [aux_sym_text_mode_repeat1] = STATE(205),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(257),
    [sym_text] = ACTIONS(257),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(259),
    [sym_begin_group] = ACTIONS(259),
    [sym_end_group] = ACTIONS(259),
    [sym_math_shift] = ACTIONS(259),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(259),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(259),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_end_group] = ACTIONS(261),
    [sym_math_shift] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [95] = {
    [sym_text_group] = STATE(206),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(13),
  },
  [96] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
    [anon_sym_EQ] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(267),
    [sym_math_shift] = ACTIONS(267),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(267),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(267),
    [sym_active_char] = ACTIONS(267),
    [sym_text] = ACTIONS(267),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(271),
    [sym_begin_group] = ACTIONS(271),
    [sym_end_group] = ACTIONS(271),
    [sym_math_shift] = ACTIONS(271),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(271),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(273),
    [sym_end_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(273),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(273),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [102] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [anon_sym_makeatother] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [103] = {
    [sym__common] = STATE(215),
    [sym__text_mode_common] = STATE(215),
    [sym_inline_verbatim] = STATE(215),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(215),
    [sym_parameter] = STATE(215),
    [sym_text_env_at] = STATE(215),
    [sym__display_math_at] = STATE(215),
    [sym_tex_display_math_at] = STATE(215),
    [sym_latex_display_math_at] = STATE(215),
    [sym_begin_display_math] = STATE(213),
    [sym_begin_inline_math] = STATE(214),
    [sym_display_math_env_at] = STATE(215),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(215),
    [sym_tex_inline_math_at] = STATE(215),
    [sym_latex_inline_math_at] = STATE(215),
    [sym_inline_math_env_at] = STATE(215),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(215),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(215),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(215),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(215),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(215),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(215),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(215),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(215),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(215),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(215),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(215),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(215),
    [sym_token_at] = STATE(215),
    [aux_sym_text_mode_at_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(283),
    [sym_text] = ACTIONS(283),
  },
  [104] = {
    [sym__common] = STATE(223),
    [sym__math_mode_common] = STATE(223),
    [sym__math_mode_at] = STATE(223),
    [sym_math_mode_at] = STATE(219),
    [sym_parameter] = STATE(223),
    [sym_math_env_at] = STATE(223),
    [sym_tag_at] = STATE(223),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(223),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(223),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(223),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(223),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(223),
    [sym_opt_math_group_at] = STATE(223),
    [sym_token_at] = STATE(223),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(223),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_math_shift] = ACTIONS(289),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(291),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [105] = {
    [sym_makeatother] = STATE(225),
    [sym_makeatother_token] = STATE(119),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(293),
  },
  [106] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(226),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [107] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(228),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [108] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(229),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [109] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(230),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [110] = {
    [sym__common] = STATE(233),
    [sym__text_mode_common] = STATE(233),
    [sym_inline_verbatim] = STATE(233),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(233),
    [sym_parameter] = STATE(233),
    [sym_text_env_at] = STATE(233),
    [sym__display_math_at] = STATE(233),
    [sym_tex_display_math_at] = STATE(233),
    [sym_latex_display_math_at] = STATE(233),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(233),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(233),
    [sym_tex_inline_math_at] = STATE(233),
    [sym_latex_inline_math_at] = STATE(233),
    [sym_inline_math_env_at] = STATE(233),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(233),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(233),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_end] = STATE(232),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(233),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(233),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(233),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(233),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(233),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(233),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(233),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(233),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(233),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(233),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(233),
    [sym_token_at] = STATE(233),
    [aux_sym_text_mode_at_repeat1] = STATE(233),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(299),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(299),
    [sym_text] = ACTIONS(299),
  },
  [111] = {
    [sym_display_math_env_group] = STATE(234),
    [sym_inline_math_env_group] = STATE(83),
    [sym_verbatim_env_group] = STATE(84),
    [sym_simple_text_group] = STATE(85),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(91),
  },
  [112] = {
    [sym_text_group_at] = STATE(235),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(101),
  },
  [113] = {
    [sym_text_group_at] = STATE(236),
    [sym_opt_text_group_at] = STATE(237),
    [sym_begin_opt] = STATE(238),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(101),
  },
  [114] = {
    [sym_text_group_at] = STATE(239),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(101),
  },
  [115] = {
    [sym_text_group_at] = STATE(240),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(101),
  },
  [116] = {
    [sym_text_group_at] = STATE(241),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(101),
  },
  [117] = {
    [sym_text_group_at] = STATE(242),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(101),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(301),
    [sym_end_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(301),
    [sym_alignment_tab] = ACTIONS(301),
    [sym_parameter_char] = ACTIONS(301),
    [sym_superscript] = ACTIONS(301),
    [sym_subscript] = ACTIONS(301),
    [sym_active_char] = ACTIONS(301),
    [sym_text] = ACTIONS(301),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_end_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(303),
  },
  [120] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env_at] = STATE(243),
    [sym__display_math_at] = STATE(243),
    [sym_tex_display_math_at] = STATE(243),
    [sym_latex_display_math_at] = STATE(243),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(243),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(243),
    [sym_tex_inline_math_at] = STATE(243),
    [sym_latex_inline_math_at] = STATE(243),
    [sym_inline_math_env_at] = STATE(243),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(243),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(243),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(243),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(243),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(243),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(243),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(243),
    [sym_token_at] = STATE(243),
    [aux_sym_text_mode_at_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(305),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [121] = {
    [sym__common] = STATE(121),
    [sym__text_mode_common] = STATE(121),
    [sym_inline_verbatim] = STATE(121),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(121),
    [sym_text_mode_at_region] = STATE(121),
    [sym_parameter] = STATE(121),
    [sym_text_env] = STATE(121),
    [sym__display_math] = STATE(121),
    [sym_tex_display_math] = STATE(121),
    [sym_latex_display_math] = STATE(121),
    [sym_begin_display_math] = STATE(9),
    [sym_begin_inline_math] = STATE(10),
    [sym_display_math_env] = STATE(121),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(121),
    [sym_tex_inline_math] = STATE(121),
    [sym_latex_inline_math] = STATE(121),
    [sym_inline_math_env] = STATE(121),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(121),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(121),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(121),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(121),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(121),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(121),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(121),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(121),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(121),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(121),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(121),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(121),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(121),
    [sym_token] = STATE(121),
    [aux_sym_text_mode_repeat1] = STATE(121),
    [aux_sym_parameter_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(314),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(320),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(326),
    [sym_subscript] = ACTIONS(326),
    [sym_active_char] = ACTIONS(320),
    [sym_text] = ACTIONS(320),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(329),
    [sym_end_group] = ACTIONS(329),
    [sym_math_shift] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(329),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(329),
    [sym_active_char] = ACTIONS(329),
    [sym_text] = ACTIONS(329),
  },
  [123] = {
    [aux_sym_parameter_repeat1] = STATE(123),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_parameter_char] = ACTIONS(331),
    [sym_number] = ACTIONS(334),
  },
  [124] = {
    [sym_verb_delim] = ACTIONS(336),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [aux_sym__whitespace_repeat1] = STATE(244),
    [sym_verb_delim] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(340),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [anon_sym_LBRACK] = ACTIONS(342),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(342),
    [sym_begin_group] = ACTIONS(342),
    [sym_alignment_tab] = ACTIONS(342),
    [sym_parameter_char] = ACTIONS(342),
    [sym_superscript] = ACTIONS(342),
    [sym_subscript] = ACTIONS(342),
    [sym_active_char] = ACTIONS(342),
    [sym_text] = ACTIONS(342),
  },
  [127] = {
    [aux_sym__whitespace_repeat1] = STATE(245),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(338),
    [sym_parameter_char] = ACTIONS(338),
    [sym_superscript] = ACTIONS(338),
    [sym_subscript] = ACTIONS(338),
    [sym_active_char] = ACTIONS(338),
    [sym_text] = ACTIONS(346),
  },
  [128] = {
    [anon_sym_LBRACK] = ACTIONS(348),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(348),
    [sym_begin_group] = ACTIONS(348),
    [sym_alignment_tab] = ACTIONS(348),
    [sym_parameter_char] = ACTIONS(348),
    [sym_superscript] = ACTIONS(348),
    [sym_subscript] = ACTIONS(348),
    [sym_active_char] = ACTIONS(348),
    [sym_text] = ACTIONS(348),
  },
  [129] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(350),
  },
  [130] = {
    [aux_sym__whitespace_repeat1] = STATE(246),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(352),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(338),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(354),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(354),
  },
  [132] = {
    [aux_sym__whitespace_repeat1] = STATE(247),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(338),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(358),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(358),
  },
  [134] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(360),
  },
  [135] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(362),
  },
  [136] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(364),
  },
  [137] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(366),
  },
  [138] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(368),
    [sym_begin_group] = ACTIONS(368),
    [sym_math_shift] = ACTIONS(368),
    [sym_alignment_tab] = ACTIONS(368),
    [sym_parameter_char] = ACTIONS(368),
    [sym_superscript] = ACTIONS(368),
    [sym_subscript] = ACTIONS(368),
    [sym_active_char] = ACTIONS(368),
    [sym_text] = ACTIONS(368),
  },
  [139] = {
    [aux_sym__whitespace_repeat1] = STATE(248),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(370),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(338),
    [sym_math_shift] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(338),
    [sym_parameter_char] = ACTIONS(338),
    [sym_superscript] = ACTIONS(338),
    [sym_subscript] = ACTIONS(338),
    [sym_active_char] = ACTIONS(338),
    [sym_text] = ACTIONS(346),
  },
  [140] = {
    [sym_end_display_math] = STATE(162),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(372),
  },
  [141] = {
    [sym_end_inline_math] = STATE(165),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(374),
  },
  [142] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [anon_sym_makeatother] = ACTIONS(376),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [143] = {
    [sym_makeatother] = STATE(225),
    [sym_makeatother_token] = STATE(119),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(378),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_RBRACK] = ACTIONS(380),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(380),
    [sym_begin_group] = ACTIONS(380),
    [sym_end_group] = ACTIONS(380),
    [sym_math_shift] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(380),
    [sym_parameter_char] = ACTIONS(380),
    [sym_superscript] = ACTIONS(380),
    [sym_subscript] = ACTIONS(380),
    [sym_active_char] = ACTIONS(380),
    [sym_text] = ACTIONS(380),
  },
  [145] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(48),
    [sym_begin_inline_math] = STATE(49),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(50),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(314),
    [sym_end_group] = ACTIONS(309),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(382),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(326),
    [sym_subscript] = ACTIONS(326),
    [sym_active_char] = ACTIONS(382),
    [sym_text] = ACTIONS(382),
  },
  [146] = {
    [sym__whitespace] = STATE(253),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(385),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_end_group] = ACTIONS(387),
    [sym_math_shift] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [148] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env] = STATE(255),
    [sym_tag] = STATE(255),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(255),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(255),
    [sym_opt_math_group] = STATE(255),
    [sym_token] = STATE(255),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [149] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(393),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(395),
    [sym_begin_group] = ACTIONS(395),
    [sym_end_group] = ACTIONS(395),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(395),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [sym_text] = ACTIONS(395),
  },
  [151] = {
    [sym__common] = STATE(259),
    [sym__text_mode_common] = STATE(259),
    [sym_inline_verbatim] = STATE(259),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(259),
    [sym_text_mode] = STATE(258),
    [sym_text_mode_at_region] = STATE(259),
    [sym_parameter] = STATE(259),
    [sym_text_env] = STATE(259),
    [sym__display_math] = STATE(259),
    [sym_tex_display_math] = STATE(259),
    [sym_latex_display_math] = STATE(259),
    [sym_begin_display_math] = STATE(48),
    [sym_begin_inline_math] = STATE(49),
    [sym_display_math_env] = STATE(259),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(259),
    [sym_tex_inline_math] = STATE(259),
    [sym_latex_inline_math] = STATE(259),
    [sym_inline_math_env] = STATE(259),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(259),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(259),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(259),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(259),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(259),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(259),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(259),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(259),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(259),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(259),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(259),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(259),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(50),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(259),
    [sym_token] = STATE(259),
    [aux_sym_text_mode_repeat1] = STATE(259),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(397),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(399),
    [sym_text] = ACTIONS(399),
  },
  [152] = {
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [sym_text] = ACTIONS(401),
  },
  [153] = {
    [anon_sym_tag] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(221),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name] = ACTIONS(55),
  },
  [154] = {
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(403),
    [sym_begin_group] = ACTIONS(403),
    [sym_end_group] = ACTIONS(403),
    [sym_math_shift] = ACTIONS(403),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(403),
    [sym_superscript] = ACTIONS(403),
    [sym_subscript] = ACTIONS(403),
    [sym_active_char] = ACTIONS(403),
    [sym_text] = ACTIONS(403),
  },
  [155] = {
    [sym__common] = STATE(163),
    [sym__math_mode_common] = STATE(163),
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_env] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(163),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(260),
    [sym_end_token] = STATE(78),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(163),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(187),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [156] = {
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(405),
    [sym_begin_group] = ACTIONS(405),
    [sym_end_group] = ACTIONS(405),
    [sym_math_shift] = ACTIONS(405),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(405),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [157] = {
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(407),
    [sym_end_group] = ACTIONS(407),
    [sym_math_shift] = ACTIONS(407),
    [sym_alignment_tab] = ACTIONS(407),
    [sym_parameter_char] = ACTIONS(407),
    [sym_superscript] = ACTIONS(407),
    [sym_subscript] = ACTIONS(407),
    [sym_active_char] = ACTIONS(407),
    [sym_text] = ACTIONS(407),
  },
  [158] = {
    [sym__common] = STATE(262),
    [sym__math_mode_common] = STATE(262),
    [sym__math_mode] = STATE(262),
    [sym_parameter] = STATE(262),
    [sym_math_env] = STATE(262),
    [sym_tag] = STATE(262),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(262),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(262),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(262),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(262),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(262),
    [sym_opt_math_group] = STATE(262),
    [sym_token] = STATE(262),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(261),
    [aux_sym_math_mode_repeat1] = STATE(262),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [159] = {
    [sym__common] = STATE(159),
    [sym__math_mode_common] = STATE(159),
    [sym__math_mode] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_math_env] = STATE(159),
    [sym_tag] = STATE(159),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(159),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(159),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(159),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(159),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(159),
    [sym_opt_math_group] = STATE(159),
    [sym_token] = STATE(159),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(159),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(414),
    [sym_begin_group] = ACTIONS(417),
    [sym_math_shift] = ACTIONS(420),
    [sym_alignment_tab] = ACTIONS(422),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(422),
    [sym_subscript] = ACTIONS(422),
    [sym_active_char] = ACTIONS(422),
    [sym_text] = ACTIONS(422),
  },
  [160] = {
    [sym_verb_delim] = ACTIONS(428),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [161] = {
    [anon_sym_RBRACK] = ACTIONS(430),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(432),
    [sym_begin_group] = ACTIONS(432),
    [sym_end_group] = ACTIONS(432),
    [sym_math_shift] = ACTIONS(432),
    [sym_alignment_tab] = ACTIONS(432),
    [sym_parameter_char] = ACTIONS(432),
    [sym_superscript] = ACTIONS(432),
    [sym_subscript] = ACTIONS(432),
    [sym_active_char] = ACTIONS(432),
    [sym_text] = ACTIONS(432),
  },
  [163] = {
    [sym__common] = STATE(163),
    [sym__math_mode_common] = STATE(163),
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_env] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(163),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(163),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(414),
    [sym_begin_group] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(434),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(434),
    [sym_subscript] = ACTIONS(434),
    [sym_active_char] = ACTIONS(434),
    [sym_text] = ACTIONS(434),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(437),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_RBRACK] = ACTIONS(439),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(439),
    [sym_begin_group] = ACTIONS(439),
    [sym_end_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(439),
    [sym_parameter_char] = ACTIONS(439),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(439),
    [sym_active_char] = ACTIONS(439),
    [sym_text] = ACTIONS(439),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(441),
    [sym_end_group] = ACTIONS(441),
    [sym_math_shift] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(441),
    [sym_superscript] = ACTIONS(441),
    [sym_subscript] = ACTIONS(441),
    [sym_active_char] = ACTIONS(441),
    [sym_text] = ACTIONS(441),
  },
  [167] = {
    [sym_display_math_env_group] = STATE(267),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(443),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(445),
    [sym_end_group] = ACTIONS(445),
    [sym_math_shift] = ACTIONS(445),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(445),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(445),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [169] = {
    [sym_inline_math_env_group] = STATE(269),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(447),
  },
  [170] = {
    [sym__whitespace] = STATE(270),
    [aux_sym__whitespace_repeat1] = STATE(130),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(449),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(451),
    [sym_end_group] = ACTIONS(451),
    [sym_math_shift] = ACTIONS(451),
    [sym_alignment_tab] = ACTIONS(451),
    [sym_parameter_char] = ACTIONS(451),
    [sym_superscript] = ACTIONS(451),
    [sym_subscript] = ACTIONS(451),
    [sym_active_char] = ACTIONS(451),
    [sym_text] = ACTIONS(451),
  },
  [172] = {
    [sym_verbatim_env_name] = ACTIONS(453),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(455),
    [sym_end_group] = ACTIONS(455),
    [sym_math_shift] = ACTIONS(455),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(455),
    [sym_superscript] = ACTIONS(455),
    [sym_subscript] = ACTIONS(455),
    [sym_active_char] = ACTIONS(455),
    [sym_text] = ACTIONS(455),
  },
  [174] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(457),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(459),
    [sym__end_of_line] = ACTIONS(459),
  },
  [175] = {
    [aux_sym_verbatim_text_repeat1] = STATE(175),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(461),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(464),
  },
  [176] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(176),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(466),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(459),
    [sym__end_of_line] = ACTIONS(469),
  },
  [177] = {
    [sym_end_display_math] = STATE(162),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(472),
  },
  [178] = {
    [sym_end_inline_math] = STATE(165),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(474),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(476),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(476),
    [sym_begin_group] = ACTIONS(476),
    [sym_end_group] = ACTIONS(476),
    [sym_math_shift] = ACTIONS(476),
    [sym_alignment_tab] = ACTIONS(476),
    [sym_parameter_char] = ACTIONS(476),
    [sym_superscript] = ACTIONS(476),
    [sym_subscript] = ACTIONS(476),
    [sym_active_char] = ACTIONS(476),
    [sym_text] = ACTIONS(476),
  },
  [180] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [anon_sym_makeatother] = ACTIONS(478),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [181] = {
    [sym_makeatother] = STATE(225),
    [sym_makeatother_token] = STATE(119),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(480),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(482),
    [sym_begin_group] = ACTIONS(482),
    [sym_end_group] = ACTIONS(482),
    [sym_math_shift] = ACTIONS(482),
    [sym_alignment_tab] = ACTIONS(482),
    [sym_parameter_char] = ACTIONS(482),
    [sym_superscript] = ACTIONS(482),
    [sym_subscript] = ACTIONS(482),
    [sym_active_char] = ACTIONS(482),
    [sym_text] = ACTIONS(482),
  },
  [183] = {
    [sym__common] = STATE(183),
    [sym__text_mode_common] = STATE(183),
    [sym_inline_verbatim] = STATE(183),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(183),
    [sym_text_mode_at_region] = STATE(183),
    [sym_parameter] = STATE(183),
    [sym_text_env] = STATE(183),
    [sym__display_math] = STATE(183),
    [sym_tex_display_math] = STATE(183),
    [sym_latex_display_math] = STATE(183),
    [sym_begin_display_math] = STATE(75),
    [sym_begin_inline_math] = STATE(76),
    [sym_display_math_env] = STATE(183),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(183),
    [sym_tex_inline_math] = STATE(183),
    [sym_latex_inline_math] = STATE(183),
    [sym_inline_math_env] = STATE(183),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(183),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(183),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(183),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(183),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(183),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(183),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(183),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(183),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(183),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(183),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(183),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(183),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(79),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(183),
    [sym_token] = STATE(183),
    [aux_sym_text_mode_repeat1] = STATE(183),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(314),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(484),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(326),
    [sym_subscript] = ACTIONS(326),
    [sym_active_char] = ACTIONS(484),
    [sym_text] = ACTIONS(484),
  },
  [184] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(487),
  },
  [185] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(489),
  },
  [186] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(491),
  },
  [187] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(493),
  },
  [188] = {
    [sym__common] = STATE(281),
    [sym__text_mode_common] = STATE(281),
    [sym_inline_verbatim] = STATE(281),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(281),
    [sym_text_mode_at_region] = STATE(281),
    [sym_parameter] = STATE(281),
    [sym_text_env] = STATE(281),
    [sym__display_math] = STATE(281),
    [sym_tex_display_math] = STATE(281),
    [sym_latex_display_math] = STATE(281),
    [sym_begin_display_math] = STATE(48),
    [sym_begin_inline_math] = STATE(49),
    [sym_display_math_env] = STATE(281),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(281),
    [sym_tex_inline_math] = STATE(281),
    [sym_latex_inline_math] = STATE(281),
    [sym_inline_math_env] = STATE(281),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(281),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(281),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(281),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(281),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(281),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(281),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(281),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(281),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(281),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(281),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(281),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(281),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(50),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(281),
    [sym_token] = STATE(281),
    [aux_sym_text_mode_repeat1] = STATE(281),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(495),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [189] = {
    [anon_sym_LBRACK] = ACTIONS(499),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(499),
    [sym_begin_group] = ACTIONS(499),
    [sym_alignment_tab] = ACTIONS(499),
    [sym_parameter_char] = ACTIONS(499),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(499),
    [sym_active_char] = ACTIONS(499),
    [sym_text] = ACTIONS(499),
  },
  [190] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(501),
  },
  [191] = {
    [sym_text_group] = STATE(283),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(237),
    [sym__end_of_line] = ACTIONS(501),
  },
  [192] = {
    [sym__common] = STATE(286),
    [sym__text_mode_common] = STATE(286),
    [sym_inline_verbatim] = STATE(286),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(286),
    [sym_text_mode_at_region] = STATE(286),
    [sym_parameter] = STATE(286),
    [sym_text_env] = STATE(286),
    [sym__display_math] = STATE(286),
    [sym_tex_display_math] = STATE(286),
    [sym_latex_display_math] = STATE(286),
    [sym_begin_display_math] = STATE(199),
    [sym_begin_inline_math] = STATE(200),
    [sym_display_math_env] = STATE(286),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(286),
    [sym_tex_inline_math] = STATE(286),
    [sym_latex_inline_math] = STATE(286),
    [sym_inline_math_env] = STATE(286),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(286),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(286),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(286),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(286),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(286),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(286),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(286),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(286),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(286),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(286),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(286),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(286),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(201),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(286),
    [sym_token] = STATE(286),
    [sym_end_opt] = STATE(285),
    [aux_sym_text_mode_repeat1] = STATE(286),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(505),
    [sym_text] = ACTIONS(505),
  },
  [193] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(507),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(509),
    [sym__end_of_line] = ACTIONS(509),
  },
  [194] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(511),
  },
  [195] = {
    [sym_text_group] = STATE(288),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(237),
    [sym__end_of_line] = ACTIONS(511),
  },
  [196] = {
    [sym_simple_text_group] = STATE(289),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(93),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(513),
    [sym_end_group] = ACTIONS(513),
    [sym_math_shift] = ACTIONS(513),
    [sym_alignment_tab] = ACTIONS(513),
    [sym_parameter_char] = ACTIONS(513),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(513),
    [sym_active_char] = ACTIONS(513),
    [sym_text] = ACTIONS(513),
  },
  [198] = {
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(405),
  },
  [199] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(290),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [200] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(291),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [201] = {
    [sym__common] = STATE(120),
    [sym__text_mode_common] = STATE(120),
    [sym_inline_verbatim] = STATE(120),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(120),
    [sym_text_mode_at] = STATE(293),
    [sym_parameter] = STATE(120),
    [sym_text_env_at] = STATE(120),
    [sym__display_math_at] = STATE(120),
    [sym_tex_display_math_at] = STATE(120),
    [sym_latex_display_math_at] = STATE(120),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(120),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(120),
    [sym_tex_inline_math_at] = STATE(120),
    [sym_latex_inline_math_at] = STATE(120),
    [sym_inline_math_env_at] = STATE(120),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(120),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(120),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(120),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(120),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(120),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(120),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(120),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(120),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(120),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(120),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(120),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(120),
    [sym_texttt_token] = STATE(117),
    [sym_makeatother] = STATE(118),
    [sym_makeatother_token] = STATE(119),
    [sym_text_group_at] = STATE(120),
    [sym_token_at] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(120),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(515),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
  },
  [202] = {
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(517),
  },
  [203] = {
    [sym__common] = STATE(295),
    [sym__text_mode_common] = STATE(295),
    [sym_inline_verbatim] = STATE(295),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(295),
    [sym_text_mode_at_region] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_text_env] = STATE(295),
    [sym__display_math] = STATE(295),
    [sym_tex_display_math] = STATE(295),
    [sym_latex_display_math] = STATE(295),
    [sym_begin_display_math] = STATE(199),
    [sym_begin_inline_math] = STATE(200),
    [sym_display_math_env] = STATE(295),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(295),
    [sym_tex_inline_math] = STATE(295),
    [sym_latex_inline_math] = STATE(295),
    [sym_inline_math_env] = STATE(295),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(295),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(295),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(295),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(295),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(295),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(295),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(295),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(295),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(295),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(295),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(295),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(295),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(201),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(295),
    [sym_token] = STATE(295),
    [sym_end_opt] = STATE(294),
    [aux_sym_text_mode_repeat1] = STATE(295),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(519),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(519),
    [sym_text] = ACTIONS(519),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(521),
    [sym_begin_group] = ACTIONS(521),
    [sym_end_group] = ACTIONS(521),
    [sym_math_shift] = ACTIONS(521),
    [sym_alignment_tab] = ACTIONS(521),
    [sym_parameter_char] = ACTIONS(521),
    [sym_superscript] = ACTIONS(521),
    [sym_subscript] = ACTIONS(521),
    [sym_active_char] = ACTIONS(521),
    [sym_text] = ACTIONS(521),
  },
  [205] = {
    [sym__common] = STATE(295),
    [sym__text_mode_common] = STATE(295),
    [sym_inline_verbatim] = STATE(295),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(295),
    [sym_text_mode_at_region] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_text_env] = STATE(295),
    [sym__display_math] = STATE(295),
    [sym_tex_display_math] = STATE(295),
    [sym_latex_display_math] = STATE(295),
    [sym_begin_display_math] = STATE(199),
    [sym_begin_inline_math] = STATE(200),
    [sym_display_math_env] = STATE(295),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(295),
    [sym_tex_inline_math] = STATE(295),
    [sym_latex_inline_math] = STATE(295),
    [sym_inline_math_env] = STATE(295),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(295),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(295),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(295),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(295),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(295),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(295),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(295),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(295),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(295),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(295),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(295),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(295),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(201),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(295),
    [sym_token] = STATE(295),
    [sym_end_opt] = STATE(294),
    [aux_sym_text_mode_repeat1] = STATE(295),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(519),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(519),
    [sym_text] = ACTIONS(519),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(523),
    [sym_begin_group] = ACTIONS(523),
    [sym_end_group] = ACTIONS(523),
    [sym_math_shift] = ACTIONS(523),
    [sym_alignment_tab] = ACTIONS(523),
    [sym_parameter_char] = ACTIONS(523),
    [sym_superscript] = ACTIONS(523),
    [sym_subscript] = ACTIONS(523),
    [sym_active_char] = ACTIONS(523),
    [sym_text] = ACTIONS(523),
  },
  [207] = {
    [anon_sym_EQ] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [208] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_number] = ACTIONS(525),
  },
  [209] = {
    [sym__whitespace] = STATE(297),
    [aux_sym__whitespace_repeat1] = STATE(298),
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(527),
    [sym_begin_group] = ACTIONS(527),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(527),
    [sym_parameter_char] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [sym_active_char] = ACTIONS(527),
    [sym_text] = ACTIONS(531),
  },
  [210] = {
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(533),
    [sym_begin_group] = ACTIONS(533),
    [sym_end_group] = ACTIONS(533),
    [sym_math_shift] = ACTIONS(533),
    [sym_alignment_tab] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(533),
    [sym_superscript] = ACTIONS(533),
    [sym_subscript] = ACTIONS(533),
    [sym_active_char] = ACTIONS(533),
    [sym_text] = ACTIONS(533),
  },
  [211] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [212] = {
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_end_group] = ACTIONS(535),
    [sym_math_shift] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [213] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(299),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [214] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(300),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [215] = {
    [sym__common] = STATE(302),
    [sym__text_mode_common] = STATE(302),
    [sym_inline_verbatim] = STATE(302),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(302),
    [sym_parameter] = STATE(302),
    [sym_text_env_at] = STATE(302),
    [sym__display_math_at] = STATE(302),
    [sym_tex_display_math_at] = STATE(302),
    [sym_latex_display_math_at] = STATE(302),
    [sym_begin_display_math] = STATE(213),
    [sym_begin_inline_math] = STATE(214),
    [sym_display_math_env_at] = STATE(302),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(302),
    [sym_tex_inline_math_at] = STATE(302),
    [sym_latex_inline_math_at] = STATE(302),
    [sym_inline_math_env_at] = STATE(302),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(302),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(302),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(302),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(302),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(302),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(302),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(302),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(302),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(302),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(302),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(302),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(302),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(302),
    [sym_token_at] = STATE(302),
    [aux_sym_text_mode_at_repeat1] = STATE(302),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(537),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(539),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(539),
    [sym_text] = ACTIONS(539),
  },
  [216] = {
    [anon_sym_tag] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [217] = {
    [sym__common] = STATE(304),
    [sym__math_mode_common] = STATE(304),
    [sym__math_mode_at] = STATE(304),
    [sym_parameter] = STATE(304),
    [sym_math_env_at] = STATE(304),
    [sym_tag_at] = STATE(304),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(304),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(304),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(304),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(304),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(304),
    [sym_opt_math_group_at] = STATE(304),
    [sym_token_at] = STATE(304),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(304),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_end_group] = ACTIONS(541),
    [sym_alignment_tab] = ACTIONS(543),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(543),
    [sym_subscript] = ACTIONS(543),
    [sym_active_char] = ACTIONS(543),
    [sym_text] = ACTIONS(543),
  },
  [218] = {
    [sym__common] = STATE(223),
    [sym__math_mode_common] = STATE(223),
    [sym__math_mode_at] = STATE(223),
    [sym_math_mode_at] = STATE(305),
    [sym_parameter] = STATE(223),
    [sym_math_env_at] = STATE(223),
    [sym_tag_at] = STATE(223),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(223),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(223),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(223),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(223),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(223),
    [sym_opt_math_group_at] = STATE(223),
    [sym_token_at] = STATE(223),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(223),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(291),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [219] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(545),
  },
  [220] = {
    [sym_math_text_group_at] = STATE(308),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(547),
  },
  [221] = {
    [sym__common] = STATE(311),
    [sym__math_mode_common] = STATE(311),
    [sym__math_mode_at] = STATE(311),
    [sym_parameter] = STATE(311),
    [sym_math_env_at] = STATE(311),
    [sym_tag_at] = STATE(311),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(311),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(310),
    [sym_end_token] = STATE(78),
    [sym_include_at] = STATE(311),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(311),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(311),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(311),
    [sym_opt_math_group_at] = STATE(311),
    [sym_token_at] = STATE(311),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(311),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(549),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_text] = ACTIONS(551),
  },
  [222] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(222),
    [sym_end_opt] = STATE(312),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(553),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(553),
    [sym_subscript] = ACTIONS(553),
    [sym_active_char] = ACTIONS(553),
    [sym_text] = ACTIONS(553),
  },
  [223] = {
    [sym__common] = STATE(314),
    [sym__math_mode_common] = STATE(314),
    [sym__math_mode_at] = STATE(314),
    [sym_parameter] = STATE(314),
    [sym_math_env_at] = STATE(314),
    [sym_tag_at] = STATE(314),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(314),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(314),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(314),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(314),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(314),
    [sym_opt_math_group_at] = STATE(314),
    [sym_token_at] = STATE(314),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(314),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_math_shift] = ACTIONS(555),
    [sym_alignment_tab] = ACTIONS(557),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(557),
    [sym_subscript] = ACTIONS(557),
    [sym_active_char] = ACTIONS(557),
    [sym_text] = ACTIONS(557),
  },
  [224] = {
    [anon_sym_makeatother] = ACTIONS(559),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(561),
    [sym_begin_group] = ACTIONS(561),
    [sym_end_group] = ACTIONS(561),
    [sym_math_shift] = ACTIONS(561),
    [sym_alignment_tab] = ACTIONS(561),
    [sym_parameter_char] = ACTIONS(561),
    [sym_superscript] = ACTIONS(561),
    [sym_subscript] = ACTIONS(561),
    [sym_active_char] = ACTIONS(561),
    [sym_text] = ACTIONS(561),
  },
  [226] = {
    [sym_end_display_math] = STATE(315),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(472),
  },
  [227] = {
    [sym__common] = STATE(316),
    [sym__math_mode_common] = STATE(316),
    [sym__math_mode_at] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_math_env_at] = STATE(316),
    [sym_tag_at] = STATE(316),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(316),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(316),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(316),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(316),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(316),
    [sym_opt_math_group_at] = STATE(316),
    [sym_token_at] = STATE(316),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(316),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(555),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(563),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(563),
    [sym_subscript] = ACTIONS(563),
    [sym_active_char] = ACTIONS(563),
    [sym_text] = ACTIONS(563),
  },
  [228] = {
    [sym_end_inline_math] = STATE(317),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(474),
  },
  [229] = {
    [sym_display_math_end] = STATE(318),
    [sym_end_token] = STATE(167),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(83),
  },
  [230] = {
    [sym_inline_math_end] = STATE(319),
    [sym_end_token] = STATE(169),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(83),
  },
  [231] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(221),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [232] = {
    [anon_sym_RBRACK] = ACTIONS(565),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(565),
    [sym_begin_group] = ACTIONS(565),
    [sym_end_group] = ACTIONS(565),
    [sym_math_shift] = ACTIONS(565),
    [sym_alignment_tab] = ACTIONS(565),
    [sym_parameter_char] = ACTIONS(565),
    [sym_superscript] = ACTIONS(565),
    [sym_subscript] = ACTIONS(565),
    [sym_active_char] = ACTIONS(565),
    [sym_text] = ACTIONS(565),
  },
  [233] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env_at] = STATE(243),
    [sym__display_math_at] = STATE(243),
    [sym_tex_display_math_at] = STATE(243),
    [sym_latex_display_math_at] = STATE(243),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(243),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(243),
    [sym_tex_inline_math_at] = STATE(243),
    [sym_latex_inline_math_at] = STATE(243),
    [sym_inline_math_env_at] = STATE(243),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_end] = STATE(320),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(243),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(243),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(243),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(243),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(243),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(243),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(243),
    [sym_token_at] = STATE(243),
    [aux_sym_text_mode_at_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [234] = {
    [sym_text_group_at] = STATE(323),
    [sym_opt_text_group_at] = STATE(324),
    [sym_begin_opt] = STATE(325),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(567),
    [sym__end_of_line] = ACTIONS(569),
  },
  [235] = {
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(571),
    [sym_begin_group] = ACTIONS(571),
    [sym_end_group] = ACTIONS(571),
    [sym_math_shift] = ACTIONS(571),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(571),
    [sym_superscript] = ACTIONS(571),
    [sym_subscript] = ACTIONS(571),
    [sym_active_char] = ACTIONS(571),
    [sym_text] = ACTIONS(571),
  },
  [236] = {
    [anon_sym_RBRACK] = ACTIONS(573),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(573),
    [sym_begin_group] = ACTIONS(573),
    [sym_end_group] = ACTIONS(573),
    [sym_math_shift] = ACTIONS(573),
    [sym_alignment_tab] = ACTIONS(573),
    [sym_parameter_char] = ACTIONS(573),
    [sym_superscript] = ACTIONS(573),
    [sym_subscript] = ACTIONS(573),
    [sym_active_char] = ACTIONS(573),
    [sym_text] = ACTIONS(573),
  },
  [237] = {
    [sym_text_group_at] = STATE(326),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(101),
  },
  [238] = {
    [sym__common] = STATE(330),
    [sym__text_mode_common] = STATE(330),
    [sym_inline_verbatim] = STATE(330),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(330),
    [sym_parameter] = STATE(330),
    [sym_text_env_at] = STATE(330),
    [sym__display_math_at] = STATE(330),
    [sym_tex_display_math_at] = STATE(330),
    [sym_latex_display_math_at] = STATE(330),
    [sym_begin_display_math] = STATE(327),
    [sym_begin_inline_math] = STATE(328),
    [sym_display_math_env_at] = STATE(330),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(330),
    [sym_tex_inline_math_at] = STATE(330),
    [sym_latex_inline_math_at] = STATE(330),
    [sym_inline_math_env_at] = STATE(330),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(330),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(330),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(330),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(330),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(330),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(330),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(330),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(330),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(330),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(330),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(330),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(330),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(330),
    [sym_token_at] = STATE(330),
    [sym_end_opt] = STATE(329),
    [aux_sym_text_mode_at_repeat1] = STATE(330),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(575),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(575),
    [sym_text] = ACTIONS(575),
  },
  [239] = {
    [anon_sym_RBRACK] = ACTIONS(577),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(577),
    [sym_begin_group] = ACTIONS(577),
    [sym_end_group] = ACTIONS(577),
    [sym_math_shift] = ACTIONS(577),
    [sym_alignment_tab] = ACTIONS(577),
    [sym_parameter_char] = ACTIONS(577),
    [sym_superscript] = ACTIONS(577),
    [sym_subscript] = ACTIONS(577),
    [sym_active_char] = ACTIONS(577),
    [sym_text] = ACTIONS(577),
  },
  [240] = {
    [anon_sym_RBRACK] = ACTIONS(579),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(579),
    [sym_begin_group] = ACTIONS(579),
    [sym_end_group] = ACTIONS(579),
    [sym_math_shift] = ACTIONS(579),
    [sym_alignment_tab] = ACTIONS(579),
    [sym_parameter_char] = ACTIONS(579),
    [sym_superscript] = ACTIONS(579),
    [sym_subscript] = ACTIONS(579),
    [sym_active_char] = ACTIONS(579),
    [sym_text] = ACTIONS(579),
  },
  [241] = {
    [anon_sym_RBRACK] = ACTIONS(581),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(581),
    [sym_begin_group] = ACTIONS(581),
    [sym_end_group] = ACTIONS(581),
    [sym_math_shift] = ACTIONS(581),
    [sym_alignment_tab] = ACTIONS(581),
    [sym_parameter_char] = ACTIONS(581),
    [sym_superscript] = ACTIONS(581),
    [sym_subscript] = ACTIONS(581),
    [sym_active_char] = ACTIONS(581),
    [sym_text] = ACTIONS(581),
  },
  [242] = {
    [anon_sym_RBRACK] = ACTIONS(583),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(583),
    [sym_end_group] = ACTIONS(583),
    [sym_math_shift] = ACTIONS(583),
    [sym_alignment_tab] = ACTIONS(583),
    [sym_parameter_char] = ACTIONS(583),
    [sym_superscript] = ACTIONS(583),
    [sym_subscript] = ACTIONS(583),
    [sym_active_char] = ACTIONS(583),
    [sym_text] = ACTIONS(583),
  },
  [243] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env_at] = STATE(243),
    [sym__display_math_at] = STATE(243),
    [sym_tex_display_math_at] = STATE(243),
    [sym_latex_display_math_at] = STATE(243),
    [sym_begin_display_math] = STATE(106),
    [sym_begin_inline_math] = STATE(107),
    [sym_display_math_env_at] = STATE(243),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(243),
    [sym_tex_inline_math_at] = STATE(243),
    [sym_latex_inline_math_at] = STATE(243),
    [sym_inline_math_env_at] = STATE(243),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(243),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(243),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(243),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(243),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(243),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(243),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(243),
    [sym_token_at] = STATE(243),
    [aux_sym_text_mode_at_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(588),
    [sym_math_shift] = ACTIONS(591),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(597),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(594),
    [sym_text] = ACTIONS(594),
  },
  [244] = {
    [aux_sym__whitespace_repeat1] = STATE(244),
    [sym_verb_delim] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(605),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [245] = {
    [aux_sym__whitespace_repeat1] = STATE(245),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(608),
    [anon_sym_LBRACK] = ACTIONS(603),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(603),
    [sym_begin_group] = ACTIONS(603),
    [sym_alignment_tab] = ACTIONS(603),
    [sym_parameter_char] = ACTIONS(603),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(603),
    [sym_active_char] = ACTIONS(603),
    [sym_text] = ACTIONS(611),
  },
  [246] = {
    [aux_sym__whitespace_repeat1] = STATE(246),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(613),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(603),
  },
  [247] = {
    [aux_sym__whitespace_repeat1] = STATE(247),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(603),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(603),
  },
  [248] = {
    [aux_sym__whitespace_repeat1] = STATE(248),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(619),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(603),
    [sym_begin_group] = ACTIONS(603),
    [sym_math_shift] = ACTIONS(603),
    [sym_alignment_tab] = ACTIONS(603),
    [sym_parameter_char] = ACTIONS(603),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(603),
    [sym_active_char] = ACTIONS(603),
    [sym_text] = ACTIONS(611),
  },
  [249] = {
    [anon_sym_RBRACK] = ACTIONS(622),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [250] = {
    [anon_sym_RPAREN] = ACTIONS(624),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [251] = {
    [sym__whitespace] = STATE(297),
    [aux_sym__whitespace_repeat1] = STATE(333),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(527),
    [sym_begin_group] = ACTIONS(527),
    [sym_end_group] = ACTIONS(527),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(527),
    [sym_parameter_char] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [sym_active_char] = ACTIONS(527),
    [sym_text] = ACTIONS(531),
  },
  [252] = {
    [anon_sym_makeatother] = ACTIONS(628),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [253] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(630),
  },
  [254] = {
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_RBRACK] = ACTIONS(632),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(632),
    [sym_begin_group] = ACTIONS(632),
    [sym_end_group] = ACTIONS(632),
    [sym_math_shift] = ACTIONS(632),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(632),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_text] = ACTIONS(632),
  },
  [255] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env] = STATE(255),
    [sym_tag] = STATE(255),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(255),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(255),
    [sym_opt_math_group] = STATE(255),
    [sym_token] = STATE(255),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(414),
    [sym_begin_group] = ACTIONS(417),
    [sym_end_group] = ACTIONS(420),
    [sym_alignment_tab] = ACTIONS(634),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(634),
    [sym_subscript] = ACTIONS(634),
    [sym_active_char] = ACTIONS(634),
    [sym_text] = ACTIONS(634),
  },
  [256] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(637),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(639),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(639),
    [sym_begin_group] = ACTIONS(639),
    [sym_end_group] = ACTIONS(639),
    [sym_math_shift] = ACTIONS(639),
    [sym_alignment_tab] = ACTIONS(639),
    [sym_parameter_char] = ACTIONS(639),
    [sym_superscript] = ACTIONS(639),
    [sym_subscript] = ACTIONS(639),
    [sym_active_char] = ACTIONS(639),
    [sym_text] = ACTIONS(639),
  },
  [258] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(641),
  },
  [259] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(48),
    [sym_begin_inline_math] = STATE(49),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(50),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(109),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(173),
    [sym_text] = ACTIONS(173),
  },
  [260] = {
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(643),
    [sym_begin_group] = ACTIONS(643),
    [sym_end_group] = ACTIONS(643),
    [sym_math_shift] = ACTIONS(643),
    [sym_alignment_tab] = ACTIONS(643),
    [sym_parameter_char] = ACTIONS(643),
    [sym_superscript] = ACTIONS(643),
    [sym_subscript] = ACTIONS(643),
    [sym_active_char] = ACTIONS(643),
    [sym_text] = ACTIONS(643),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(645),
    [sym_begin_group] = ACTIONS(645),
    [sym_end_group] = ACTIONS(645),
    [sym_math_shift] = ACTIONS(645),
    [sym_alignment_tab] = ACTIONS(645),
    [sym_parameter_char] = ACTIONS(645),
    [sym_superscript] = ACTIONS(645),
    [sym_subscript] = ACTIONS(645),
    [sym_active_char] = ACTIONS(645),
    [sym_text] = ACTIONS(645),
  },
  [262] = {
    [sym__common] = STATE(262),
    [sym__math_mode_common] = STATE(262),
    [sym__math_mode] = STATE(262),
    [sym_parameter] = STATE(262),
    [sym_math_env] = STATE(262),
    [sym_tag] = STATE(262),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(262),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(262),
    [sym_include_token] = STATE(18),
    [sym_storage] = STATE(262),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(262),
    [sym_catcode_token] = STATE(21),
    [sym_math_group] = STATE(262),
    [sym_opt_math_group] = STATE(262),
    [sym_token] = STATE(262),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(262),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(420),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(414),
    [sym_begin_group] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(647),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(647),
    [sym_subscript] = ACTIONS(647),
    [sym_active_char] = ACTIONS(647),
    [sym_text] = ACTIONS(647),
  },
  [263] = {
    [ts_builtin_sym_end] = ACTIONS(650),
    [anon_sym_RBRACK] = ACTIONS(650),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(650),
    [sym_begin_group] = ACTIONS(650),
    [sym_end_group] = ACTIONS(650),
    [sym_math_shift] = ACTIONS(650),
    [sym_alignment_tab] = ACTIONS(650),
    [sym_parameter_char] = ACTIONS(650),
    [sym_superscript] = ACTIONS(650),
    [sym_subscript] = ACTIONS(650),
    [sym_active_char] = ACTIONS(650),
    [sym_text] = ACTIONS(650),
  },
  [264] = {
    [sym__whitespace] = STATE(336),
    [aux_sym__whitespace_repeat1] = STATE(298),
    [ts_builtin_sym_end] = ACTIONS(652),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(652),
    [sym_begin_group] = ACTIONS(652),
    [sym_math_shift] = ACTIONS(652),
    [sym_alignment_tab] = ACTIONS(652),
    [sym_parameter_char] = ACTIONS(652),
    [sym_superscript] = ACTIONS(652),
    [sym_subscript] = ACTIONS(652),
    [sym_active_char] = ACTIONS(652),
    [sym_text] = ACTIONS(654),
  },
  [265] = {
    [sym__whitespace] = STATE(337),
    [aux_sym__whitespace_repeat1] = STATE(298),
    [ts_builtin_sym_end] = ACTIONS(656),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_math_shift] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_text] = ACTIONS(658),
  },
  [266] = {
    [sym_display_math_env_name] = ACTIONS(660),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [anon_sym_RBRACK] = ACTIONS(662),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(662),
    [sym_begin_group] = ACTIONS(662),
    [sym_end_group] = ACTIONS(662),
    [sym_math_shift] = ACTIONS(662),
    [sym_alignment_tab] = ACTIONS(662),
    [sym_parameter_char] = ACTIONS(662),
    [sym_superscript] = ACTIONS(662),
    [sym_subscript] = ACTIONS(662),
    [sym_active_char] = ACTIONS(662),
    [sym_text] = ACTIONS(662),
  },
  [268] = {
    [sym_inline_math_env_name] = ACTIONS(664),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(666),
    [anon_sym_RBRACK] = ACTIONS(666),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(666),
    [sym_begin_group] = ACTIONS(666),
    [sym_end_group] = ACTIONS(666),
    [sym_math_shift] = ACTIONS(666),
    [sym_alignment_tab] = ACTIONS(666),
    [sym_parameter_char] = ACTIONS(666),
    [sym_superscript] = ACTIONS(666),
    [sym_subscript] = ACTIONS(666),
    [sym_active_char] = ACTIONS(666),
    [sym_text] = ACTIONS(666),
  },
  [270] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(668),
  },
  [271] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(670),
  },
  [272] = {
    [anon_sym_RBRACK] = ACTIONS(672),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [274] = {
    [sym__whitespace] = STATE(297),
    [aux_sym__whitespace_repeat1] = STATE(139),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(527),
    [sym_begin_group] = ACTIONS(527),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(527),
    [sym_parameter_char] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [sym_active_char] = ACTIONS(527),
    [sym_text] = ACTIONS(531),
  },
  [275] = {
    [anon_sym_makeatother] = ACTIONS(676),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [276] = {
    [anon_sym_LBRACK] = ACTIONS(678),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(678),
    [sym__end_of_line] = ACTIONS(678),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(680),
    [sym_begin_group] = ACTIONS(680),
    [sym_end_group] = ACTIONS(680),
    [sym_math_shift] = ACTIONS(680),
    [sym_alignment_tab] = ACTIONS(680),
    [sym_parameter_char] = ACTIONS(680),
    [sym_superscript] = ACTIONS(680),
    [sym_subscript] = ACTIONS(680),
    [sym_active_char] = ACTIONS(680),
    [sym_text] = ACTIONS(680),
  },
  [278] = {
    [anon_sym_LBRACK] = ACTIONS(682),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(682),
    [sym__end_of_line] = ACTIONS(682),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_RBRACK] = ACTIONS(684),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(684),
    [sym_begin_group] = ACTIONS(684),
    [sym_end_group] = ACTIONS(684),
    [sym_math_shift] = ACTIONS(684),
    [sym_alignment_tab] = ACTIONS(684),
    [sym_parameter_char] = ACTIONS(684),
    [sym_superscript] = ACTIONS(684),
    [sym_subscript] = ACTIONS(684),
    [sym_active_char] = ACTIONS(684),
    [sym_text] = ACTIONS(684),
  },
  [280] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(167),
  },
  [281] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(48),
    [sym_begin_inline_math] = STATE(49),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(50),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(686),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(173),
    [sym_text] = ACTIONS(173),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(688),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(688),
    [sym_begin_group] = ACTIONS(688),
    [sym_alignment_tab] = ACTIONS(688),
    [sym_parameter_char] = ACTIONS(688),
    [sym_superscript] = ACTIONS(688),
    [sym_subscript] = ACTIONS(688),
    [sym_active_char] = ACTIONS(688),
    [sym_text] = ACTIONS(688),
  },
  [283] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(690),
  },
  [284] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(405),
    [sym__end_of_line] = ACTIONS(405),
  },
  [285] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(517),
    [sym__end_of_line] = ACTIONS(517),
  },
  [286] = {
    [sym__common] = STATE(295),
    [sym__text_mode_common] = STATE(295),
    [sym_inline_verbatim] = STATE(295),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(295),
    [sym_text_mode_at_region] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_text_env] = STATE(295),
    [sym__display_math] = STATE(295),
    [sym_tex_display_math] = STATE(295),
    [sym_latex_display_math] = STATE(295),
    [sym_begin_display_math] = STATE(199),
    [sym_begin_inline_math] = STATE(200),
    [sym_display_math_env] = STATE(295),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(295),
    [sym_tex_inline_math] = STATE(295),
    [sym_latex_inline_math] = STATE(295),
    [sym_inline_math_env] = STATE(295),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(295),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(295),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(295),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(295),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(295),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(295),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(295),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(295),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(295),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(295),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(295),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(295),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(201),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(295),
    [sym_token] = STATE(295),
    [sym_end_opt] = STATE(344),
    [aux_sym_text_mode_repeat1] = STATE(295),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(519),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(519),
    [sym_text] = ACTIONS(519),
  },
  [287] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(692),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(694),
    [sym__end_of_line] = ACTIONS(694),
  },
  [288] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(696),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(698),
    [anon_sym_RBRACK] = ACTIONS(698),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(698),
    [sym_begin_group] = ACTIONS(698),
    [sym_end_group] = ACTIONS(698),
    [sym_math_shift] = ACTIONS(698),
    [sym_alignment_tab] = ACTIONS(698),
    [sym_parameter_char] = ACTIONS(698),
    [sym_superscript] = ACTIONS(698),
    [sym_subscript] = ACTIONS(698),
    [sym_active_char] = ACTIONS(698),
    [sym_text] = ACTIONS(698),
  },
  [290] = {
    [sym_end_display_math] = STATE(162),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(700),
  },
  [291] = {
    [sym_end_inline_math] = STATE(165),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(702),
  },
  [292] = {
    [anon_sym_verb] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_textbf] = ACTIONS(47),
    [anon_sym_textit] = ACTIONS(49),
    [anon_sym_texttt] = ACTIONS(51),
    [anon_sym_makeatother] = ACTIONS(704),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [293] = {
    [sym_makeatother] = STATE(225),
    [sym_makeatother_token] = STATE(119),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(706),
  },
  [294] = {
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(708),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(708),
  },
  [295] = {
    [sym__common] = STATE(295),
    [sym__text_mode_common] = STATE(295),
    [sym_inline_verbatim] = STATE(295),
    [sym_verb_token] = STATE(7),
    [sym__text_mode] = STATE(295),
    [sym_text_mode_at_region] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_text_env] = STATE(295),
    [sym__display_math] = STATE(295),
    [sym_tex_display_math] = STATE(295),
    [sym_latex_display_math] = STATE(295),
    [sym_begin_display_math] = STATE(199),
    [sym_begin_inline_math] = STATE(200),
    [sym_display_math_env] = STATE(295),
    [sym_display_math_begin] = STATE(11),
    [sym__inline_math] = STATE(295),
    [sym_tex_inline_math] = STATE(295),
    [sym_latex_inline_math] = STATE(295),
    [sym_inline_math_env] = STATE(295),
    [sym_inline_math_begin] = STATE(12),
    [sym_verbatim_env] = STATE(295),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(295),
    [sym_begin] = STATE(14),
    [sym_begin_token] = STATE(15),
    [sym_documentclass] = STATE(295),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(295),
    [sym_usepackage_token] = STATE(17),
    [sym_include] = STATE(295),
    [sym_include_token] = STATE(18),
    [sym_section] = STATE(295),
    [sym_section_token] = STATE(19),
    [sym_storage] = STATE(295),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(295),
    [sym_catcode_token] = STATE(21),
    [sym_emph] = STATE(295),
    [sym_emph_token] = STATE(22),
    [sym_textbf] = STATE(295),
    [sym_textbf_token] = STATE(23),
    [sym_textit] = STATE(295),
    [sym_textit_token] = STATE(24),
    [sym_texttt] = STATE(295),
    [sym_texttt_token] = STATE(25),
    [sym_makeatletter] = STATE(201),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(295),
    [sym_token] = STATE(295),
    [aux_sym_text_mode_repeat1] = STATE(295),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(314),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(710),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(326),
    [sym_subscript] = ACTIONS(326),
    [sym_active_char] = ACTIONS(710),
    [sym_text] = ACTIONS(710),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_RBRACK] = ACTIONS(713),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(713),
    [sym_begin_group] = ACTIONS(713),
    [sym_end_group] = ACTIONS(713),
    [sym_math_shift] = ACTIONS(713),
    [sym_alignment_tab] = ACTIONS(713),
    [sym_parameter_char] = ACTIONS(713),
    [sym_superscript] = ACTIONS(713),
    [sym_subscript] = ACTIONS(713),
    [sym_active_char] = ACTIONS(713),
    [sym_text] = ACTIONS(713),
  },
  [297] = {
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_RBRACK] = ACTIONS(715),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(715),
    [sym_begin_group] = ACTIONS(715),
    [sym_end_group] = ACTIONS(715),
    [sym_math_shift] = ACTIONS(715),
    [sym_alignment_tab] = ACTIONS(715),
    [sym_parameter_char] = ACTIONS(715),
    [sym_superscript] = ACTIONS(715),
    [sym_subscript] = ACTIONS(715),
    [sym_active_char] = ACTIONS(715),
    [sym_text] = ACTIONS(715),
  },
  [298] = {
    [aux_sym__whitespace_repeat1] = STATE(350),
    [ts_builtin_sym_end] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(338),
    [sym_math_shift] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(338),
    [sym_parameter_char] = ACTIONS(338),
    [sym_superscript] = ACTIONS(338),
    [sym_subscript] = ACTIONS(338),
    [sym_active_char] = ACTIONS(338),
    [sym_text] = ACTIONS(346),
  },
  [299] = {
    [sym_end_display_math] = STATE(315),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(372),
  },
  [300] = {
    [sym_end_inline_math] = STATE(317),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(374),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(719),
    [sym_begin_group] = ACTIONS(719),
    [sym_end_group] = ACTIONS(719),
    [sym_math_shift] = ACTIONS(719),
    [sym_alignment_tab] = ACTIONS(719),
    [sym_parameter_char] = ACTIONS(719),
    [sym_superscript] = ACTIONS(719),
    [sym_subscript] = ACTIONS(719),
    [sym_active_char] = ACTIONS(719),
    [sym_text] = ACTIONS(719),
  },
  [302] = {
    [sym__common] = STATE(302),
    [sym__text_mode_common] = STATE(302),
    [sym_inline_verbatim] = STATE(302),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(302),
    [sym_parameter] = STATE(302),
    [sym_text_env_at] = STATE(302),
    [sym__display_math_at] = STATE(302),
    [sym_tex_display_math_at] = STATE(302),
    [sym_latex_display_math_at] = STATE(302),
    [sym_begin_display_math] = STATE(213),
    [sym_begin_inline_math] = STATE(214),
    [sym_display_math_env_at] = STATE(302),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(302),
    [sym_tex_inline_math_at] = STATE(302),
    [sym_latex_inline_math_at] = STATE(302),
    [sym_inline_math_env_at] = STATE(302),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(302),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(302),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(302),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(302),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(302),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(302),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(302),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(302),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(302),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(302),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(302),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(302),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(302),
    [sym_token_at] = STATE(302),
    [aux_sym_text_mode_at_repeat1] = STATE(302),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(588),
    [sym_end_group] = ACTIONS(721),
    [sym_math_shift] = ACTIONS(591),
    [sym_alignment_tab] = ACTIONS(723),
    [sym_parameter_char] = ACTIONS(597),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(723),
    [sym_text] = ACTIONS(723),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(726),
    [anon_sym_RBRACK] = ACTIONS(726),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(726),
    [sym_begin_group] = ACTIONS(726),
    [sym_end_group] = ACTIONS(726),
    [sym_math_shift] = ACTIONS(726),
    [sym_alignment_tab] = ACTIONS(726),
    [sym_parameter_char] = ACTIONS(726),
    [sym_superscript] = ACTIONS(726),
    [sym_subscript] = ACTIONS(726),
    [sym_active_char] = ACTIONS(726),
    [sym_text] = ACTIONS(726),
  },
  [304] = {
    [sym__common] = STATE(352),
    [sym__math_mode_common] = STATE(352),
    [sym__math_mode_at] = STATE(352),
    [sym_parameter] = STATE(352),
    [sym_math_env_at] = STATE(352),
    [sym_tag_at] = STATE(352),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(352),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(352),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(352),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(352),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(352),
    [sym_opt_math_group_at] = STATE(352),
    [sym_token_at] = STATE(352),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(352),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_end_group] = ACTIONS(728),
    [sym_alignment_tab] = ACTIONS(730),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(730),
    [sym_subscript] = ACTIONS(730),
    [sym_active_char] = ACTIONS(730),
    [sym_text] = ACTIONS(730),
  },
  [305] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(732),
  },
  [306] = {
    [anon_sym_RBRACK] = ACTIONS(734),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(734),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(734),
    [sym_math_shift] = ACTIONS(734),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(734),
    [sym_subscript] = ACTIONS(734),
    [sym_active_char] = ACTIONS(734),
    [sym_text] = ACTIONS(734),
  },
  [307] = {
    [sym__common] = STATE(356),
    [sym__text_mode_common] = STATE(356),
    [sym_inline_verbatim] = STATE(356),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(356),
    [sym_text_mode_at] = STATE(355),
    [sym_parameter] = STATE(356),
    [sym_text_env_at] = STATE(356),
    [sym__display_math_at] = STATE(356),
    [sym_tex_display_math_at] = STATE(356),
    [sym_latex_display_math_at] = STATE(356),
    [sym_begin_display_math] = STATE(213),
    [sym_begin_inline_math] = STATE(214),
    [sym_display_math_env_at] = STATE(356),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(356),
    [sym_tex_inline_math_at] = STATE(356),
    [sym_latex_inline_math_at] = STATE(356),
    [sym_inline_math_env_at] = STATE(356),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(356),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(356),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(356),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(356),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(356),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(356),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(356),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(356),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(356),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(356),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(356),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(356),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(356),
    [sym_token_at] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(356),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(736),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(738),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(738),
    [sym_text] = ACTIONS(738),
  },
  [308] = {
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(740),
    [sym_begin_group] = ACTIONS(740),
    [sym_end_group] = ACTIONS(740),
    [sym_math_shift] = ACTIONS(740),
    [sym_alignment_tab] = ACTIONS(740),
    [sym_parameter_char] = ACTIONS(740),
    [sym_superscript] = ACTIONS(740),
    [sym_subscript] = ACTIONS(740),
    [sym_active_char] = ACTIONS(740),
    [sym_text] = ACTIONS(740),
  },
  [309] = {
    [anon_sym_tag] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(221),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__name_at] = ACTIONS(277),
  },
  [310] = {
    [anon_sym_LBRACK] = ACTIONS(742),
    [anon_sym_RBRACK] = ACTIONS(742),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(742),
    [sym_begin_group] = ACTIONS(742),
    [sym_end_group] = ACTIONS(742),
    [sym_math_shift] = ACTIONS(742),
    [sym_alignment_tab] = ACTIONS(742),
    [sym_parameter_char] = ACTIONS(742),
    [sym_superscript] = ACTIONS(742),
    [sym_subscript] = ACTIONS(742),
    [sym_active_char] = ACTIONS(742),
    [sym_text] = ACTIONS(742),
  },
  [311] = {
    [sym__common] = STATE(316),
    [sym__math_mode_common] = STATE(316),
    [sym__math_mode_at] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_math_env_at] = STATE(316),
    [sym_tag_at] = STATE(316),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(316),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(357),
    [sym_end_token] = STATE(78),
    [sym_include_at] = STATE(316),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(316),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(316),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(316),
    [sym_opt_math_group_at] = STATE(316),
    [sym_token_at] = STATE(316),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(316),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(549),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(563),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(563),
    [sym_subscript] = ACTIONS(563),
    [sym_active_char] = ACTIONS(563),
    [sym_text] = ACTIONS(563),
  },
  [312] = {
    [anon_sym_LBRACK] = ACTIONS(744),
    [anon_sym_RBRACK] = ACTIONS(744),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(744),
    [sym_end_group] = ACTIONS(744),
    [sym_math_shift] = ACTIONS(744),
    [sym_alignment_tab] = ACTIONS(744),
    [sym_parameter_char] = ACTIONS(744),
    [sym_superscript] = ACTIONS(744),
    [sym_subscript] = ACTIONS(744),
    [sym_active_char] = ACTIONS(744),
    [sym_text] = ACTIONS(744),
  },
  [313] = {
    [sym__common] = STATE(359),
    [sym__math_mode_common] = STATE(359),
    [sym__math_mode_at] = STATE(359),
    [sym_parameter] = STATE(359),
    [sym_math_env_at] = STATE(359),
    [sym_tag_at] = STATE(359),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(359),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(359),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(359),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(359),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(359),
    [sym_opt_math_group_at] = STATE(359),
    [sym_token_at] = STATE(359),
    [sym_begin_opt] = STATE(222),
    [sym_end_opt] = STATE(358),
    [aux_sym_math_mode_at_repeat1] = STATE(359),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(746),
    [sym_subscript] = ACTIONS(746),
    [sym_active_char] = ACTIONS(746),
    [sym_text] = ACTIONS(746),
  },
  [314] = {
    [sym__common] = STATE(314),
    [sym__math_mode_common] = STATE(314),
    [sym__math_mode_at] = STATE(314),
    [sym_parameter] = STATE(314),
    [sym_math_env_at] = STATE(314),
    [sym_tag_at] = STATE(314),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(314),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(314),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(314),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(314),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(314),
    [sym_opt_math_group_at] = STATE(314),
    [sym_token_at] = STATE(314),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(314),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(748),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(754),
    [sym_math_shift] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(759),
    [sym_parameter_char] = ACTIONS(762),
    [sym_superscript] = ACTIONS(759),
    [sym_subscript] = ACTIONS(759),
    [sym_active_char] = ACTIONS(759),
    [sym_text] = ACTIONS(759),
  },
  [315] = {
    [anon_sym_RBRACK] = ACTIONS(765),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(765),
    [sym_begin_group] = ACTIONS(765),
    [sym_end_group] = ACTIONS(765),
    [sym_math_shift] = ACTIONS(765),
    [sym_alignment_tab] = ACTIONS(765),
    [sym_parameter_char] = ACTIONS(765),
    [sym_superscript] = ACTIONS(765),
    [sym_subscript] = ACTIONS(765),
    [sym_active_char] = ACTIONS(765),
    [sym_text] = ACTIONS(765),
  },
  [316] = {
    [sym__common] = STATE(316),
    [sym__math_mode_common] = STATE(316),
    [sym__math_mode_at] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_math_env_at] = STATE(316),
    [sym_tag_at] = STATE(316),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(316),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(316),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(316),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(316),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(316),
    [sym_opt_math_group_at] = STATE(316),
    [sym_token_at] = STATE(316),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(316),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(748),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(754),
    [sym_alignment_tab] = ACTIONS(767),
    [sym_parameter_char] = ACTIONS(762),
    [sym_superscript] = ACTIONS(767),
    [sym_subscript] = ACTIONS(767),
    [sym_active_char] = ACTIONS(767),
    [sym_text] = ACTIONS(767),
  },
  [317] = {
    [anon_sym_RBRACK] = ACTIONS(770),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(770),
    [sym_begin_group] = ACTIONS(770),
    [sym_end_group] = ACTIONS(770),
    [sym_math_shift] = ACTIONS(770),
    [sym_alignment_tab] = ACTIONS(770),
    [sym_parameter_char] = ACTIONS(770),
    [sym_superscript] = ACTIONS(770),
    [sym_subscript] = ACTIONS(770),
    [sym_active_char] = ACTIONS(770),
    [sym_text] = ACTIONS(770),
  },
  [318] = {
    [anon_sym_RBRACK] = ACTIONS(772),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(772),
    [sym_begin_group] = ACTIONS(772),
    [sym_end_group] = ACTIONS(772),
    [sym_math_shift] = ACTIONS(772),
    [sym_alignment_tab] = ACTIONS(772),
    [sym_parameter_char] = ACTIONS(772),
    [sym_superscript] = ACTIONS(772),
    [sym_subscript] = ACTIONS(772),
    [sym_active_char] = ACTIONS(772),
    [sym_text] = ACTIONS(772),
  },
  [319] = {
    [anon_sym_RBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(774),
    [sym_begin_group] = ACTIONS(774),
    [sym_end_group] = ACTIONS(774),
    [sym_math_shift] = ACTIONS(774),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(774),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [320] = {
    [anon_sym_RBRACK] = ACTIONS(776),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(776),
    [sym_begin_group] = ACTIONS(776),
    [sym_end_group] = ACTIONS(776),
    [sym_math_shift] = ACTIONS(776),
    [sym_alignment_tab] = ACTIONS(776),
    [sym_parameter_char] = ACTIONS(776),
    [sym_superscript] = ACTIONS(776),
    [sym_subscript] = ACTIONS(776),
    [sym_active_char] = ACTIONS(776),
    [sym_text] = ACTIONS(776),
  },
  [321] = {
    [sym__common] = STATE(361),
    [sym__text_mode_common] = STATE(361),
    [sym_inline_verbatim] = STATE(361),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(361),
    [sym_parameter] = STATE(361),
    [sym_text_env_at] = STATE(361),
    [sym__display_math_at] = STATE(361),
    [sym_tex_display_math_at] = STATE(361),
    [sym_latex_display_math_at] = STATE(361),
    [sym_begin_display_math] = STATE(213),
    [sym_begin_inline_math] = STATE(214),
    [sym_display_math_env_at] = STATE(361),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(361),
    [sym_tex_inline_math_at] = STATE(361),
    [sym_latex_inline_math_at] = STATE(361),
    [sym_inline_math_env_at] = STATE(361),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(361),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(361),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(361),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(361),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(361),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(361),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(361),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(361),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(361),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(361),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(361),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(361),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(361),
    [sym_token_at] = STATE(361),
    [aux_sym_text_mode_at_repeat1] = STATE(361),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(778),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(780),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(780),
    [sym_text] = ACTIONS(780),
  },
  [322] = {
    [anon_sym_LBRACK] = ACTIONS(782),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(782),
    [sym_begin_group] = ACTIONS(782),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(782),
    [sym_superscript] = ACTIONS(782),
    [sym_subscript] = ACTIONS(782),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [323] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(784),
  },
  [324] = {
    [sym_text_group_at] = STATE(363),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(567),
    [sym__end_of_line] = ACTIONS(784),
  },
  [325] = {
    [sym__common] = STATE(364),
    [sym__text_mode_common] = STATE(364),
    [sym_inline_verbatim] = STATE(364),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(364),
    [sym_parameter] = STATE(364),
    [sym_text_env_at] = STATE(364),
    [sym__display_math_at] = STATE(364),
    [sym_tex_display_math_at] = STATE(364),
    [sym_latex_display_math_at] = STATE(364),
    [sym_begin_display_math] = STATE(327),
    [sym_begin_inline_math] = STATE(328),
    [sym_display_math_env_at] = STATE(364),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(364),
    [sym_tex_inline_math_at] = STATE(364),
    [sym_latex_inline_math_at] = STATE(364),
    [sym_inline_math_env_at] = STATE(364),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(364),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(364),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(364),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(364),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(364),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(364),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(364),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(364),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(364),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(364),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(364),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(364),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(364),
    [sym_token_at] = STATE(364),
    [sym_end_opt] = STATE(329),
    [aux_sym_text_mode_at_repeat1] = STATE(364),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(786),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(786),
    [sym_text] = ACTIONS(786),
  },
  [326] = {
    [anon_sym_RBRACK] = ACTIONS(788),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(788),
    [sym_begin_group] = ACTIONS(788),
    [sym_end_group] = ACTIONS(788),
    [sym_math_shift] = ACTIONS(788),
    [sym_alignment_tab] = ACTIONS(788),
    [sym_parameter_char] = ACTIONS(788),
    [sym_superscript] = ACTIONS(788),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(788),
    [sym_text] = ACTIONS(788),
  },
  [327] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(365),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [328] = {
    [sym__common] = STATE(227),
    [sym__math_mode_common] = STATE(227),
    [sym__math_mode_at] = STATE(227),
    [sym_math_mode_at] = STATE(366),
    [sym_parameter] = STATE(227),
    [sym_math_env_at] = STATE(227),
    [sym_tag_at] = STATE(227),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(227),
    [sym_opt_math_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [329] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(790),
    [sym__end_of_line] = ACTIONS(790),
  },
  [330] = {
    [sym__common] = STATE(368),
    [sym__text_mode_common] = STATE(368),
    [sym_inline_verbatim] = STATE(368),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(368),
    [sym_parameter] = STATE(368),
    [sym_text_env_at] = STATE(368),
    [sym__display_math_at] = STATE(368),
    [sym_tex_display_math_at] = STATE(368),
    [sym_latex_display_math_at] = STATE(368),
    [sym_begin_display_math] = STATE(327),
    [sym_begin_inline_math] = STATE(328),
    [sym_display_math_env_at] = STATE(368),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(368),
    [sym_tex_inline_math_at] = STATE(368),
    [sym_latex_inline_math_at] = STATE(368),
    [sym_inline_math_env_at] = STATE(368),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(368),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(368),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(368),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(368),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(368),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(368),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(368),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(368),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(368),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(368),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(368),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(368),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(368),
    [sym_token_at] = STATE(368),
    [sym_end_opt] = STATE(367),
    [aux_sym_text_mode_at_repeat1] = STATE(368),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(792),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(792),
    [sym_text] = ACTIONS(792),
  },
  [331] = {
    [sym__whitespace] = STATE(336),
    [aux_sym__whitespace_repeat1] = STATE(333),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(652),
    [sym_begin_group] = ACTIONS(652),
    [sym_end_group] = ACTIONS(652),
    [sym_math_shift] = ACTIONS(652),
    [sym_alignment_tab] = ACTIONS(652),
    [sym_parameter_char] = ACTIONS(652),
    [sym_superscript] = ACTIONS(652),
    [sym_subscript] = ACTIONS(652),
    [sym_active_char] = ACTIONS(652),
    [sym_text] = ACTIONS(654),
  },
  [332] = {
    [sym__whitespace] = STATE(337),
    [aux_sym__whitespace_repeat1] = STATE(333),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_end_group] = ACTIONS(656),
    [sym_math_shift] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_text] = ACTIONS(658),
  },
  [333] = {
    [aux_sym__whitespace_repeat1] = STATE(369),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(794),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(338),
    [sym_end_group] = ACTIONS(338),
    [sym_math_shift] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(338),
    [sym_parameter_char] = ACTIONS(338),
    [sym_superscript] = ACTIONS(338),
    [sym_subscript] = ACTIONS(338),
    [sym_active_char] = ACTIONS(338),
    [sym_text] = ACTIONS(346),
  },
  [334] = {
    [ts_builtin_sym_end] = ACTIONS(796),
    [anon_sym_RBRACK] = ACTIONS(796),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(796),
    [sym_begin_group] = ACTIONS(796),
    [sym_end_group] = ACTIONS(796),
    [sym_math_shift] = ACTIONS(796),
    [sym_alignment_tab] = ACTIONS(796),
    [sym_parameter_char] = ACTIONS(796),
    [sym_superscript] = ACTIONS(796),
    [sym_subscript] = ACTIONS(796),
    [sym_active_char] = ACTIONS(796),
    [sym_text] = ACTIONS(796),
  },
  [335] = {
    [anon_sym_LBRACK] = ACTIONS(798),
    [anon_sym_RBRACK] = ACTIONS(798),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(798),
    [sym_begin_group] = ACTIONS(798),
    [sym_end_group] = ACTIONS(798),
    [sym_math_shift] = ACTIONS(798),
    [sym_alignment_tab] = ACTIONS(798),
    [sym_parameter_char] = ACTIONS(798),
    [sym_superscript] = ACTIONS(798),
    [sym_subscript] = ACTIONS(798),
    [sym_active_char] = ACTIONS(798),
    [sym_text] = ACTIONS(798),
  },
  [336] = {
    [ts_builtin_sym_end] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(800),
    [sym_begin_group] = ACTIONS(800),
    [sym_end_group] = ACTIONS(800),
    [sym_math_shift] = ACTIONS(800),
    [sym_alignment_tab] = ACTIONS(800),
    [sym_parameter_char] = ACTIONS(800),
    [sym_superscript] = ACTIONS(800),
    [sym_subscript] = ACTIONS(800),
    [sym_active_char] = ACTIONS(800),
    [sym_text] = ACTIONS(800),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(802),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(802),
    [sym_begin_group] = ACTIONS(802),
    [sym_end_group] = ACTIONS(802),
    [sym_math_shift] = ACTIONS(802),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(802),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(802),
  },
  [338] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(804),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_RBRACK] = ACTIONS(682),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(682),
    [sym_begin_group] = ACTIONS(682),
    [sym_end_group] = ACTIONS(682),
    [sym_math_shift] = ACTIONS(682),
    [sym_alignment_tab] = ACTIONS(682),
    [sym_parameter_char] = ACTIONS(682),
    [sym_superscript] = ACTIONS(682),
    [sym_subscript] = ACTIONS(682),
    [sym_active_char] = ACTIONS(682),
    [sym_text] = ACTIONS(682),
  },
  [340] = {
    [sym__whitespace] = STATE(336),
    [aux_sym__whitespace_repeat1] = STATE(139),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(652),
    [sym_begin_group] = ACTIONS(652),
    [sym_math_shift] = ACTIONS(652),
    [sym_alignment_tab] = ACTIONS(652),
    [sym_parameter_char] = ACTIONS(652),
    [sym_superscript] = ACTIONS(652),
    [sym_subscript] = ACTIONS(652),
    [sym_active_char] = ACTIONS(652),
    [sym_text] = ACTIONS(654),
  },
  [341] = {
    [sym__whitespace] = STATE(337),
    [aux_sym__whitespace_repeat1] = STATE(139),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_math_shift] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_text] = ACTIONS(658),
  },
  [342] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(380),
  },
  [343] = {
    [anon_sym_LBRACK] = ACTIONS(806),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(806),
    [sym_begin_group] = ACTIONS(806),
    [sym_alignment_tab] = ACTIONS(806),
    [sym_parameter_char] = ACTIONS(806),
    [sym_superscript] = ACTIONS(806),
    [sym_subscript] = ACTIONS(806),
    [sym_active_char] = ACTIONS(806),
    [sym_text] = ACTIONS(806),
  },
  [344] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(708),
    [sym__end_of_line] = ACTIONS(708),
  },
  [345] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(808),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(810),
    [sym__end_of_line] = ACTIONS(810),
  },
  [346] = {
    [anon_sym_RBRACK] = ACTIONS(812),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [347] = {
    [anon_sym_RPAREN] = ACTIONS(814),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [348] = {
    [sym__whitespace] = STATE(297),
    [aux_sym__whitespace_repeat1] = STATE(373),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(527),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(527),
    [sym_begin_group] = ACTIONS(527),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(527),
    [sym_parameter_char] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [sym_active_char] = ACTIONS(527),
    [sym_text] = ACTIONS(531),
  },
  [349] = {
    [anon_sym_makeatother] = ACTIONS(818),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [350] = {
    [aux_sym__whitespace_repeat1] = STATE(350),
    [ts_builtin_sym_end] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(820),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(603),
    [sym_begin_group] = ACTIONS(603),
    [sym_math_shift] = ACTIONS(603),
    [sym_alignment_tab] = ACTIONS(603),
    [sym_parameter_char] = ACTIONS(603),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(603),
    [sym_active_char] = ACTIONS(603),
    [sym_text] = ACTIONS(611),
  },
  [351] = {
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(823),
    [sym_begin_group] = ACTIONS(823),
    [sym_end_group] = ACTIONS(823),
    [sym_math_shift] = ACTIONS(823),
    [sym_alignment_tab] = ACTIONS(823),
    [sym_parameter_char] = ACTIONS(823),
    [sym_superscript] = ACTIONS(823),
    [sym_subscript] = ACTIONS(823),
    [sym_active_char] = ACTIONS(823),
    [sym_text] = ACTIONS(823),
  },
  [352] = {
    [sym__common] = STATE(352),
    [sym__math_mode_common] = STATE(352),
    [sym__math_mode_at] = STATE(352),
    [sym_parameter] = STATE(352),
    [sym_math_env_at] = STATE(352),
    [sym_tag_at] = STATE(352),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(352),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(352),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(352),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(352),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(352),
    [sym_opt_math_group_at] = STATE(352),
    [sym_token_at] = STATE(352),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(352),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(748),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(754),
    [sym_end_group] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(825),
    [sym_parameter_char] = ACTIONS(762),
    [sym_superscript] = ACTIONS(825),
    [sym_subscript] = ACTIONS(825),
    [sym_active_char] = ACTIONS(825),
    [sym_text] = ACTIONS(825),
  },
  [353] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(828),
  },
  [354] = {
    [anon_sym_LBRACK] = ACTIONS(830),
    [anon_sym_RBRACK] = ACTIONS(830),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(830),
    [sym_begin_group] = ACTIONS(830),
    [sym_end_group] = ACTIONS(830),
    [sym_math_shift] = ACTIONS(830),
    [sym_alignment_tab] = ACTIONS(830),
    [sym_parameter_char] = ACTIONS(830),
    [sym_superscript] = ACTIONS(830),
    [sym_subscript] = ACTIONS(830),
    [sym_active_char] = ACTIONS(830),
    [sym_text] = ACTIONS(830),
  },
  [355] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_end_group] = ACTIONS(832),
  },
  [356] = {
    [sym__common] = STATE(302),
    [sym__text_mode_common] = STATE(302),
    [sym_inline_verbatim] = STATE(302),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(302),
    [sym_parameter] = STATE(302),
    [sym_text_env_at] = STATE(302),
    [sym__display_math_at] = STATE(302),
    [sym_tex_display_math_at] = STATE(302),
    [sym_latex_display_math_at] = STATE(302),
    [sym_begin_display_math] = STATE(213),
    [sym_begin_inline_math] = STATE(214),
    [sym_display_math_env_at] = STATE(302),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(302),
    [sym_tex_inline_math_at] = STATE(302),
    [sym_latex_inline_math_at] = STATE(302),
    [sym_inline_math_env_at] = STATE(302),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(302),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(302),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(302),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(302),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(302),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(302),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(302),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(302),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(302),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(302),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(302),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(302),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(302),
    [sym_token_at] = STATE(302),
    [aux_sym_text_mode_at_repeat1] = STATE(302),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(305),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(539),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(539),
    [sym_text] = ACTIONS(539),
  },
  [357] = {
    [anon_sym_LBRACK] = ACTIONS(834),
    [anon_sym_RBRACK] = ACTIONS(834),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(834),
    [sym_begin_group] = ACTIONS(834),
    [sym_end_group] = ACTIONS(834),
    [sym_math_shift] = ACTIONS(834),
    [sym_alignment_tab] = ACTIONS(834),
    [sym_parameter_char] = ACTIONS(834),
    [sym_superscript] = ACTIONS(834),
    [sym_subscript] = ACTIONS(834),
    [sym_active_char] = ACTIONS(834),
    [sym_text] = ACTIONS(834),
  },
  [358] = {
    [anon_sym_LBRACK] = ACTIONS(836),
    [anon_sym_RBRACK] = ACTIONS(836),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(836),
    [sym_begin_group] = ACTIONS(836),
    [sym_end_group] = ACTIONS(836),
    [sym_math_shift] = ACTIONS(836),
    [sym_alignment_tab] = ACTIONS(836),
    [sym_parameter_char] = ACTIONS(836),
    [sym_superscript] = ACTIONS(836),
    [sym_subscript] = ACTIONS(836),
    [sym_active_char] = ACTIONS(836),
    [sym_text] = ACTIONS(836),
  },
  [359] = {
    [sym__common] = STATE(359),
    [sym__math_mode_common] = STATE(359),
    [sym__math_mode_at] = STATE(359),
    [sym_parameter] = STATE(359),
    [sym_math_env_at] = STATE(359),
    [sym_tag_at] = STATE(359),
    [sym_tag_token] = STATE(220),
    [sym_escaped] = STATE(359),
    [sym_begin] = STATE(221),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(359),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(359),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(359),
    [sym_catcode_token] = STATE(21),
    [sym_math_group_at] = STATE(359),
    [sym_opt_math_group_at] = STATE(359),
    [sym_token_at] = STATE(359),
    [sym_begin_opt] = STATE(222),
    [aux_sym_math_mode_at_repeat1] = STATE(359),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(754),
    [sym_alignment_tab] = ACTIONS(838),
    [sym_parameter_char] = ACTIONS(762),
    [sym_superscript] = ACTIONS(838),
    [sym_subscript] = ACTIONS(838),
    [sym_active_char] = ACTIONS(838),
    [sym_text] = ACTIONS(838),
  },
  [360] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(535),
  },
  [361] = {
    [sym__common] = STATE(302),
    [sym__text_mode_common] = STATE(302),
    [sym_inline_verbatim] = STATE(302),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(302),
    [sym_parameter] = STATE(302),
    [sym_text_env_at] = STATE(302),
    [sym__display_math_at] = STATE(302),
    [sym_tex_display_math_at] = STATE(302),
    [sym_latex_display_math_at] = STATE(302),
    [sym_begin_display_math] = STATE(213),
    [sym_begin_inline_math] = STATE(214),
    [sym_display_math_env_at] = STATE(302),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(302),
    [sym_tex_inline_math_at] = STATE(302),
    [sym_latex_inline_math_at] = STATE(302),
    [sym_inline_math_env_at] = STATE(302),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(302),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(302),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(302),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(302),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(302),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(302),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(302),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(302),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(302),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(302),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(302),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(302),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(302),
    [sym_token_at] = STATE(302),
    [aux_sym_text_mode_at_repeat1] = STATE(302),
    [aux_sym_parameter_repeat1] = STATE(29),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(841),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(539),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(539),
    [sym_text] = ACTIONS(539),
  },
  [362] = {
    [anon_sym_LBRACK] = ACTIONS(843),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(843),
    [sym_begin_group] = ACTIONS(843),
    [sym_alignment_tab] = ACTIONS(843),
    [sym_parameter_char] = ACTIONS(843),
    [sym_superscript] = ACTIONS(843),
    [sym_subscript] = ACTIONS(843),
    [sym_active_char] = ACTIONS(843),
    [sym_text] = ACTIONS(843),
  },
  [363] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(845),
  },
  [364] = {
    [sym__common] = STATE(368),
    [sym__text_mode_common] = STATE(368),
    [sym_inline_verbatim] = STATE(368),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(368),
    [sym_parameter] = STATE(368),
    [sym_text_env_at] = STATE(368),
    [sym__display_math_at] = STATE(368),
    [sym_tex_display_math_at] = STATE(368),
    [sym_latex_display_math_at] = STATE(368),
    [sym_begin_display_math] = STATE(327),
    [sym_begin_inline_math] = STATE(328),
    [sym_display_math_env_at] = STATE(368),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(368),
    [sym_tex_inline_math_at] = STATE(368),
    [sym_latex_inline_math_at] = STATE(368),
    [sym_inline_math_env_at] = STATE(368),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(368),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(368),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(368),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(368),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(368),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(368),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(368),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(368),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(368),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(368),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(368),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(368),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(368),
    [sym_token_at] = STATE(368),
    [sym_end_opt] = STATE(367),
    [aux_sym_text_mode_at_repeat1] = STATE(368),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(792),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(792),
    [sym_text] = ACTIONS(792),
  },
  [365] = {
    [sym_end_display_math] = STATE(315),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(700),
  },
  [366] = {
    [sym_end_inline_math] = STATE(317),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(702),
  },
  [367] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(847),
    [sym__end_of_line] = ACTIONS(847),
  },
  [368] = {
    [sym__common] = STATE(368),
    [sym__text_mode_common] = STATE(368),
    [sym_inline_verbatim] = STATE(368),
    [sym_verb_token] = STATE(7),
    [sym__text_mode_at] = STATE(368),
    [sym_parameter] = STATE(368),
    [sym_text_env_at] = STATE(368),
    [sym__display_math_at] = STATE(368),
    [sym_tex_display_math_at] = STATE(368),
    [sym_latex_display_math_at] = STATE(368),
    [sym_begin_display_math] = STATE(327),
    [sym_begin_inline_math] = STATE(328),
    [sym_display_math_env_at] = STATE(368),
    [sym_display_math_begin_at] = STATE(108),
    [sym__inline_math_at] = STATE(368),
    [sym_tex_inline_math_at] = STATE(368),
    [sym_latex_inline_math_at] = STATE(368),
    [sym_inline_math_env_at] = STATE(368),
    [sym_inline_math_begin] = STATE(109),
    [sym_verbatim_env] = STATE(368),
    [sym_verbatim_begin] = STATE(13),
    [sym_escaped] = STATE(368),
    [sym_begin] = STATE(110),
    [sym_begin_token] = STATE(111),
    [sym_documentclass] = STATE(368),
    [sym_documentclass_token] = STATE(16),
    [sym_usepackage] = STATE(368),
    [sym_usepackage_token] = STATE(17),
    [sym_include_at] = STATE(368),
    [sym_include_token] = STATE(112),
    [sym_section_at] = STATE(368),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(368),
    [sym_storage_token] = STATE(20),
    [sym_catcode] = STATE(368),
    [sym_catcode_token] = STATE(21),
    [sym_emph_at] = STATE(368),
    [sym_emph_token] = STATE(114),
    [sym_textbf_at] = STATE(368),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(368),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(368),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(368),
    [sym_token_at] = STATE(368),
    [aux_sym_text_mode_at_repeat1] = STATE(368),
    [aux_sym_parameter_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(721),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(588),
    [sym_math_shift] = ACTIONS(591),
    [sym_alignment_tab] = ACTIONS(849),
    [sym_parameter_char] = ACTIONS(597),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(849),
    [sym_text] = ACTIONS(849),
  },
  [369] = {
    [aux_sym__whitespace_repeat1] = STATE(369),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(603),
    [sym_begin_group] = ACTIONS(603),
    [sym_end_group] = ACTIONS(603),
    [sym_math_shift] = ACTIONS(603),
    [sym_alignment_tab] = ACTIONS(603),
    [sym_parameter_char] = ACTIONS(603),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(603),
    [sym_active_char] = ACTIONS(603),
    [sym_text] = ACTIONS(611),
  },
  [370] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(678),
    [sym_begin_group] = ACTIONS(678),
    [sym_end_group] = ACTIONS(678),
    [sym_math_shift] = ACTIONS(678),
    [sym_alignment_tab] = ACTIONS(678),
    [sym_parameter_char] = ACTIONS(678),
    [sym_superscript] = ACTIONS(678),
    [sym_subscript] = ACTIONS(678),
    [sym_active_char] = ACTIONS(678),
    [sym_text] = ACTIONS(678),
  },
  [371] = {
    [sym__whitespace] = STATE(336),
    [aux_sym__whitespace_repeat1] = STATE(373),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(652),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(652),
    [sym_begin_group] = ACTIONS(652),
    [sym_math_shift] = ACTIONS(652),
    [sym_alignment_tab] = ACTIONS(652),
    [sym_parameter_char] = ACTIONS(652),
    [sym_superscript] = ACTIONS(652),
    [sym_subscript] = ACTIONS(652),
    [sym_active_char] = ACTIONS(652),
    [sym_text] = ACTIONS(654),
  },
  [372] = {
    [sym__whitespace] = STATE(337),
    [aux_sym__whitespace_repeat1] = STATE(373),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(656),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_math_shift] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_text] = ACTIONS(658),
  },
  [373] = {
    [aux_sym__whitespace_repeat1] = STATE(378),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(338),
    [sym_math_shift] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(338),
    [sym_parameter_char] = ACTIONS(338),
    [sym_superscript] = ACTIONS(338),
    [sym_subscript] = ACTIONS(338),
    [sym_active_char] = ACTIONS(338),
    [sym_text] = ACTIONS(346),
  },
  [374] = {
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(857),
    [sym_begin_group] = ACTIONS(857),
    [sym_end_group] = ACTIONS(857),
    [sym_math_shift] = ACTIONS(857),
    [sym_alignment_tab] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(857),
    [sym_superscript] = ACTIONS(857),
    [sym_subscript] = ACTIONS(857),
    [sym_active_char] = ACTIONS(857),
    [sym_text] = ACTIONS(857),
  },
  [375] = {
    [anon_sym_LBRACK] = ACTIONS(859),
    [anon_sym_RBRACK] = ACTIONS(859),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(859),
    [sym_begin_group] = ACTIONS(859),
    [sym_end_group] = ACTIONS(859),
    [sym_math_shift] = ACTIONS(859),
    [sym_alignment_tab] = ACTIONS(859),
    [sym_parameter_char] = ACTIONS(859),
    [sym_superscript] = ACTIONS(859),
    [sym_subscript] = ACTIONS(859),
    [sym_active_char] = ACTIONS(859),
    [sym_text] = ACTIONS(859),
  },
  [376] = {
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__end_of_line] = ACTIONS(719),
  },
  [377] = {
    [anon_sym_LBRACK] = ACTIONS(861),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(861),
    [sym_begin_group] = ACTIONS(861),
    [sym_alignment_tab] = ACTIONS(861),
    [sym_parameter_char] = ACTIONS(861),
    [sym_superscript] = ACTIONS(861),
    [sym_subscript] = ACTIONS(861),
    [sym_active_char] = ACTIONS(861),
    [sym_text] = ACTIONS(861),
  },
  [378] = {
    [aux_sym__whitespace_repeat1] = STATE(378),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(863),
    [anon_sym_RBRACK] = ACTIONS(603),
    [sym_magic_comment] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__escape] = ACTIONS(603),
    [sym_begin_group] = ACTIONS(603),
    [sym_math_shift] = ACTIONS(603),
    [sym_alignment_tab] = ACTIONS(603),
    [sym_parameter_char] = ACTIONS(603),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(603),
    [sym_active_char] = ACTIONS(603),
    [sym_text] = ACTIONS(611),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(28),
  [19] = {.count = 1, .reusable = true}, SHIFT(29),
  [21] = {.count = 1, .reusable = true}, SHIFT(5),
  [23] = {.count = 1, .reusable = false}, SHIFT(30),
  [25] = {.count = 1, .reusable = true}, SHIFT(31),
  [27] = {.count = 1, .reusable = true}, SHIFT(32),
  [29] = {.count = 1, .reusable = false}, SHIFT(33),
  [31] = {.count = 1, .reusable = false}, SHIFT(34),
  [33] = {.count = 1, .reusable = false}, SHIFT(35),
  [35] = {.count = 1, .reusable = false}, SHIFT(36),
  [37] = {.count = 1, .reusable = false}, SHIFT(37),
  [39] = {.count = 1, .reusable = false}, SHIFT(38),
  [41] = {.count = 1, .reusable = false}, SHIFT(39),
  [43] = {.count = 1, .reusable = true}, SHIFT(40),
  [45] = {.count = 1, .reusable = false}, SHIFT(41),
  [47] = {.count = 1, .reusable = false}, SHIFT(42),
  [49] = {.count = 1, .reusable = false}, SHIFT(43),
  [51] = {.count = 1, .reusable = false}, SHIFT(44),
  [53] = {.count = 1, .reusable = false}, SHIFT(45),
  [55] = {.count = 1, .reusable = false}, SHIFT(46),
  [57] = {.count = 1, .reusable = true}, SHIFT(47),
  [59] = {.count = 1, .reusable = true}, SHIFT(51),
  [61] = {.count = 1, .reusable = true}, SHIFT(52),
  [63] = {.count = 1, .reusable = true}, SHIFT(53),
  [65] = {.count = 1, .reusable = true}, SHIFT(54),
  [67] = {.count = 1, .reusable = true}, SHIFT(55),
  [69] = {.count = 1, .reusable = true}, SHIFT(61),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [73] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = true}, SHIFT(62),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(64),
  [81] = {.count = 1, .reusable = false}, SHIFT(72),
  [83] = {.count = 1, .reusable = true}, SHIFT(68),
  [85] = {.count = 1, .reusable = true}, SHIFT(73),
  [87] = {.count = 1, .reusable = true}, SHIFT(74),
  [89] = {.count = 1, .reusable = true}, SHIFT(80),
  [91] = {.count = 1, .reusable = true}, SHIFT(81),
  [93] = {.count = 1, .reusable = true}, SHIFT(86),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(96),
  [99] = {.count = 1, .reusable = true}, SHIFT(102),
  [101] = {.count = 1, .reusable = true}, SHIFT(103),
  [103] = {.count = 1, .reusable = true}, SHIFT(104),
  [105] = {.count = 1, .reusable = true}, SHIFT(120),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(121),
  [113] = {.count = 1, .reusable = true}, SHIFT(123),
  [115] = {.count = 1, .reusable = true}, SHIFT(122),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(125),
  [121] = {.count = 1, .reusable = false}, SHIFT(127),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(130),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [137] = {.count = 1, .reusable = true}, SHIFT(132),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [159] = {.count = 1, .reusable = false}, SHIFT(139),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(142),
  [171] = {.count = 1, .reusable = true}, SHIFT(144),
  [173] = {.count = 1, .reusable = true}, SHIFT(145),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [177] = {.count = 1, .reusable = false}, SHIFT(146),
  [179] = {.count = 1, .reusable = true}, SHIFT(147),
  [181] = {.count = 1, .reusable = true}, SHIFT(148),
  [183] = {.count = 1, .reusable = true}, SHIFT(150),
  [185] = {.count = 1, .reusable = true}, SHIFT(151),
  [187] = {.count = 1, .reusable = true}, SHIFT(153),
  [189] = {.count = 1, .reusable = true}, SHIFT(155),
  [191] = {.count = 1, .reusable = true}, SHIFT(156),
  [193] = {.count = 1, .reusable = true}, SHIFT(158),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [197] = {.count = 1, .reusable = true}, SHIFT(159),
  [199] = {.count = 1, .reusable = true}, SHIFT(160),
  [201] = {.count = 1, .reusable = true}, SHIFT(161),
  [203] = {.count = 1, .reusable = true}, SHIFT(163),
  [205] = {.count = 1, .reusable = true}, SHIFT(164),
  [207] = {.count = 1, .reusable = true}, SHIFT(170),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(172),
  [213] = {.count = 1, .reusable = false}, SHIFT(175),
  [215] = {.count = 1, .reusable = true}, SHIFT(174),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [219] = {.count = 1, .reusable = true}, SHIFT(176),
  [221] = {.count = 1, .reusable = false}, SHIFT(170),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(180),
  [227] = {.count = 1, .reusable = true}, SHIFT(183),
  [229] = {.count = 1, .reusable = false}, SHIFT(184),
  [231] = {.count = 1, .reusable = false}, SHIFT(185),
  [233] = {.count = 1, .reusable = false}, SHIFT(186),
  [235] = {.count = 1, .reusable = false}, SHIFT(187),
  [237] = {.count = 1, .reusable = true}, SHIFT(188),
  [239] = {.count = 1, .reusable = true}, SHIFT(189),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [243] = {.count = 1, .reusable = true}, SHIFT(193),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(187),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [251] = {.count = 1, .reusable = true}, SHIFT(198),
  [253] = {.count = 1, .reusable = true}, SHIFT(203),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [257] = {.count = 1, .reusable = true}, SHIFT(205),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [263] = {.count = 1, .reusable = false}, SHIFT(207),
  [265] = {.count = 1, .reusable = true}, SHIFT(208),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [275] = {.count = 1, .reusable = false}, SHIFT(209),
  [277] = {.count = 1, .reusable = false}, SHIFT(210),
  [279] = {.count = 1, .reusable = true}, SHIFT(211),
  [281] = {.count = 1, .reusable = true}, SHIFT(212),
  [283] = {.count = 1, .reusable = true}, SHIFT(215),
  [285] = {.count = 1, .reusable = true}, SHIFT(216),
  [287] = {.count = 1, .reusable = true}, SHIFT(217),
  [289] = {.count = 1, .reusable = true}, SHIFT(218),
  [291] = {.count = 1, .reusable = true}, SHIFT(223),
  [293] = {.count = 1, .reusable = true}, SHIFT(224),
  [295] = {.count = 1, .reusable = true}, SHIFT(227),
  [297] = {.count = 1, .reusable = true}, SHIFT(231),
  [299] = {.count = 1, .reusable = true}, SHIFT(233),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [307] = {.count = 1, .reusable = true}, SHIFT(243),
  [309] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(121),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(29),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(123),
  [334] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym__whitespace, 1),
  [340] = {.count = 1, .reusable = true}, SHIFT(244),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [344] = {.count = 1, .reusable = false}, SHIFT(245),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym__whitespace, 1),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [352] = {.count = 1, .reusable = true}, SHIFT(246),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [356] = {.count = 1, .reusable = true}, SHIFT(247),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [370] = {.count = 1, .reusable = false}, SHIFT(248),
  [372] = {.count = 1, .reusable = true}, SHIFT(249),
  [374] = {.count = 1, .reusable = true}, SHIFT(250),
  [376] = {.count = 1, .reusable = false}, SHIFT(251),
  [378] = {.count = 1, .reusable = true}, SHIFT(252),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(145),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [389] = {.count = 1, .reusable = true}, SHIFT(254),
  [391] = {.count = 1, .reusable = true}, SHIFT(255),
  [393] = {.count = 1, .reusable = true}, SHIFT(256),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [397] = {.count = 1, .reusable = true}, SHIFT(257),
  [399] = {.count = 1, .reusable = true}, SHIFT(259),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [409] = {.count = 1, .reusable = true}, SHIFT(262),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(52),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(53),
  [417] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(54),
  [420] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(159),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(29),
  [428] = {.count = 1, .reusable = true}, SHIFT(263),
  [430] = {.count = 1, .reusable = true}, SHIFT(264),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(163),
  [437] = {.count = 1, .reusable = true}, SHIFT(265),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [443] = {.count = 1, .reusable = true}, SHIFT(266),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [447] = {.count = 1, .reusable = true}, SHIFT(268),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [453] = {.count = 1, .reusable = true}, SHIFT(271),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [457] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [461] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(175),
  [464] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [466] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(72),
  [469] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(176),
  [472] = {.count = 1, .reusable = true}, SHIFT(272),
  [474] = {.count = 1, .reusable = true}, SHIFT(273),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [478] = {.count = 1, .reusable = false}, SHIFT(274),
  [480] = {.count = 1, .reusable = true}, SHIFT(275),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(183),
  [487] = {.count = 1, .reusable = true}, SHIFT(276),
  [489] = {.count = 1, .reusable = true}, SHIFT(277),
  [491] = {.count = 1, .reusable = true}, SHIFT(278),
  [493] = {.count = 1, .reusable = true}, SHIFT(279),
  [495] = {.count = 1, .reusable = true}, SHIFT(280),
  [497] = {.count = 1, .reusable = true}, SHIFT(281),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(282),
  [503] = {.count = 1, .reusable = true}, SHIFT(284),
  [505] = {.count = 1, .reusable = true}, SHIFT(286),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [511] = {.count = 1, .reusable = true}, SHIFT(287),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [515] = {.count = 1, .reusable = true}, SHIFT(292),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [519] = {.count = 1, .reusable = true}, SHIFT(295),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [525] = {.count = 1, .reusable = true}, SHIFT(296),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [529] = {.count = 1, .reusable = false}, SHIFT(298),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [537] = {.count = 1, .reusable = true}, SHIFT(301),
  [539] = {.count = 1, .reusable = true}, SHIFT(302),
  [541] = {.count = 1, .reusable = true}, SHIFT(303),
  [543] = {.count = 1, .reusable = true}, SHIFT(304),
  [545] = {.count = 1, .reusable = true}, SHIFT(306),
  [547] = {.count = 1, .reusable = true}, SHIFT(307),
  [549] = {.count = 1, .reusable = true}, SHIFT(309),
  [551] = {.count = 1, .reusable = true}, SHIFT(311),
  [553] = {.count = 1, .reusable = true}, SHIFT(313),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [557] = {.count = 1, .reusable = true}, SHIFT(314),
  [559] = {.count = 1, .reusable = true}, SHIFT(209),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [563] = {.count = 1, .reusable = true}, SHIFT(316),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [567] = {.count = 1, .reusable = true}, SHIFT(321),
  [569] = {.count = 1, .reusable = true}, SHIFT(322),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [575] = {.count = 1, .reusable = true}, SHIFT(330),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(211),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(103),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(104),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(243),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(29),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(5),
  [603] = {.count = 1, .reusable = true}, REDUCE(aux_sym__whitespace_repeat1, 2),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(244),
  [608] = {.count = 2, .reusable = false}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(245),
  [611] = {.count = 1, .reusable = false}, REDUCE(aux_sym__whitespace_repeat1, 2),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(246),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(247),
  [619] = {.count = 2, .reusable = false}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(248),
  [622] = {.count = 1, .reusable = true}, SHIFT(331),
  [624] = {.count = 1, .reusable = true}, SHIFT(332),
  [626] = {.count = 1, .reusable = false}, SHIFT(333),
  [628] = {.count = 1, .reusable = true}, SHIFT(251),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(255),
  [637] = {.count = 1, .reusable = true}, SHIFT(334),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [641] = {.count = 1, .reusable = true}, SHIFT(335),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(262),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [660] = {.count = 1, .reusable = true}, SHIFT(338),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [664] = {.count = 1, .reusable = true}, SHIFT(185),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [670] = {.count = 1, .reusable = true}, SHIFT(339),
  [672] = {.count = 1, .reusable = true}, SHIFT(340),
  [674] = {.count = 1, .reusable = true}, SHIFT(341),
  [676] = {.count = 1, .reusable = true}, SHIFT(274),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [686] = {.count = 1, .reusable = true}, SHIFT(342),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [690] = {.count = 1, .reusable = true}, SHIFT(343),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [696] = {.count = 1, .reusable = true}, SHIFT(345),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [700] = {.count = 1, .reusable = true}, SHIFT(346),
  [702] = {.count = 1, .reusable = true}, SHIFT(347),
  [704] = {.count = 1, .reusable = false}, SHIFT(348),
  [706] = {.count = 1, .reusable = true}, SHIFT(349),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [710] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(295),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [717] = {.count = 1, .reusable = false}, SHIFT(350),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [721] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(302),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [728] = {.count = 1, .reusable = true}, SHIFT(351),
  [730] = {.count = 1, .reusable = true}, SHIFT(352),
  [732] = {.count = 1, .reusable = true}, SHIFT(353),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [736] = {.count = 1, .reusable = true}, SHIFT(354),
  [738] = {.count = 1, .reusable = true}, SHIFT(356),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [746] = {.count = 1, .reusable = true}, SHIFT(359),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(52),
  [751] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(216),
  [754] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(217),
  [757] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(314),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(29),
  [765] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [767] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(316),
  [770] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [778] = {.count = 1, .reusable = true}, SHIFT(360),
  [780] = {.count = 1, .reusable = true}, SHIFT(361),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [784] = {.count = 1, .reusable = true}, SHIFT(362),
  [786] = {.count = 1, .reusable = true}, SHIFT(364),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [792] = {.count = 1, .reusable = true}, SHIFT(368),
  [794] = {.count = 1, .reusable = false}, SHIFT(369),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [804] = {.count = 1, .reusable = true}, SHIFT(370),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [808] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [812] = {.count = 1, .reusable = true}, SHIFT(371),
  [814] = {.count = 1, .reusable = true}, SHIFT(372),
  [816] = {.count = 1, .reusable = false}, SHIFT(373),
  [818] = {.count = 1, .reusable = true}, SHIFT(348),
  [820] = {.count = 2, .reusable = false}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(350),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [825] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(352),
  [828] = {.count = 1, .reusable = true}, SHIFT(374),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [832] = {.count = 1, .reusable = true}, SHIFT(375),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(359),
  [841] = {.count = 1, .reusable = true}, SHIFT(376),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [845] = {.count = 1, .reusable = true}, SHIFT(377),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [849] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(368),
  [852] = {.count = 2, .reusable = false}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(369),
  [855] = {.count = 1, .reusable = false}, SHIFT(378),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [863] = {.count = 2, .reusable = false}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(378),
};

void *tree_sitter_latex_external_scanner_create();
void tree_sitter_latex_external_scanner_destroy(void *);
bool tree_sitter_latex_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_latex_external_scanner_serialize(void *, char *);
void tree_sitter_latex_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_latex() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_latex_external_scanner_create,
      tree_sitter_latex_external_scanner_destroy,
      tree_sitter_latex_external_scanner_scan,
      tree_sitter_latex_external_scanner_serialize,
      tree_sitter_latex_external_scanner_deserialize,
    },
  };
  return &language;
}
