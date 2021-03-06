/*Guilherme do Carmo Novaes NoUSP:5916400 */
/*EP4*/

#include<stdio.h>
#include<stdlib.h>
#define mag1 7 // limite inferior
#define mag2 8 // limite superior

int main(){
 float lng=0, lat=0, mag=0, ano, mes, dia, prof;


printf("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
printf("<kml xmlns=\"http://earth.google.com/kml/2.2\">\n");
printf("<Document>\n");
printf("	<name>Mag%d_%d.kmz</name>\n",mag1,mag2);
printf("	<open>1</open>\n");
printf("	<Style id=\"khStyle538_copy5\">\n");
printf("		<IconStyle id=\"khIconStyle542_copy5\">\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/placemark_circle.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy29\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_star_copy3\">\n");
printf("		<IconStyle>\n");
printf("			<color>ffad7373</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/star.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy41\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_shaded_dot_copy11\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff00aaff</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy35\">\n");
printf("			<color>00000000</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_star_copy2\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_star_copy1</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_star_copy1</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sh_donut\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f00ff</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/donut.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy22\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_polygon_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f55aa</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/polygon.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy30\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"khStyle538_copy6\">\n");
printf("		<IconStyle id=\"khIconStyle542_copy6\">\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/pal3/icon63.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy44\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_shaded_dot_copy3\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff15ddd6</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy34\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_donut_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f00ff</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/donut.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy28\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_star_copy2\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff005500</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/star.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy27\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_star_copy1\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff005500</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/star.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy12\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_star_copy1\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_star_copy1</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_star_copy1</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<StyleMap id=\"msn_donut_copy0\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_donut</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_donut</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sh_triangle_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7faaaa</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/triangle.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy31\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_triangle\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_triangle</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_triangle</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<StyleMap id=\"msn_shaded_dot_copy2\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_shaded_dot_copy10</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_shaded_dot_copy1</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sn_star_copy3\">\n");
printf("		<IconStyle>\n");
printf("			<color>ffad7373</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/star.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy39\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_triangle\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7faaaa</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/triangle.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy26\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_polygon\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_polygon</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_polygon</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sn_shaded_dot_copy10\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff00aaff</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy13\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_donut\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_donut</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_donut</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<StyleMap id=\"msn_square\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_square</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_square</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<StyleMap id=\"msn_shaded_dot_copy3\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_shaded_dot</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_shaded_dot</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sh_shaded_dot_copy2\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff00aaff</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy19\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_star_copy1\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff005500</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/star.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy11\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_donut_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f00ff</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/donut.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy38\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_square_copy0\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_square</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_square</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sh_shaded_dot_copy1\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff00aaff</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy14\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_star_copy2\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff005500</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/star.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy33\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_shaded_dot_copy3\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff15ddd6</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy20\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_star_copy3\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_star</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_star</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sn_triangle\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7faaaa</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/triangle.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy25\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_shaded_dot_copy2\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff00aaff</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy32\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_square\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff0000aa</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/square.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy9\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_polygon\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f55aa</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/polygon.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy24\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_polygon\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f55aa</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/polygon.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy23\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_shaded_dot_copy11\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff00aaff</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/shaded_dot.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy36\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_square_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff0000aa</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/square.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy37\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_square_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff0000aa</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/square.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy43\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_polygon_copy0\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_polygon</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_polygon</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<Style id=\"sn_triangle_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7faaaa</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/triangle.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy42\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_donut\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f00ff</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/donut.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy21\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sn_polygon_copy0\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff7f55aa</color>\n");
printf("			<scale>1.2</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/polygon.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy40\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("		<ListStyle>\n");
printf("		</ListStyle>\n");
printf("	</Style>\n");
printf("	<Style id=\"sh_square\">\n");
printf("		<IconStyle>\n");
printf("			<color>ff0000aa</color>\n");
printf("			<scale>1.4</scale>\n");
printf("			<Icon>\n");
printf("				<href>http://maps.google.com/mapfiles/kml/shapes/square.png</href>\n");
printf("			</Icon>\n");
printf("		</IconStyle>\n");
printf("		<LabelStyle id=\"khLabelStyle544_copy10\">\n");
printf("			<color>ff00ff00</color>\n");
printf("		</LabelStyle>\n");
printf("	</Style>\n");
printf("	<StyleMap id=\"msn_shaded_dot_copy1\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_shaded_dot_copy10</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_shaded_dot_copy1</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");
printf("	<StyleMap id=\"msn_triangle_copy0\">\n");
printf("		<Pair>\n");
printf("			<key>normal</key>\n");
printf("			<styleUrl>#sn_triangle</styleUrl>\n");
printf("		</Pair>\n");
printf("		<Pair>\n");
printf("			<key>highlight</key>\n");
printf("			<styleUrl>#sh_triangle</styleUrl>\n");
printf("		</Pair>\n");
printf("	</StyleMap>\n");



 while(scanf("%f %f %f %f %f %f %f",&ano, &mes,&dia,&lat ,&lng,&prof ,&mag)==7){
 /*Imprime o arquivo o ponto se estiver dentro da condicao*/
 if(mag >= mag1 && mag < mag2 ){
  printf("<Placemark>\n");
  printf("<name> %1.1f </name>\n",prof);
  printf("<LookAt>\n");
  printf("</LookAt>\n");
  printf("<styleUrl>msn_donut_copy0</styleUrl>\n");
  printf("<Point>\n");
  printf("<coordinates>%f,%f,0</coordinates>\n",lng,lat);
  printf("</Point>\n");
  printf("</Placemark>\n");
  }
 }

 printf("</Document>\n");
 printf("</kml>");


 return 0;
}
