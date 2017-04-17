package ch.epfl.data.sc
package pardis
package language

abstract class Language(dependLangs: Language*) {
  val depends: List[Language] = dependLangs.toList
}
case object ScalaCoreLanguage extends Language()
case object CCoreLanguage extends Language(ScalaCoreLanguage)
