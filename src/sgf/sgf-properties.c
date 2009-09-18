/* This file is automatically generated by `parse-sgf-list'.
 * Do not modify it, edit `sgf-properties.list' instead.
 */


#include "sgf-privates.h"
#include "sgf-parser.h"
#include "sgf-writer.h"


const SgfPropertyInfo property_info[] = {
  /* Root properties. */
  { "FF", SGF_NOT_STORED, sgf_parse_file_format, NULL },
  { "GM", SGF_NOT_STORED, sgf_parse_game_type, NULL },
  { "CA", SGF_NOT_STORED, sgf_parse_char_set, NULL },
  { "ST", SGF_NOT_STORED, sgf_parse_style, NULL },
  { "AP", SGF_NOT_STORED, sgf_parse_application, NULL },
  { "SZ", SGF_NOT_STORED, sgf_parse_board_size, NULL },

  /* Game information properties. */
  { "GN", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "EV", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "RO", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "PC", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "DT", SGF_SIMPLE_TEXT, sgf_parse_date, sgf_write_simple_text },
  { "RU", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },

  /* `HA' and `KM' are specific to Go. */
  { "HA", SGF_FAKE_SIMPLE_TEXT, sgf_parse_handicap, sgf_write_fake_simple_text },
  { "KM", SGF_FAKE_SIMPLE_TEXT, sgf_parse_komi, sgf_write_fake_simple_text },
  { "TM", SGF_FAKE_SIMPLE_TEXT, sgf_parse_time_limit, sgf_write_fake_simple_text },
  { "OT", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "PB", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "BT", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "BR", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "PW", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "WT", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "WR", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "AN", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "CP", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "SO", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "US", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "ON", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "GC", SGF_TEXT, sgf_parse_text, sgf_write_text },
  { "RE", SGF_SIMPLE_TEXT, sgf_parse_result, sgf_write_simple_text },

  /* Setup properties. */
  { "AB", SGF_LIST_OF_POINT, sgf_parse_setup_property, sgf_write_list_of_point },
  { "AW", SGF_LIST_OF_POINT, sgf_parse_setup_property, sgf_write_list_of_point },
  { "AE", SGF_LIST_OF_POINT, sgf_parse_setup_property, sgf_write_list_of_point },
  { "AA", SGF_LIST_OF_POINT, sgf_parse_setup_property, sgf_write_list_of_point },
  { "PL", SGF_NOT_STORED, sgf_parse_to_play, NULL },

  /* Move properties. */
  { "B", SGF_NOT_STORED, sgf_parse_move, NULL },
  { "W", SGF_NOT_STORED, sgf_parse_move, NULL },
  { "KO", SGF_NONE, sgf_parse_none, sgf_write_none },
  { "MN", SGF_NUMBER, sgf_parse_constrained_number, sgf_write_number },

  /* Node annotation properties. */
  { "N", SGF_SIMPLE_TEXT, sgf_parse_simple_text, sgf_write_simple_text },
  { "C", SGF_TEXT, sgf_parse_text, sgf_write_text },
  { "HO", SGF_DOUBLE, sgf_parse_double, sgf_write_double },
  { "UC", SGF_DOUBLE, sgf_parse_double, sgf_write_double },
  { "V", SGF_REAL, sgf_parse_real, sgf_write_real },
  { "GB", SGF_DOUBLE, sgf_parse_double, sgf_write_double },
  { "DM", SGF_DOUBLE, sgf_parse_double, sgf_write_double },
  { "GW", SGF_DOUBLE, sgf_parse_double, sgf_write_double },

  /* Move annotation properties. */
  { "BM", SGF_DOUBLE, sgf_parse_double, sgf_write_double },
  { "DO", SGF_NONE, sgf_parse_none, sgf_write_none },
  { "IT", SGF_NONE, sgf_parse_none, sgf_write_none },
  { "TE", SGF_DOUBLE, sgf_parse_double, sgf_write_double },

  /* Timing properties. */
  { "BL", SGF_REAL, sgf_parse_real, sgf_write_real },
  { "OB", SGF_NUMBER, sgf_parse_constrained_number, sgf_write_number },
  { "WL", SGF_REAL, sgf_parse_real, sgf_write_real },
  { "OW", SGF_NUMBER, sgf_parse_constrained_number, sgf_write_number },

  /* Markup properties. */
  { "MA", SGF_LIST_OF_POINT, sgf_parse_markup_property, sgf_write_list_of_point },
  { "CR", SGF_LIST_OF_POINT, sgf_parse_markup_property, sgf_write_list_of_point },
  { "SQ", SGF_LIST_OF_POINT, sgf_parse_markup_property, sgf_write_list_of_point },
  { "TR", SGF_LIST_OF_POINT, sgf_parse_markup_property, sgf_write_list_of_point },
  { "SL", SGF_LIST_OF_POINT, sgf_parse_markup_property, sgf_write_list_of_point },
  { "LB", SGF_LIST_OF_LABEL, sgf_parse_list_of_label, sgf_write_list_of_label },

  /* `TB' and `TW' are Go-specific. */
  { "TB", SGF_LIST_OF_POINT, sgf_parse_territory, sgf_write_list_of_point },
  { "TW", SGF_LIST_OF_POINT, sgf_parse_territory, sgf_write_list_of_point },
  { "AR", SGF_LIST_OF_VECTOR, sgf_parse_list_of_vector, sgf_write_list_of_vector },
  { "LN", SGF_LIST_OF_VECTOR, sgf_parse_list_of_vector, sgf_write_list_of_vector },
  { "DD", SGF_ELIST_OF_POINT, sgf_parse_list_of_point, sgf_write_list_of_point },

  /* Miscellaneous properties. */
  { "FG", SGF_FIGURE_DESCRIPTION, sgf_parse_figure, sgf_write_figure_description },
  { "PM", SGF_NUMBER, sgf_parse_constrained_number, sgf_write_number },
  { "VW", SGF_ELIST_OF_POINT, sgf_parse_list_of_point, sgf_write_list_of_point },

  /* Custom extension properties we support. */
  { "IL", SGF_LIST_OF_POINT, sgf_parse_list_of_point, sgf_write_list_of_point },

  /* Any property we don't know about (e.g. a custom extension). */
  { "", SGF_TYPE_UNKNOWN, NULL, sgf_write_unknown }
};

const SgfType property_tree[][1 + ('Z' - 'A' + 1)] = {
  {
    SGF_UNKNOWN,
    SGF_NUM_PROPERTIES + 1,
    SGF_NUM_PROPERTIES + 2,
    SGF_NUM_PROPERTIES + 3,
    SGF_NUM_PROPERTIES + 4,
    SGF_NUM_PROPERTIES + 5,
    SGF_NUM_PROPERTIES + 6,
    SGF_NUM_PROPERTIES + 7,
    SGF_NUM_PROPERTIES + 8,
    SGF_NUM_PROPERTIES + 9,
    SGF_UNKNOWN,
    SGF_NUM_PROPERTIES + 10,
    SGF_NUM_PROPERTIES + 11,
    SGF_NUM_PROPERTIES + 12,
    SGF_NODE_NAME,
    SGF_NUM_PROPERTIES + 13,
    SGF_NUM_PROPERTIES + 14,
    SGF_UNKNOWN,
    SGF_NUM_PROPERTIES + 15,
    SGF_NUM_PROPERTIES + 16,
    SGF_NUM_PROPERTIES + 17,
    SGF_NUM_PROPERTIES + 18,
    SGF_NUM_PROPERTIES + 19,
    SGF_NUM_PROPERTIES + 20,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_ADD_ARROWS,
    SGF_ADD_BLACK,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_ADD_EMPTY,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_ANNOTATOR,
    SGF_UNKNOWN,
    SGF_APPLICATION,
    SGF_UNKNOWN,
    SGF_ARROW,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_ADD_WHITE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_BLACK,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_TIME_LEFT_FOR_BLACK,
    SGF_BAD_MOVE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_BLACK_RANK,
    SGF_UNKNOWN,
    SGF_BLACK_TEAM,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_COMMENT,
    SGF_CHAR_SET,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_COPYRIGHT,
    SGF_UNKNOWN,
    SGF_CIRCLE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_DIMMED,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_DAME,
    SGF_UNKNOWN,
    SGF_DOUBTFUL,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_DATE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_EVENT,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_FILE_FORMAT,
    SGF_FIGURE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_GOOD_4BLACK,
    SGF_GAME_COMMENT,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_GAME_TYPE,
    SGF_GAME_NAME,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_GOOD_4WHITE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_HANDICAP,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_HOTSPOT,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_ILLEGAL_MOVE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_INTERESTING,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_KOMI,
    SGF_UNKNOWN,
    SGF_KO,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_LABEL,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_LINE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_MARK,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_MOVE_NUMBER,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_MOVES_LEFT_FOR_BLACK,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_OPENING,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_OVERTIME,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_MOVES_LEFT_FOR_WHITE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_PLAYER_BLACK,
    SGF_PLACE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_TO_PLAY,
    SGF_PRINT_MODE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_PLAYER_WHITE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_RESULT,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_ROUND,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_RULE_SET,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_SELECTED,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_SOURCE,
    SGF_UNKNOWN,
    SGF_SQUARE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_STYLE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_BOARD_SIZE
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_BLACK_TERRITORY,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_TESUJI,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_TIME_LIMIT,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_TRIANGLE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_WHITE_TERRITORY,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNCLEAR,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_USER,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_VALUE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_VIEW_PORT,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  },
  {
    SGF_WHITE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_TIME_LEFT_FOR_WHITE,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_WHITE_RANK,
    SGF_UNKNOWN,
    SGF_WHITE_TEAM,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN,
    SGF_UNKNOWN
  }
};
