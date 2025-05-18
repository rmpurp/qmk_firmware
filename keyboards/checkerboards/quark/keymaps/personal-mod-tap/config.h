/* Copyright 2020 Nathan Spears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TAPPING_TOGGLE 2
#define TAPPING_TERM 150

// Only enable this for ESC layer tap
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define TAPPING_FORCE_HOLD

// If you press a dual-role key, tap another key (press and release) and then release
// the dual-role key, all within the tapping term, dual-role key will perform its hold action instead.
#define PERMISSIVE_HOLD

// Disable double-pressing to enable key repeat
#define QUICK_TAP_TERM 0

#define CHORDAL_HOLD
