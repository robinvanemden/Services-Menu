<?php

/**
 * Callback for retrieving menu resources.
 *
 * @param int $id
 * @return object
 */
function _services_menu_retrieve($menu_name) {
  return services_menu_get_menu($menu_name);
}