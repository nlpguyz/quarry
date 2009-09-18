/* This file is automatically generated by `parse-sgf-list'.
 * Do not modify it, edit `sgf-errors.list' instead.
 */


#include "quarry.h"
#include <stdlib.h>


const char *sgf_errors[] = {
  "critical: unexpected end of file, information may be lost "
  "(proceeded with read data)",

  "error: property `%N' with invalid value [%V] (deleted)",

  "error: invalid game type [%V] (deleted; assuming Go, GM[1])",

  "error: move in `%N' property value is out of board (property deleted)",


  "error: property `%N' with empty value (deleted)",

  "error: duplicate property `%N' (deleted)",

  "error: negative value of time limit (`TM') property (property deleted)",

  NULL,


  "critical: future SGF version, FF[%d] - be careful when saving (reading on)",

  "error: game-info property `%N' outside game-info node (deleted)",

  "error: game-info property `%N' with invalid value [%V] (preserved)",

  "error: root property `%N' outside root node (deleted)",

  "error: %s-specific property `%N' in %s game tree (deleted)",

  "warning: property `%N' with empty value (deleted)",

  "warning: duplicate property `%N' (values merged)",

  "warning: duplicate unknown property `%s' "
  "(assuming list type; values merged)",

  "error: move property `%N' in a node already having a move (split node)",


  "error: setup and move properties mixed in one node (split node)",

  "error: setup and move properties mixed in one node (deleted `PL' property)",

  "error: move %M is senseless: no piece of appropriate color at %P (deleted)",

  "error: `KO' property in a node without a move (deleted)",

  "warning: non-SGF point notation `%c%d' "
  "(parsed anyway; note: this warning is reported once only)",

  "error: variation without nodes (deleted)",

  "warning: empty value of property `%N' (value ignored)",

  "error: value [%V] of property `%N' is not empty as it should be "
  "(value deleted)",

  "error: property `%N' cannot have a list of values "
  "(all values but first deleted)",

  "warning: property `%N' cannot have a list of values (values merged)",

  "error: invalid value [%V] of property `%N' (value deleted)",

  "warning: composed simple text value expected (assuming empty second part)",

  "error: property `%N' with invalid value [%V], while expected [1] or [2] "
  "(assuming [1])",

  "warning: lower-case color `%c' in property `%N' (upcased to `%c')",

  "warning: missed integral part of floating-point number in value "
  "of property `%N' (zero supplied)",

  "warning: missed fractional part of floating-point number in value "
  "of property `%N' (zero supplied)",

  "error: too large (by absolute value) floating-point number in value "
  " of property `%N' (replaced with something huge)",

  "error: point in `%N' property value is out of board (value deleted)",

  "error: rectangle corners specified in value of property `%N' "
  "are not upper left and lower right ones (fixed)",

  "warning: rectangle specified in value of property `%N' is single point "
  "(second corner ignored)",

  "error: more values after empty list value [] in property `%N' (deleted)",

  "warning: point %P in `%N' setup property value doesn't change the board "
  "(value ignored)",

  "warning: point %P was already listed in another `%N' property value "
  "(ignored)",

  "error: point %P (in `%N' property value) was already listed "
  "in another setup property (deleted)",

  "error: point %P (in `%N' property value) was already listed "
  "in another markup property (deleted)",

  "error: point %P (in `%N' property value) was already listed "
  "in another territory property (deleted)",

  "warning: vector/line %P:%P was already listed in another `%N' "
  "property value (ignored)",

  "error: vector/line %P:%P has zero length (deleted)",

  "error: point %P already has a label (value deleted)",

  "warning: empty label at point %P (ignored)",

  "error: board of size %dx%d is too large per SGF standard (assuming %dx%d)",

  "warning: board is specified as rectangular, but with equal width and height "
  "(height ignored)",

  "warning: unknown game type [%d], presumably new in SGF standard "
  "(only general properties will be validated)",

  "warning: unsupported game: %s, GM[%d] "
  "(only general properties will be validated)",

  "error: handicap cannot be negative or equal to 1 (assuming 0)",

  "warning: handicap larger than the number of board vertices "
  "(reduced to %d)",

  "warning: flags not listed in SGF specification used in `%N' property value "
  "(unknown flags kept)",

  "error: flags expected in the value of property `FG' "
  "(default flags supplied)",

  "warning: unknown print mode %d not listed in SGF specification "
  "(kept anyway)",

  "warning: zero byte encountered "
  "(ignored; note: this warning is reported once only)",

  "warning: whitespace in value of non-text property `%N' (ignored)",

  "error: illegal trailing character(s) [...%V] in value of property `%N' "
  "(deleted)",

  "error: illegal trailing character(s) [...%V:...] in first part "
  "of composed value of property `%N' (deleted)",


  "warning: the above error is reported too frequently (suppressed)"
};
