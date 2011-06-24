<?php
// $Id$

/**
 * Callback for retrieving menu resources.
 *
 * @param int $id
 * @return object
 */
function _menu_service_retrieve($menu_name) {
  return menu_service_get_menu($menu_name);
}