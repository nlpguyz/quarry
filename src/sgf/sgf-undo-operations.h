/* This file is automatically generated by `parse-sgf-list'.
 * Do not modify it, edit `sgf-undo-operations.list' instead.
 */


#ifndef QUARRY_SGF_UNDO_OPERATIONS_H
#define QUARRY_SGF_UNDO_OPERATIONS_H


typedef enum {
  SGF_OPERATION_NEW_NODE,
  SGF_OPERATION_DELETE_NODE,
  SGF_OPERATION_DELETE_NODE_CHILDREN,
  SGF_OPERATION_SWAP_NODES,
  SGF_OPERATION_CHANGE_NODE_MOVE_COLOR,
  SGF_OPERATION_CHANGE_NODE_TO_PLAY_COLOR,
  SGF_OPERATION_NEW_PROPERTY,
  SGF_OPERATION_DELETE_PROPERTY,
  SGF_OPERATION_CHANGE_PROPERTY,
  SGF_OPERATION_CHANGE_REAL_PROPERTY,
  SGF_OPERATION_CUSTOM,
  SGF_NUM_OPERATIONS
} SgfUndoOperation;


#endif /* QUARRY_SGF_UNDO_OPERATIONS_H */