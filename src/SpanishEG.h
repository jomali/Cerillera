! Inform / INFSP 6


!!==============================================================================
!!
!!	GRAM�TICA ESPA�OLA EXTENDIDA
!!
!!==============================================================================
!!
!!	File:			SpanishEG.inf
!!	Author(s):		Emily Short (emshort@mindspring.com)
!!					J. Francisco Mart�n (jfm.lisaso@gmail.com)
!!					Mapache
!!	Language:		ES (Castellano)
!!	System:			Inform/INFSP 6
!!	Platform:		M�quina-Z / Glulx
!!	Version:		12.05 (2012/05/29)
!!
!!------------------------------------------------------------------------------
!!
!!	NOTES:
!!
!!	Based on "ExpertGrammar.h", by Emily Short (emshort@mindsping.com)
!!	and on its spanish translation "GramaticaExperta.h", by Mapache.
!!
!!
!!	RIGHTS:
!!
!!	This library file may be trated as public domain. It may be 
!!	included with or without credit to the original author. It may be 
!!	modified at the user's discretion. It may be freely distributed.
!!	Parts may be extracted.
!!
!!
!!	INSTALLATION:
!!
!!	Include "SpanishEG.h" after SpanishG in your gamefile.
!!
!!	Se puede definir una variable GRAMMATICAL_INFLECTION en el archivo de 
!!	juego que puede tomar los valores: 1 (PRESENTE 1� PERSONA), 2 (PRESENTE 2� 
!!	PERSONA), 3 (PRESENTE 3� PERSONA), 4 (PASADO 1� PERSONA), 5 (PASADO 2� 
!!	PERSONA) o 6 (PASADO 3� PERSONA) para modificar la conjugaci�n gramatical 
!!	de los mensajes de la librer�a. Si no se define esta variable, la librer�a 
!!	interpreta que se usa el valor 2 con lo que los mensajes se imprimen en 
!!	presente y segunda persona.
!!
!!
!!	NEW ACTIONS:
!!
!!	Dance
!!	GoDown
!!	GoUp
!!	KnockOn
!!	Masturbate
!!	Shout
!!	Sit
!!	SleepWith
!!	StandUp
!!	Untie
!!	Use
!!	Write
!!	Xyzzy
!!
!!------------------------------------------------------------------------------

Default	GRAMMATICAL_INFLECTION 2;

!!------------------------------------------------------------------------------

Verb	'machaca'						= 'ataca';
Verb	'silba' 'tararea' 'tatarea'		= 'canta';
Verb	'roba' 'agarra'					= 'coge';
Verb	'talla' 'esculpe'				= 'corta';
Verb	'emplaza' 'deposita' 'abandona'	= 'deja';
Verb	'berrea' 'aulla'				= 'grita';
Verb	'marcha'						= 'ir';
Verb	'incinera' 'tuesta'				= 'quema';
VerboIrregular "tostar" with imperativo 'tuesta';
Verb	'acaricia'						= 'toca';

!!------------------------------------------------------------------------------

Extend	'sopla'
	* 'sobre' / 'dentro' / 'a' noun	-> Blow
	* 'a' 'traves' 'de' noun		-> Blow
;

Extend	'prende' last
	* 'fuego' noun					-> Burn
	* noun 'fuego'					-> Burn
	* 'fuego' 'a//' noun			-> Burn
	* 'a//' noun 'fuego'			-> Burn
	* 'fuego' noun 'con' held		-> Burn
	* noun 'fuego' 'con' held		-> Burn
	* 'fuego' 'a//' noun 'con' held	-> Burn
	* 'a//' noun 'fuego' 'con' held	-> Burn
;

Verb	'baila'
	*								-> Dance
;

Verb	'muerde'
	* noun							-> Eat
	* edible						-> Eat
!	* animate						-> Attack
!	* 'a' animate					-> Attack
; VerboIrregular "morder" with imperativo 'muerde';


Verb	'desciende'
	*								-> GoDown
	* noun							-> Enter
	* 'por' noun					-> Enter
; VerboIrregular "descender" with imperativo 'desciende';


Verb	'asciende'
	*								-> GoUp
	* noun							-> Enter
	* 'por' noun					-> Enter
; VerboIrregular "ascender" with imperativo 'asciende';

Extend	'salta'
	* 'en' noun						-> JumpOver
;

Verb	'llama'
	* door							-> KnockOn
	* 'a' door						-> KnockOn
	* animate						-> Tell
	* 'a' animate					-> Tell
;

Extend only 'golpea' first
	* door							-> KnockOn
	* 'a' door						-> KnockOn
;

Extend	'mira'
	* 'alrededor'					-> Look
	* 'a' 'tu' 'alrededor'			-> Look
;

Verb	'masturba'
	* '-me'/'-te'					-> Masturbate
;

Verb	'capullo' 'capulla'
	*								-> Mild
	* topic							-> Mild
;

Extend	'lee' first
	* noun							-> Read
;

Extend	'busca'
	* 'bajo' noun					-> LookUnder
	* 'debajo' 'de' noun			-> LookUnder
	* 'entre' noun					-> Search
;

Extend	'mira'
	* 'entre' noun					-> Search
;

Extend	'grita' last
	*								-> Shout
;

Extend    'sienta' replace
    * 								-> Sit
	* '-te' / '-me'					-> Sit
	* noun							-> Sit
	* '-te' / '-me' noun			-> Sit
	* 'en' noun						-> Sit
	* '-te' / '-me'	'en' noun		-> Sit
; VerboIrregular "sentar" with imperativo 'sientate';


Verb	'folla' 'copula'
	* animate						-> SleepWith
	* '-te' / '-me' animate			-> SleepWith
	* 'a//' / 'con' animate			-> SleepWith
	* '-te' / '-me' 'a' animate		-> SleepWith
;


Extend	only 'jode' first
	* animate						-> SleepWith
	* 'a//' / 'con' animate			-> SleepWith
;


Verb	'ten'
	* 'sexo' 'con' animate			-> SleepWith
	* 'coito' 'con' animate			-> SleepWith
;


Verb	'haz'
	* 'el' 'amor' 'con' animate		-> SleepWith
;


Extend	only 'levantate' 'levantarse' 'levantarte' first
	*								-> StandUp
	* 'de' noun						-> StandUp;
Verb    'levanta' 'incorpora'
    * 								-> StandUp
	* '-te' / '-me'					-> StandUp
    * 'de' noun 					-> StandUp
	* '-te' / '-me' 'de//' noun		-> StandUp
;


Verb	'desata' 'libera' 'desune' 'desenchufa'
	* noun							-> Untie
	* 'a//' creature				-> Untie
	* 'a//' creature 'de' noun		-> Untie
	* noun 'de' noun				-> Untie
;

Extend	only 'desconecta' last
	* noun 'de' noun				-> Untie
;

Verb	'usa' 'utiliza' 'emplea'
	* noun							-> Use
	* noun 'con' / 'en' noun		-> Use
;

Verb	meta 'creditos' 'credits' 'autor' 'author' 'informacion' 'info'
	*								-> Version
;

Verb	'escribe'
	* noun							-> Write
	* 'en'/'el' noun				-> Write
	* noun 'con' noun				-> Write
	* 'en'/'el' noun 'con' noun		-> Write
; VerboIrregular "escribir" with imperativo 'escribe';

Verb	'xyzzy' 'plugh' 'plover' 'abracadabra'
	*								-> Xyzzy
;

!!------------------------------------------------------------------------------

[ DanceSub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"Nunca he sido un gran bailar�n.";
	2:	"Nunca has sido un gran bailar�n.";
	3:	"Nunca ha sido un gran bailar�n.";
	4:	"Nunca fui un gran bailar�n.";
	5:	"Nunca fuiste un gran bailar�n.";
	6:	"Nunca fue un gran bailar�n.";
	}
];

[ GoDownSub;
	<<Go d_obj>>;
];

[ GoUpSub;
	<<Go u_obj>>;
];

[ KnockOnSub;
	switch (GRAMMATICAL_INFLECTION) {
	1,2,3:
		if ( noun has door) "Nadie contesta.";
		"No ocurre nada.";
	4,5,6:
		if ( noun has door) "Nadie contest�.";
		"No ocurri� nada.";
	}
];

[ MasturbateSub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"Ahora no tengo ganas.";
	2:	"Ahora no tienes ganas.";
	3:	"Ahora no tiene ganas.";
	4:	"No ten�a ganas.";
	5:	"No ten�as ganas.";
	6:	"No ten�a ganas.";
	}
];

[ ReadSub;
	switch (GRAMMATICAL_INFLECTION) {
		1,2,3:	"No hay nada que leer en ", (the) noun, ".";
		4,5,6:	"No hab�a nada que leer en ", (the) noun, ".";
	}
];

[ ShoutSub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"Grito con fuerza.";
	2:	"Gritas con fuerza.";
	3:	"Grita con fuerza.";
	4:	"Grit� con fuerza.";
	5:	"Gritaste con fuerza.";
	6:	"Grit� con fuerza.";
	}
!	"---�AARRGHH!";
];

[ SitSub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"Ya estoy bastante c�modo de pie.";
	2:	"Ya est�s bastante c�modo de pie.";
	3:	"Ya est� bastante c�modo de pie.";
	4:	"Ya estaba bastante c�modo de pie.";
	5:	"Ya estabas bastante c�modo de pie.";
	6:	"Ya estaba bastante c�modo de pie.";
	}
];

[ SleepWithSub;
	if ( noun == player ) <<Masturbate>>;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"No creo que deba.";
	2:	"En realidad no crees que debas.";
	3:	"No cree que deba.";
	4:	"No creo que algo as� se me pasase por la cabeza siquiera.";
	5:	"En realidad no crees que algo as� se te pasase por la cabeza siquiera.";
	6:	"No cree que algo as� se le pasase por la cabeza siquiera.";
	}
];

[ StandUpSub;
	switch (GRAMMATICAL_INFLECTION) {
		1:	"No estoy en ning�n sitio del que deba levantarme.";
		2:	"No est�s en ning�n sitio del que debas levantarte.";
		3:	"No est� en ning�n sitio del que deba levantarse.";
		4:	"No estaba en ning�n sitio del que debiese levantarme.";
		5:	"No estabas en ning�n sitio del que debieses levantarte.";
		6:	"No estaba en ning�n sitio del que debiese levantarse.";
	}
];

[ UntieSub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"No estoy seguro de c�mo hacerlo.";
	2:	"No est�s seguro de c�mo hacerlo.";
	3:	"No parece estar seguro de c�mo hacerlo.";
	4:	"No sab�a c�mo hacer eso.";
	5:	"No sab�as c�mo hacer eso.";
	6:	"No sab�a c�mo hacer eso.";
	}
];

[ UseSub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"Pienso en alg�n uso para ", (the) noun ,", pero no termino de 
		decidirme por una acci�n concreta.";
	2:	"Piensas en alg�n uso para ", (the) noun, ", pero no terminas de 
		decidirte por una acci�n concreta.";
	3:	"Piensa en alg�n uso para ", (the) noun, ", pero no termina de 
		decidirse por una acci�n concreta.";
	4:	"Pens� en alg�n uso para ", (the) noun, ", pero no termin� de 
		decidirme por una acci�n concreta.";
	5:	"Pensaste en alg�n uso para ", (the) noun, ", pero no terminaste de 
		decidirte por una acci�n concreta.";
	6:	"Pens� en alg�n uso para ", (the) noun, ", pero no termin� de 
		decidirse por una acci�n concreta.";
	}
];

[ WriteSub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"Ahora no tengo nada que escribir.";
	2:	"Ahora no tienes nada que escribir.";
	3:	"Ahora no tiene nada que escribir.";
	4:	"No ten�a nada que escribir.";
	5:	"No ten�as nada que escribir.";
	6:	"No ten�a nada que escribir.";
	}
];

[ XyzzySub;
	switch (GRAMMATICAL_INFLECTION) {
	1:	"Un rumor silencioso responde a mis palabras.";
	2:	"Un rumor silencioso responde a tus palabras.";
	3:	"Un rumor silencioso responde a sus palabras.";
	4:	"Un rumor silencioso respondi� a mis palabras.";
	5:	"Un rumor silencioso respondi� a tus palabras.";
	6:	"Un rumor silencioso respondi� a sus palabras.";
	}
];


