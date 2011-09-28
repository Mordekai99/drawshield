<?php /* Copyright 2010 Karl R. Wilcox 

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

$ordinary = array (
  'patterns' => array (
    'tierce',
  ), 

  'doc' => '',

);

if ( $node == null ) {
  include 'ordinaries/common/_couped.inc';
  include 'ordinaries/common/_compony.inc';
  include 'ordinaries/common/_lozengy.inc';
} else {
  $couped = get_mod($node,'couped');
  $compony = get_mod($node,'compony');
  
  if ( $couped == 'both' )
    $body_data = array ( 'shape_spec' => array ( 'NC' => 'X0Y100a300C1000e300G1000', 'CH' => 'X0Y400a300C700e300G700' ),
                  'bounding_box' => array ( 'NC' => '0,1000,350,100', 'CH' => '0,700,350,400' ));
  elseif ( $couped == 'chief')
    $body_data = array ( 'shape_spec' => array ( 'NC' => 'X0Y100a300C1200e300G2000', 'CH' => 'X0Y400a300C900e300G900' ),
                  'bounding_box' => array ( 'NC' => '0,1100,350,100', 'CH' => '0,800,350,400' ));
  elseif ( $couped == 'base')
    $body_data = array ( 'shape_spec' => array ( 'NC' => 'X0Y-100a300C1200e300G1200', 'CH' => 'X0Y200a300C900e300G900' ),
                  'bounding_box' => array ( 'NC' => '0,1100,350,0', 'CH' => '0,800,350,300' ));
  elseif ( get_mod($node,'lozengy'))
    $body_data = array ( 'body' => '<path d="M0,150l75,-150 75,150 75,-150 75,150 -75,150 -75,-150 -75,150 -75,-150  M0,450l75,-150 75,150 75,-150 75,150 -75,150 -75,-150 -75,150 -75,-150   M0,750l75,-150 75,150 75,-150 75,150 -75,150 -75,-150 -75,150 -75,-150  M0,1050l75,-150 75,150 75,-150 75,150 -75,150 -75,-150 -75,150 -75,-150" />' );
  elseif ( $compony == 'single' )
    $body_data =  array ( 'shape_spec' => 'X333.33Y-200C1600e500g1600a500', 
        'body2' => '<path d="M0,0h333v300h-333z M0,600h333v300h-333z M0,600h333v300h-333z " />',);
  elseif ( $compony == 'double' )
    array ('shape_spec' => 'X333.33Y-200C1600e500g1600a500', 
        'body2' => '<path d="M0,0h167v150h-167z M167,150h167v150h-167z M0,300h167v150h-167z M167,450h167v150h-167z M0,600h167v150h-167z M167,750h167v150h-167z M0,900h167v150h-167z M167,1050h167v150h-167z " />',);
  else
    $body_data = array ( 'shape_spec' => array ( 'NC' => 'X333.33Y-200C1600e500g1600a500', 'CH' => 'X333.33Y100C1300e500g1300a500' ), );
    
  if ( ! array_key_exists('bounding_box', $body_data)) $body_data['bounding_box'] = array ( 'NC' => '300,1200,350,0', 'CH' => '300,900,350,300' );
  $ordinary = array_merge($ordinary, $body_data);
}

?>