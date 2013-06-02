# La Pequeña Cerillera

*La Pequeña Cerillera* es un relato interactivo breve basado en el cuento clásico homónimo de Hans Christian Andersen. La principal diferencia entre el relato interactivo y el original, es que el lector deja de ser un receptor pasivo que se limita a leer una historia ideada por el autor. Aquí, el lector tiene que adoptar un papel mucho más activo y serán sus acciones (indicadas por medio de sencillos comandos de texto) las que harán avanzar la historia.

Aquellos usuarios que lean un relato de este tipo por primera vez probablemente deberían teclear `ayuda` como primera acción. Esto les ayudará a conocer las principales instrucciones reconocidas por la aplicación y aquellas necesarias para hacer avanzar la historia. Además, junto con la aplicación se adjunta el documento *"play-if-card_es.pdf"*, que incluye algunos otros comandos útiles que se pueden utilizar en el cuento.

Por último, en caso de sentir verdadera curiosidad, al final de este documento se incluye un listado completo de instrucciones reconocidas por el relato. La gran mayoría de ellas, sin embargo, aunque podrán ser interpretadas en realidad no servirán para nada importante.

-------


## Cómo leer el relato desde Internet

Si tienes conexión a Internet, puedes ejecutar la aplicación (sin contenidos multimedia) directamente desde tu navegador siguiendo [este enlace](http://iplayif.com/?story=https://github.com/jomali/Cerillera/raw/master/cerillera.z5).

-------


## Cómo leer el relato desde nuestro ordenador

Una de las partes más confusas (por desgracia) para el lector de relatos interactivos es la necesidad de programas intérpretes. Y es que no basta con tener el fichero de la historia que queramos experimentar (en nuestro caso: **"Cerillera.zblorb"**), sino también un programa capaz de ejecutar dicha historia en nuestro ordenador. El objetivo de esta distinción entre "objetos historia" y "programas intérprete" es facilitar la portabilidad entre diferentes modelos de computadora; la misma historia puede ser ejecutada tanto en un Mac, en un PC con sistemas operativos Windows o Linux, una PDA, un teléfono móvil..., contando simplemente con el intérprete adecuado. En el caso de que ejecutes la historia directamente desde Internet, no hay necesidad de que te preocupes de esto. Pero si no es así, antes deberás instalar antes un programa intérprete en tu ordenador y, una vez lo tengas, bastará con hacer doble clic en el fichero **"Cerillera.zblorb"** para iniciar el relato.

* **Intérpretes para PC/Windows:** Para PC/Windows, probablemente una de las mejores opciones es Gargoyle, un conjunto de intérpretes que ejecutan historias en la mayor parte de los formatos más usuales de relato interactivo. Además, su aspecto visual es uno de los más ciudados. Puedes descargarlo gratuítamente desde su página web: <http://ccxvii.net/gargoyle/>

* **Intérpretes para MAC/MACOS X:** Un muy buen programa para Mac es *Splatterlight*. El aspecto visual no está tan cuidado como el *Gargoyle* para PC, pero es un intérprete capaz de entender también la gran mayoría de formatos existentes. Descárgalo gratuítamente de su página web: <http://ccxvii.net/spatterlight/>. Otra opción también interesante es el intérprete *Zoom*, que logra un buen aspecto visual y una gran claridad de texto. Puedes descargarlo desde su página web: <http://www.logicalshift.demon.co.uk/mac/zoom.html>

* **Intérpretes para PC/Linux:** Posiblemente la mejor opción para Linux es nuevamente *Gargoyle*, ya comentado para PC/Windows. Enlace a la página web de Gargoyle: <http://ccxvii.net/gargoyle/> (se puede encontrar disponible también en los repositorios de alguna de las distribuciones más populares como Ubuntu).

* **Intérpretes para otros sistemas:** Para otros sistemas distintos (teléfonos móviles, PDAs,...), la mejor opción es consultar en cualquiera de los directorios de intérpretes del repositorio internacional de Ficción Interactiva, IF-Archive: <ftp://ftp.ifarchive.org/if-archive/>

-------


## Licencia y créditos

Este programa es software libre: usted puede redistribuirlo y/o modificarlo bajo los términos de la Licencia Pública General GNU publicada por la Fundación para el Software Libre, ya sea la versión 3 de la Licencia, o (a su elección) cualquier versión posterior.

Este programa se distribuye con la esperanza de que sea útil, pero SIN GARANTÍA ALGUNA; ni siquiera la garantía implícita MERCANTIL o de APTITUD PARA UN PROPÓSITO DETERMINADO. Consulte los detalles de la Licencia Pública General GNU para más información.

Debería haber recibido una copia de la Licencia Pública General GNU junto a este programa. En caso contrario, consulte <http://www.gnu.org/licenses/>.

Copyright (c) 2010-2013, J. Francisco Martín

Ilustración de cubierta por Anne Anderson. Basado en el relato original de Hans Christian Andersen.

-------


## Listado completo de acciones

GROUP 1 ACTIONS: Support 'meta' verbs.

		CommandsOff		"recording" "grabacion"
		CommandsOn		"recording" "grabacion"
		CommandsRead	"replay"
		FullScore		"score" "puntos" "puntuacion"
		LMode1			"breve"
		LMode2			"verbose" "largo" "normal"
		LMode3			"superbreve" "corto"
		NotifyOff		"notify" "notificar" "notificacion"
		NotifyOn		"notify" "notificar" "notificacion"
		Pronouns		"pronombres" "p//"
		Quit			"q//" "quit" "terminar" "fin" "acabar" "abandonar"
		Restart			"reiniciar"
		Restore			"recuperar" "cargar" "load" "restaurar" "restore"
		Save			"save" "guardar" "salvar"
		Score			"score" "puntos" "puntuacion"
		ScriptOff		"script" "transcripcion"
		ScriptOn		"script" "transcripcion"
		Verify			"verificar"
		Version			"v//" "version"

GROUP 2 ACTIONS: Usually work, given the right circumstances.

		Close			"tapa" "cubre" "cierra"...
		Disrobe			"sacate" "quitate" "desvistete"...
		Drop			"deja" "suelta" "tira"...
		Eat				"come" "traga" "ingiere"...
		Empty			"vacia"...
		EmptyT			"vacia"...
		Enter			"entra" "cruza"...
		Examine			"examina" "x//" "describe" "inspecciona"...
		Exit			"sal" "fuera" "salte"...
		GetOff			"sal" "fuera" "salte" "baja"...
		Give			"da" "regala" "ofrece"...
		Go				"vete" "camina" "anda" "corre" "ir"...
		GoIn			"vete" "camina" "anda" "corre" "ir" "pasa" "sube"...
		Insert			"pon" "mete" "echa" "coloca" "deja" "suelta"...
		Inv				"inventario" "inv" "i//"
		InvTall			"inventario breve"...
		InvWide			"inventario largo"...
		Lock			"pon cerrojo" "echa cerrojo" "cierra con pestillo"...
		Look			"mira" "m//" "look" "l//"
		Open			"abre" "destapa" "descubre"...
		PutOn			"pon" "mete" "echa" "coloca" "deja" "suelta"...
		Remove			"coge" "toma" "saca"...
		Search			"busca" "mira en"...
		Show			"muestra" "enseña"...
		SwitchOff		"desconecta" "apaga"...
		SwitchOn		"conecta" "enciende"...
		Take			"coge" "toma" "recoge"...
		Transfer		"transfiere" "cambia" "mueve"...
		Unlock			"quita cerrojo" "abre con"...
		VagueGo			"vete" "ve" "camina" "anda" "corre" "ir"...
		Wear			"ponte" "viste"...

GROUP 3 ACTIONS: Output a message and stop at the "before" stage.

		Answer			"responde" "di" "grita" "dile"...
		Ask				"pregunta" "interroga" "consulta"...
		AskFor			"pide" "pidele"...
		Attack			"ataca" "golpea" "lucha"...
		Blow			"sopla"...
		Burn			"quema" "enciende" "prende"...
		Buy				"compra" "adquiere"...
		Climb			"escala" "trepa"...
		Consult			"lee" "consulta"...
		Cut				"corta" "rasga"...
		Dig				"cava" "excava"...
		Drink			"bebe"...
		Fill			"llena" "rellena"...
		Jump			"salta" "brinca"...
		JumpOver		"salta" "brinca"...
		Kiss			"besa" "abraza"...
		Listen			"escucha" "oye"...
		LookUnder		"mira bajo" "m// debajo de"...
		Mild			"tonto" "bobo" "idiota"...
		No				"nx"...
		Pray			"reza" "ora"...
		Pull			"tira"...
		Push			"empuja" "desplaza"...
		PushDir			"empuja hacia" "desplaza a"...
		Rub				"lava" "limpia" "pule" "abrillanta" "frega" "frota"...
		Set				"ajusta" "fija" "set"
		SetTo			"ajusta a" "fija a" "set a"
		Sing			"canta"...
		Sleep			"duerme" "ronca" "descansa"
		Smell			"huele" "olfatea"
		Sorry			"perdon" "lamento" "disculpa"...
		Squeeze			"retuerce" "estruja" "aprieta" "tuerce"...
		Strong			"mierda" "jode" "puta" "cono" "cabron"
		Swim			"nada"
		Swing			"balanceate" "columpiate" "meneate"...
		Taste			"saborea" "paladea" "prueba" "lame"...
		Tell			"cuenta" "nara" "explica" "habla"...
		Think			"piensa"...
		ThrowAt			"lanza" "arroja" "tira"...
		Tie				"ata" "enlaza" "conecta"...
		Touch			"toca" "palpa"
		Turn			"gira" "atornilla" "desatornilla"
		Wait			"espera" "z//"
		Wake			"espabilate" "despierta"...
		WakeOther		"espabila" "despuerta"...
		Wave			"ondea" "sacude" "agita"...
		WaveHands		"ondea la mano" "sacude las manos"...
		Yes				"si"

OTRAS ACCIONES

		Dance			"baila" "danza" "bailotea"
		GoDown			"desciende"
		GoUp			"asciende"
		KnockOn			"llama" "golpea"
		Masturbate		"masturbate"
		Sit				"sientate"
		SleepWith		"ten sexo con" "haz el amor con"
		StandUp			"levantate"
		Untie			"desata" "libera" "desune"...
		Use				"usa" "utiliza" "emplea"
		Write			"escribe"
		Xyzzy			"xyzzy" "plugh" "plover" "abracadabra"


