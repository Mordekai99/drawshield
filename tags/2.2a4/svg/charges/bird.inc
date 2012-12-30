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


function makeChg_bird ( $node ) {
  $charge_data = array (
'chough' => array ( 'width' => 213, 'height' => 161, 'proper' => '#050505', 'orient_to_ordinary' => true,
'body' => '<path d="M 112.21,153.83 C 111.99,150.96 112.42,149.81 114.18,148.58 C 117.33,146.37 117.69,146.53 118.43,150.50 C 119.20,154.61 122.24,156.95 127.78,157.69 C 130.61,158.07 132.10,157.75 133.36,156.49 C 135.66,154.18 135.00,152.71 131.17,151.62 C 125.17,149.89 128.44,143.78 136.83,141.03 C 142.14,139.30 144.36,140.36 144.81,144.85 C 145.18,148.55 146.50,148.81 149.68,145.82 C 152.80,142.89 152.84,137.59 149.75,135.58 C 148.51,134.77 145.08,133.80 142.14,133.41 L 136.78,132.71 L 137.35,129.19 C 137.67,127.25 139.06,123.33 140.46,120.48 C 141.85,117.63 143,114.62 143,113.79 C 143,112.96 140.30,110.61 137.00,108.58 C 130.90,104.81 128.10,101.49 129.68,99.91 C 131.03,98.56 145.93,96.76 151.14,97.32 C 156.49,97.90 158.90,99.00 164.5,103.42 C 166.7,105.16 171.65,108.77 175.5,111.44 C 179.35,114.11 183.53,117.35 184.79,118.64 C 186.05,119.94 188.08,121 189.31,121 C 191.82,121 196,118.42 196,116.88 C 196,116.32 199.15,112.75 203,108.93 C 206.85,105.11 209.98,101.42 209.97,100.74 C 209.94,99.29 200.51,92.86 190.5,87.48 C 180.75,82.23 171.63,76.70 170.76,75.50 C 169.40,73.64 169.97,73.19 175.75,71.51 C 183.37,69.29 184.5,68.62 184.5,66.39 C 184.5,64.90 183.74,64.48 181,64.43 C 164.38,64.13 161.85,63.92 162.20,62.87 C 162.41,62.25 165.03,60.98 168.04,60.05 C 174.76,57.96 181.98,53.92 181.99,52.25 C 181.99,51.48 180.53,50.95 178.25,50.89 C 176.18,50.83 167.47,50.64 158.87,50.47 C 140.70,50.11 124.97,48.51 120,46.53 C 115.17,44.60 97.74,39.49 90.62,37.91 L 84.74,36.61 L 78.89,24.44 C 71.82,9.73 67.92,5.59 60.13,4.51 C 50.70,3.22 43.04,5.55 38.84,10.99 C 37.55,12.66 35.49,15.32 34.25,16.90 C 32.94,18.58 30.65,20.03 28.73,20.38 C 21.64,21.72 9,31.13 9,35.08 C 9,38.54 11.30,39.02 18.06,36.97 C 26.39,34.43 34.51,34.40 38.59,36.89 C 42.99,39.57 49,45.99 49,48.01 C 49,48.95 48.16,50.80 47.14,52.11 C 43.51,56.77 41,64.08 41,69.96 C 41,75.04 41.44,76.30 45.05,81.33 C 47.28,84.45 49.49,87 49.95,87 C 50.42,87 53.49,89.02 56.78,91.5 C 60.08,93.97 63.17,96 63.66,96 C 64.15,96 65.31,96.89 66.25,97.97 C 67.23,99.13 68.59,99.70 69.51,99.35 C 72.16,98.34 80.20,102.11 85.05,106.64 C 87.59,109.02 91.34,111.66 93.40,112.52 C 95.45,113.38 96.96,114.62 96.74,115.29 C 96.14,117.13 84.80,123.86
82.19,123.93 C 76.54,124.08 71.00,121.73 67.14,117.53 C 62.95,112.99 57.39,111.09 54.81,113.32 C 49.33,118.05 48.89,122.62 54.03,121.49 C 58.61,120.48 58.66,122.85 54.12,126.99 C 51.11,129.75 50,131.54 50,133.66 C 50,137.83 52.55,141 55.92,141 C 58.46,141 58.79,140.60 59.29,136.85 C 59.83,132.83 61.45,130.70 63.5,131.34 C 64.05,131.52 64.52,133.82 64.54,136.46 C 64.58,140.42 65.07,141.66 67.35,143.63 C 69.41,145.39 70.80,145.84 72.81,145.37 C 76.90,144.41 77.34,143.45 74.55,141.62 C 71.27,139.47 71.30,136.69 74.63,134.07 C 77.82,131.56 84.55,131.30 87.77,133.55 C 90.18,135.24 90.71,137.59 88.82,138.22 C 88.15,138.44 87.92,139.36 88.29,140.33 C 88.78,141.59 89.62,141.88 91.47,141.41 C 93.35,140.94 94.45,141.33 95.76,142.95 C 97.45,145.05 101,145.01 101,142.89 C 101,141.68 105.72,141.75 106.48,142.97 C 106.81,143.51 106.14,145.24
104.98,146.80 C 101.48,151.53 105.01,158.54 110.5,157.77 C 112.14,157.54 112.45,156.85 112.21,153.83 z M 112.92,136.22 C 109.75,134.33 107.23,133.64 103.74,133.69 C 99.44,133.76 98.77,133.47 97.47,130.94 C 95.50,127.14 96.23,125.76 102.58,121.39 C 105.56,119.34 108,117.12 108,116.46 C 108,115.80 109.82,114.05 112.05,112.58 L 116.10,109.89 L 122.30,112.37 C 125.71,113.73 129.29,115.90 130.26,117.18 C 131.91,119.36 131.92,119.88 130.47,124.77 C 128.22,132.35 125.26,136.91 122.14,137.59 C 120.69,137.90 119.00,138.31 118.39,138.49 C 117.78,138.67 115.32,137.65 112.92,136.22 z M 158.58,66.35 C 157.74,64.17 158.85,63.16 160.03,65.02 C 161.22,66.89 161.24,68 160.10,68 C 159.61,68 158.93,67.26 158.58,66.35 z" />
<path d="M 183.14,112.25 C 180.36,110.18 175.53,106.7 172.41,104.5 C 162.77,97.71 147,84.92 147,83.90 C 147,82.00 149.88,81.87 152.66,83.66 C 158.29,87.27 176.67,100.46 184.25,106.32 C 188.93,109.94 192,113.05 192,114.16 C 192,117.08 188.69,116.36 183.14,112.25 z M 105,114.17 C 105,113.52 104.18,113 103.18,113 C 101.02,113 92.47,108.85 89.10,106.17 C 85.70,103.47 87.15,102.15 93.09,102.58 C 96.52,102.82 99.61,103.86 102.49,105.72 C 104.85,107.25 107.53,108.95 108.46,109.50 C 109.99,110.40 109.90,110.73 107.57,112.92 C 106.16,114.25 105,114.82 105,114.17 z M 188,105.01 C 184.42,102.33 180.15,99.04 178.5,97.71 C 176.85,96.37 171,92.25 165.5,88.57 C 160,84.88 155.36,81.48 155.19,81.02 C 154.31,78.57
157.40,79.56 163.04,83.53 C 166.53,85.98 169.97,88 170.69,88 C 171.41,88 172,88.44 172,88.99 C 172,89.53 173.54,90.77 175.44,91.74 C 182.85,95.52 194.73,103.09 196.91,105.41 C 199.34,107.99 199.01,110.03 196.19,109.94 C 195.26,109.90 191.57,107.69 188,105.01 z M 118,107.41 C 112.06,106.42 103.23,102.86 101.99,100.94 C 101.11,99.59 93.76,94 92.86,94 C 92.38,94 92,94.72 92,95.61 C 92,98.08 74.46,97.19 70.39,94.51 C 68.80,93.46 66.77,92.54 65.88,92.47 C 64.99,92.41 63.17,91.48 61.83,90.42 C 46.91,78.58 44.52,75.15 45.29,66.68 C 45.67,62.54 46.64,59.65 48.65,56.68 C 50.21,54.38 51.77,52.27 52.11,52 C 52.45,51.72 53.05,50.46 53.44,49.20 C 54.63,45.40 48.48,37.35 41.75,33.88 C 38.30,32.11 38,31.61 38,27.67 C 38,25.32 37.50,22.90 36.89,22.29 C 35.31,20.71 40.92,12.83 45.73,9.84 C 48.76,7.96 50.77,7.53 55.98,7.64 C 62.42,7.78 62.51,7.81 66.98,12.72 C 70.00,16.02 73.19,21.42 76.62,29.04 C 81.13,39.07 82.08,40.51 84.62,41.07 C 86.20,41.43 91.1,42.49 95.5,43.44 C 113.48,47.31 138,57.50 138,61.11 C 138,62.29 139.05,63.44 140.71,64.08 C 142.89,64.91 143.14,65.29 141.96,66.04 C 140.41,67.02 146.19,67.59 152.87,67.12 C 157.81,66.77 159.56,67.61 157.93,69.57 C 156.80,70.94 157.10,71.09 160.46,70.81 C 165.05,70.43 166.52,72.61 162.32,73.55 C 160.76,73.90 157.7,74.80 155.5,75.54 C 146.79,78.50 123.17,79.34 106,77.31
C 91.70,75.62 88.16,74.50 87.39,71.45 C 86.73,68.79 84.53,68.15 83.68,70.37 C 83.35,71.25 82.21,71.57 80.57,71.25 C 77.66,70.70 76.94,72.73 79.75,73.60 C 80.71,73.91 83.52,75.03 86,76.11 C 92.21,78.81 105.33,80.72 118.96,80.92 C 130.97,81.10 133.44,81.56 128.15,82.61 C 126.42,82.96 124.99,83.53 124.99,83.87 C 124.98,85.37 99.59,85.04 91.64,83.44 C 82.99,81.70 74.48,77.78 72.89,74.80 C 72.36,73.81 71.34,73 70.62,73 C 69.03,73 67,68.78 67,65.49 C 67,62.85 72.37,57.88 76.23,56.95 C 78.82,56.33 79.97,53 77.60,53 C 73.78,53 67.46,57.76 65.11,62.41 C 63.00,66.57 62.85,67.58 63.86,70.92 C 65.36,75.96 69.06,79.48 76.68,83.16 C 86.81,88.05 107.92,89.50 125,86.5 C 136.55,84.46 140.29,84.56 142.47,86.97 C 143.45,88.06 145.10,89.21 146.13,89.54 C 147.15,89.86 148,90.77 148,91.56 C 148,92.35 147.88,93.00 147.75,93.00 C 147.61,93.00 143.67,93.67 139,94.5 C 127.43,96.53 127.01,96.48 125.69,93 C 124.46,89.75 122.90,89.20 121.09,91.38 C 120.20,92.45 120.72,94.23
123.40,99.38 C 125.29,103.02 126.46,106 125.99,106 C 125.53,106 125.00,106.56 124.82,107.25 C 124.57,108.22 123.09,108.26 118,107.41 z M 148.5,72.14 C 150.67,71.49 148.19,71.22 139.5,71.16 C 118.65,71.01 104.33,69.61 102.00,67.50 C 100.48,66.13 99.66,65.93 98.83,66.76 C 98.21,67.38 96.42,67.63 94.85,67.32 C 91.37,66.62 90.90,68.68 94.35,69.55 C 105.95,72.46
141.64,74.17 148.5,72.14 z M 156,71 C 156,70.45 155.35,70 154.55,70 C 153.76,70 152.83,70.45 152.5,71 C 152.16,71.55 152.80,72 153.94,72 C 155.07,72 156,71.55 156,71 z M 129.06,65.42 C 117.76,64.13 115.41,64.25 116.54,66.06 C 116.85,66.58 122.37,66.94 128.80,66.86 L 140.5,66.73 L 129.06,65.42 z M 137,62.01 C 137,61.47 135.98,60.83 134.75,60.59 C 133.51,60.35 129.35,59.48 125.5,58.66 C 109.29,55.23 100.00,53.66 99.39,54.27 C 97.47,56.18 100.66,57.83 110.15,59.82 C 123.10,62.53 124.20,62.69 131.25,62.86 C 134.43,62.93 137,62.56 137,62.01 z M 197.88,102.13 C 196.57,101.11 193.47,99.24 191,97.99 C 187.48,96.21 167.90,83.71 162.50,79.80 C 161.86,79.33 161.91,78.68 162.65,77.94 C 163.50,77.09 166.07,78.03 172.81,81.65 C 188.37,90.00 202.74,98.89 203.38,100.57 C 204.78,104.19 201.65,105.08 197.88,102.13 z M 144.75,60.44 C 143.35,58.99
143.98,58.25 147.15,57.61 C 151.54,56.74 150.40,56.12 143.44,55.61 C 140.17,55.37 137.16,55.13 136.75,55.08 C 136.33,55.03 136,54.49 136,53.87 C 136,53.05 140.75,52.91 153.25,53.34 C 162.73,53.68 170.61,53.96 170.75,53.97 C 170.88,53.98 171,54.41 171,54.92 C 171,57.73 147.00,62.78 144.75,60.44 z M 155.5,57 C 155.85,56.42 154.93,56.00 153.30,56.01 C 151.12,56.02 150.83,56.24 152,57 C 153.92,58.24 154.73,58.24 155.5,57 z"/>
<path fill="#0F0F0F" d="M 106.36,156.55 C 103.05,154.22 102.48,150.18 104.98,146.80 C 106.14,145.24 106.81,143.51 106.48,142.97 C 105.72,141.75 101,141.68 101,142.89 C 101,145.01 97.45,145.05 95.76,142.95 C 94.45,141.33 93.35,140.94 91.47,141.41 C 89.62,141.88 88.78,141.59 88.29,140.33 C 87.92,139.36 88.15,138.44 88.82,138.22 C 90.71,137.59 90.18,135.24 87.77,133.55 C 84.55,131.30 77.82,131.56 74.63,134.07 C 71.30,136.69 71.27,139.47 74.55,141.62 C 77.34,143.45 76.90,144.41 72.81,145.37 C 70.80,145.84 69.41,145.39 67.35,143.63 C 65.07,141.66 64.58,140.42 64.54,136.46 C 64.52,133.82 64.05,131.52 63.5,131.34 C 61.45,130.70 59.83,132.83 59.29,136.85 C 58.79,140.60 58.46,141 55.92,141 C 52.55,141 50,137.83 50,133.66 C 50,131.54 51.11,129.75 54.12,126.99 C 58.66,122.85 58.61,120.48 54.03,121.49 C 48.89,122.62 49.33,118.05 54.81,113.32 C 57.39,111.09 62.95,112.99 67.14,117.53 C 71.00,121.73 76.54,124.08 82.19,123.93 C 84.80,123.86 96.14,117.13 96.74,115.29 C 96.96,114.62 95.45,113.38 93.40,112.52 C 91.34,111.66 87.59,109.02 85.05,106.64 C 80.20,102.11 72.16,98.34 69.51,99.35 C 68.59,99.70 67.23,99.13 66.25,97.97 C 65.31,96.89 64.15,96 63.66,96 C 63.17,96 60.08,93.97 56.78,91.5 C 53.49,89.02 50.42,87 49.95,87 C 49.49,87 47.28,84.45 45.05,81.33 C 41.44,76.30 41,75.04 41,69.96 C 41,64.08 43.51,56.77 47.14,52.11 C 48.16,50.80 49,48.95 49,48.01 C 49,45.99 42.99,39.57 38.59,36.89 C 34.51,34.40 26.39,34.43 18.06,36.97 C 11.30,39.02 9,38.54 9,35.08 C 9,31.13 21.64,21.72 28.73,20.38 C 30.65,20.03 32.94,18.58 34.25,16.90 C 35.49,15.32 37.55,12.66 38.84,10.99 C 43.04,5.55 50.70,3.22 60.13,4.51 C 67.92,5.59 71.82,9.73 78.89,24.44 L 84.74,36.61 L 90.62,37.91 C 97.74,39.49 115.17,44.60 120,46.53 C 124.97,48.51 140.70,50.11 158.87,50.47 C 167.47,50.64 176.18,50.83 178.25,50.89 C 180.53,50.95 181.99,51.48 181.99,52.25 C 181.98,53.92 174.76,57.96 168.04,60.05 C 165.03,60.98 162.41,62.25 162.20,62.87 C 161.85,63.92 164.38,64.13 181,64.43 C 183.74,64.48 184.5,64.90 184.5,66.39 C 184.5,68.62 183.37,69.29 175.75,71.51 C 169.97,73.19 169.40,73.64 170.76,75.50 C 171.63,76.70 180.75,82.23 190.5,87.48 C 200.51,92.86 209.94,99.29 209.97,100.74 C 209.98,101.42 206.85,105.11 203,108.93 C 199.15,112.75 196,116.32 196,116.88 C 196,118.42 191.82,121 189.31,121 C 188.08,121 186.05,119.94 184.79,118.64 C 183.53,117.35 179.35,114.11 175.5,111.44 C 171.65,108.77 166.7,105.16 164.5,103.42 C 158.90,99.00 156.49,97.90 151.14,97.32 C 145.93,96.76 131.03,98.56 129.68,99.91 C 128.10,101.49 130.90,104.81 137.00,108.58 C 140.30,110.61 143,112.96 143,113.79 C 143,114.62 141.85,117.63 140.46,120.48 C 139.06,123.33 137.67,127.25 137.35,129.19 L
136.78,132.71 L 142.14,133.41 C 145.08,133.80 148.51,134.77 149.75,135.58 C 152.84,137.59 152.80,142.89 149.68,145.82 C
146.50,148.81 145.18,148.55 144.81,144.85 C 144.36,140.36 142.14,139.30 136.83,141.03 C 128.44,143.78 125.17,149.89 131.17,151.62 C 135.00,152.71 135.66,154.18 133.36,156.49 C 132.10,157.75 130.61,158.07 127.78,157.69 C 122.24,156.95 119.20,154.61 118.43,150.50 C 117.69,146.53 117.33,146.37 114.18,148.58 C 112.42,149.81 111.99,150.96 112.21,153.83 C 112.45,156.85 112.14,157.54 110.5,157.77 C 109.4,157.93 107.53,157.38 106.36,156.55 z M 126.15,152.21 C 124.60,150.03 124.40,149.01 125.24,147.46 C 127.09,144.08 131.80,140.08 134.71,139.43 C 136.24,139.09 139.07,138.33 141,137.74 L 144.5,136.67 L
141.71,135.74 C 139.79,135.10 138.49,135.17 137.51,135.99 C 135.73,137.46 134,136.48 134,133.98 C 134,130.83 136.87,120.84 138.48,118.38 C 140.61,115.13 140.39,114.12 137.25,112.77 C 135.73,112.12 133.37,110.83 132,109.91 C 129.87,108.48 129.30,108.43 128.21,109.61 C 127.15,110.74 127.16,111 128.23,111 C 130.02,111 135.00,116.80 134.97,118.85 C 134.93,121.56 131.18,131.96 128.92,135.61 C 125.08,141.84 119.03,143.15 111.15,139.48 C 105.56,136.88 100,136.20 100,138.11 C 100,138.75 100.89,138.99 102.10,138.68 C 104.20,138.13 113,141.72 113,143.13 C 113,143.53 112.08,144.15 110.97,144.50 C 108.52,145.28 105.57,149.50 106.47,150.95 C 107.49,152.61 108.81,152.17 109.52,149.92 C 110.20,147.77 117.59,144 121.11,144 C 122.73,144 122.89,144.32 122.03,145.93 C 120.76,148.31 122.12,152.39 124.69,153.88 C 127.74,155.66 128.22,155.12 126.15,152.21 z M 69.58,139.47 C 68.71,136.02 70.51,133.10 74.54,131.41 C 81.72,128.41 93,130.62 93,135.02 C 93,136.11 93.45,137 94,137 C 95.74,137 95.08,133.37 92.81,130.49 L 90.63,127.71 L 93.56,125.33 C 95.17,124.02 97.04,122.51 97.70,121.97 C 98.37,121.43 99.31,121 99.80,121 C 100.29,121 101.45,120.15 102.38,119.12 C 103.98,117.35 103.96,117.22 101.98,116.70 C 100.57,116.33 98.84,117.07 96.69,118.95 C 89.38,125.33 85.97,127 80.19,127 C 75.07,127 73.99,126.54 65.84,121 C 60.98,117.7 56.62,115 56.13,115 C 55.64,115 54.68,115.67 54,116.5 C 52.94,117.76 53.14,118 55.25,118 C 56.76,118 59.46,119.57 62.12,122 L 66.49,126 L 62.82,126 C 58.90,126 53,129.95 53,132.58 C 53,134.62 54.17,134.30 56.76,131.57 C 58.40,129.84 60.35,129.09 63.86,128.84 C 72.10,128.25 74.58,129.58 69.11,131.65 C 66.60,132.59 66.28,133.16 66.61,136.01 C 66.96,139.00 68.52,142 69.73,142 C 69.99,142 69.93,140.86 69.58,139.47 z M 122.14,137.59 C 125.26,136.91 128.22,132.35 130.47,124.77 C 131.92,119.88 131.91,119.36 130.26,117.18 C 129.29,115.90 125.71,113.73 122.30,112.37 L 116.10,109.89 L 112.05,112.58 C 109.82,114.05 108,115.80 108,116.46 C 108,117.12 105.56,119.34 102.58,121.39 C 96.23,125.76 95.50,127.14 97.47,130.94 C 98.77,133.47 99.44,133.76 103.74,133.69 C 107.23,133.64 109.75,134.33 112.92,136.22 C 115.32,137.65 117.78,138.67 118.39,138.49 C 119.00,138.31 120.69,137.90 122.14,137.59 z M 192,114.16 C 192,113.05 188.93,109.94 184.25,106.32 C 176.67,100.46 158.29,87.27 152.66,83.66 C 149.88,81.87 147,82.00 147,83.90 C 147,84.92 162.77,97.71 172.41,104.5 C 175.53,106.7 180.36,110.18 183.14,112.25 C 188.69,116.36 192,117.08 192,114.16 z M 108.46,109.50 C 107.53,108.95 104.85,107.25 102.49,105.72 C 99.61,103.86 96.52,102.82 93.09,102.58 C 87.15,102.15 85.70,103.47 89.10,106.17 C 92.47,108.85 101.02,113 103.18,113 C 104.18,113 105,113.52 105,114.17 C 105,114.82 106.16,114.25 107.57,112.92 C 109.90,110.73 109.99,110.40 108.46,109.50 z M 198.54,108.92 C 198.91,108.33 198.17,106.75 196.91,105.41 C 194.73,103.09 182.85,95.52 175.44,91.74 C 173.54,90.77 172,89.53 172,88.99 C 172,88.44 171.41,88 170.69,88 C 169.97,88 166.53,85.98 163.04,83.53 C 157.40,79.56 154.31,78.57 155.19,81.02 C 155.36,81.48 160,84.88 165.5,88.57 C 171,92.25 176.85,96.37 178.5,97.71 C 191.91,108.59 196.99,111.43
198.54,108.92 z M 125.99,106 C 126.46,106 125.29,103.02 123.40,99.38 C 120.72,94.23 120.20,92.45 121.09,91.38 C 122.90,89.20 124.46,89.75 125.69,93 C 127.01,96.48 127.43,96.53 139,94.5 C 143.67,93.67 147.61,93.00 147.75,93.00 C 147.88,93.00 148,92.35 148,91.56 C 148,90.77 147.15,89.86 146.13,89.54 C 145.10,89.21 143.45,88.06 142.47,86.97 C 140.29,84.56 136.55,84.46 125,86.5 C 107.92,89.50 86.81,88.05 76.68,83.16 C 69.06,79.48 65.36,75.96 63.86,70.92 C 62.85,67.58 63.00,66.57
65.11,62.41 C 67.46,57.76 73.78,53 77.60,53 C 79.97,53 78.82,56.33 76.23,56.95 C 72.37,57.88 67,62.85 67,65.49 C 67,68.78 69.03,73 70.62,73 C 71.34,73 72.36,73.81 72.89,74.80 C 74.48,77.78 82.99,81.70 91.64,83.44 C 99.59,85.04 124.98,85.37
124.99,83.87 C 124.99,83.53 126.42,82.96 128.15,82.61 C 133.44,81.56 130.97,81.10 118.96,80.92 C 105.33,80.72 92.21,78.81 86,76.11 C 83.52,75.03 80.71,73.91 79.75,73.60 C 76.94,72.73 77.66,70.70 80.57,71.25 C 82.21,71.57 83.35,71.25 83.68,70.37 C 84.53,68.15 86.73,68.79 87.39,71.45 C 88.16,74.50 91.70,75.62 106,77.31 C 123.17,79.34 146.79,78.50 155.5,75.54 C 157.7,74.80 160.76,73.90 162.32,73.55 C 166.53,72.61 165.04,70.44 160.39,70.76 L 156.5,71.02 L 158.75,69.10 C 160.12,67.92 160.76,66.55 160.39,65.58 C 159.56,63.41 157.72,63.56 158.41,65.75 C 158.89,67.25 158.31,67.48 154.23,67.38 C 141.38,67.06 140.49,66.97 141.96,66.04 C 143.14,65.29 142.89,64.91 140.71,64.08 C 139.05,63.44 138,62.29 138,61.11 C 138,57.50 113.48,47.31 95.5,43.44 C 91.1,42.49 86.20,41.43 84.62,41.07 C 82.08,40.51 81.13,39.07 76.62,29.04 C 73.19,21.42 70.00,16.02 66.98,12.72 C 62.51,7.81 62.42,7.78 55.98,7.64 C 50.77,7.53 48.76,7.96 45.73,9.84 C 40.92,12.83 35.31,20.71 36.89,22.29 C 37.50,22.90 38,25.32 38,27.67 C 38,31.61 38.30,32.11 41.75,33.88 C 48.48,37.35 54.63,45.40 53.44,49.20 C 53.05,50.46 52.45,51.72 52.11,52 C 51.77,52.27 50.21,54.38 48.65,56.68 C 46.64,59.65 45.67,62.54 45.29,66.68 C 44.52,75.15 46.91,78.58 61.83,90.42 C 63.17,91.48 64.99,92.41 65.88,92.47 C 66.77,92.54 68.80,93.46 70.39,94.51 C 74.46,97.19 92,98.08 92,95.61 C 92,94.72 92.38,94 92.86,94 C 93.76,94 101.11,99.59 101.99,100.94 C 104.29,104.50 124.11,109.97 124.82,107.25 C 125.00,106.56 125.53,106 125.99,106 z M 104.60,71.40 C 93.94,69.70 92,69.15 92,67.85 C 92,67.17 93.09,66.96 94.85,67.32 C 96.42,67.63 98.21,67.38 98.83,66.76 C 99.66,65.93 100.48,66.13 102.00,67.50 C 104.33,69.61 118.65,71.01 139.5,71.16 C 148.19,71.22 150.67,71.49 148.5,72.14 C 144.20,73.41 113.95,72.90 104.60,71.40 z M 152.5,71 C 152.83,70.45 153.76,70 154.55,70 C 155.35,70 156,70.45 156,71 C 156,71.55 155.07,72 153.94,72 C 152.80,72 152.16,71.55 152.5,71 z M 116.54,66.06
C 115.41,64.25 117.76,64.13 129.06,65.42 L 140.5,66.73 L 128.80,66.86 C 122.37,66.94 116.85,66.58 116.54,66.06 z M 123,62.35 C 121.62,62.15 115.84,61.01 110.15,59.82 C 100.66,57.83 97.47,56.18 99.39,54.27 C 100.00,53.66 109.29,55.23 125.5,58.66 C 129.35,59.48 133.51,60.35 134.75,60.59 C 135.98,60.83 137,61.47 137,62.01 C 137,62.94 128.42,63.15 123,62.35 z M
50.95,23.44 C 49.87,22.14 50.00,21.55 51.71,19.84 C 54.09,17.45 58,18.09 58,20.86 C 58,24.67 53.37,26.36 50.95,23.44 z M 203.44,103.09 C 204.74,100.98 202.19,98.62 192.30,92.73 C 173.06,81.26 163.89,76.70 162.65,77.94 C 161.91,78.68 161.86,79.33 162.50,79.80 C 167.90,83.71 187.48,96.21 191,97.99 C 193.47,99.24 196.57,101.11 197.88,102.13 C 200.47,104.16 202.56,104.52 203.44,103.09 z M 165.25,58.01 C 168.41,56.82 171,55.43 171,54.92 C 171,54.41 170.88,53.98 170.75,53.97 C 170.61,53.96 162.73,53.68 153.25,53.34 C 140.75,52.91 136,53.05 136,53.87 C 136,54.49 136.33,55.03 136.75,55.08 C 137.16,55.13 140.17,55.37 143.44,55.61 C 150.40,56.12 151.54,56.74 147.15,57.61 C 143.98,58.25 143.35,58.99 144.75,60.44 C 146.07,61.81 159.30,60.24 165.25,58.01 z M 152,57 C 150.83,56.24 151.12,56.02 153.30,56.01 C 154.93,56.00 155.85,56.42 155.5,57 C 154.73,58.24 153.92,58.24 152,57 z M 23.07,32.12 C 25.03,31.50 28.07,31 29.82,31 C 32.86,31 33,30.82 33,27 C 33,24.8
32.55,23 32.01,23 C 29.32,23 20.72,27.12 17.16,30.10 C 13.13,33.49 13.26,35.57 17.40,34.03 C 18.55,33.60 21.10,32.74 23.07,32.12 z" />
<path fill="#FFFF00" style="fill-opacity:1" d="M 50.95,23.44 C 49.87,22.14 50.00,21.55 51.71,19.84 C 54.09,17.45 58,18.09 58,20.86 C 58,24.67 53.37,26.36 50.95,23.44 z" /> ',
'features' => array (

  'legged' => array ( 'proper' => '#FF0506',
  'body' => '<path d="M 124.69,153.88 C 122.12,152.39 120.76,148.31
122.03,145.93 C 122.89,144.32 122.73,144 121.11,144 C 117.59,144 110.20,147.77 109.52,149.92 C 108.81,152.17 107.49,152.61 106.47,150.95 C 105.57,149.50 108.52,145.28 110.97,144.50 C 112.08,144.15 113,143.53 113,143.13 C 113,141.72 104.20,138.13 102.10,138.68 C 100.89,138.99 100,138.75 100,138.11 C 100,136.20 105.56,136.88 111.15,139.48 C 119.03,143.15 125.08,141.84 128.92,135.61 C 131.18,131.96 134.93,121.56 134.97,118.85 C 135.00,116.80 130.02,111 128.23,111 C 127.16,111 127.15,110.74 128.21,109.61 C 129.30,108.43 129.87,108.48 132,109.91 C 133.37,110.83 135.73,112.12 137.25,112.77 C 140.39,114.12 140.61,115.13 138.48,118.38 C 136.87,120.84 134,130.83 134,133.98 C 134,136.48 135.73,137.46 137.51,135.99 C 138.49,135.17 139.79,135.10 141.71,135.74 L 144.5,136.67 L 141,137.74 C 139.07,138.33 136.24,139.09 134.71,139.43 C 131.80,140.08 127.09,144.08 125.24,147.46 C 124.40,149.01 124.60,150.03 126.15,152.21 C 128.22,155.12 127.74,155.66 124.69,153.88 z M 68.11,140.64 C 67.50,139.89 66.82,137.81 66.61,136.01 C 66.28,133.16 66.60,132.59 69.11,131.65 C 74.58,129.58 72.10,128.25 63.86,128.84 C 60.35,129.09 58.40,129.84 56.76,131.57 C 54.17,134.30 53,134.62 53,132.58 C 53,129.95 58.90,126
62.82,126 L 66.49,126 L 62.12,122 C 59.46,119.57 56.76,118 55.25,118 C 53.14,118 52.94,117.76 54,116.5 C 54.68,115.67 55.64,115 56.13,115 C 56.62,115 60.98,117.7 65.84,121 C 73.99,126.54 75.07,127 80.19,127 C 85.97,127 89.38,125.33 96.69,118.95 C 98.84,117.07 100.57,116.33 101.98,116.70 C 103.96,117.22 103.98,117.35 102.38,119.12 C 101.45,120.15 100.29,121 99.80,121 C 99.31,121 98.37,121.43 97.70,121.97 C 97.04,122.51 95.17,124.02 93.56,125.33 L 90.63,127.71 L 92.81,130.49 C
95.08,133.37 95.74,137 94,137 C 93.45,137 93,136.11 93,135.02 C 93,130.62 81.72,128.41 74.54,131.41 C 70.51,133.10 68.71,136.02 69.58,139.47 C 70.28,142.29 69.80,142.67 68.11,140.64 z" /> ' ),
  'beaked' => array ( 'proper' => '#FF0506',
  'body' => '<path d="M 14.23,34.14 C 11.75,32.61 27.09,23 32.01,23
C 32.55,23 33,24.8 33,27 C 33,30.82 32.86,31 29.82,31 C 26.92,31 22.95,31.96 17.40,34.03 C 16.25,34.46 14.82,34.51 14.23,34.14 z"/> ' ),
)),
'dove' => array ( 'width' => 272, 'height' => 275, 'proper' => '#faebd7', 'body' =>
  '<path style="stroke:#000000;stroke-width:6;stroke-miterlimit:4;" d="M 80,8.6 C 61,23 51,20 76,74 c 16,36 -31,56 -16,96 8,30 40,50 60,50 30,0 160,20 150,-30 C 250,170 220,180 240,160 190,160 140,120 130,98 150,14 98,-1 80,8.6 z"/>
   <path style="fill:#000000;stroke:#000000;stroke-width:6;stroke-miterlimit:4;" d="m 90,31 a 7.3,6.2 0 1 1 -14,0 7.3,6.2 0 1 1 14,0 z"/>
   <path style="fill:#000000;stroke:#000000;stroke-width:6;stroke-miterlimit:4;" d="m 110,220 c 10,40 -11,50 -28,50 14,10 38,0 38,0 0,0 -10,0 0,-20 10,-20 10,-20 10,-30 0,0 -10,0 -20,0 z m 40,-10 c 0,10 0,20 0,30 0,20 -10,20 -20,30 0,0 30,0 40,0 -10,-10 -30,-10 -20,-10 0,0 20,-30 30,-40 10,0 -30,-10 -30,-10 z M 64,23 15,39 67,58 64,23 z"/>
   <path style="fill:none;stroke:#000000;stroke-width:6;stroke-miterlimit:4;" d="m 200,190 c 40,20 70,10 70,10 M 110,140 c -12,30 20,60 130,20"/>' ),
'martlett' => array ( 'width' => 500, 'height' => 350, 'body' =>
   '<g stroke="#000000" stroke-width="4">
   <path d="M 75,1.5 C 45,6 35,6.1 41,52 c 11,4 31,16 29,98 50,60 110,30 110,40 20,30 0,50 -30,80 30,-20 40,-20 40,-20 20,20 30,30 60,30 -20,-20 -60,-50 -10,-80 80,50 40,10 190,150 C 410,250 360,240 320,200 420,230 420,240 490,220 400,190 350,190 320,160 380,140 390,140 390,140 330,140 260,130 220,100 200,89 160,65 140,55 82,-10 74,0.76 75,1.5 z" />
   <path d="m 78,30 a 9.1,8.7 0 1 1 -18,0 9.1,8.7 0 1 1 18,0 z" />
   <path d="M 40,20 C 34,22 1.5,35 1.5,35 L 39,51" />
   <path d="m 130,70 c -20,14 -40,80 40,90 120,0 160,0 160,-10" />
   <path d="m 120,190 c -10,30 -45,40 -54,50 -9,0 54,10 64,-10 10,20 20,30 20,30 0,-30 -10,-70 0,-70" />
   </g>',
   ),
  );
  $type = $node->get_attribute('subtype');
  if ( isset($charge_data[$type]) ) {
      return $charge_data[$type];
  } else {
    my_trigger_error ( "No bird $type", E_USER_WARNING, __FILE__, __LINE__ );
    return null;
  }
}

?>