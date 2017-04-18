import sbtcrossproject.{crossProject, CrossType}

// scalacOptions += "-language:implicitConversions"

// scalacOptions += "-deprecation"

// scalacOptions += "-Yinline-warnings"

// unmanagedJars in Compile <<= baseDirectory map { base => (base ** "*.jar").classpath }

// // there is a bug in SBT that does not allow compiler plugins to have dependencies
// addCommandAlias("embedAll", ";project dblab-components ;embed ; project dblab-experimentation; embed; project root; clean")

enablePlugins(ScalaNativePlugin)

val scala_version = "2.11.8"

val sharedSettings = Seq(scalaVersion := scala_version)

// lazy val dblab_components = 
//     crossProject(JVMPlatform, NativePlatform)
//     .crossType(CrossType.Pure)
//     .settings(sharedSettings)
//     .nativeSettings(resolvers += Resolver.sonatypeRepo("snapshots"))

lazy val dblab_components = Project(id = "dblab-components",        base = file("components"))
  .settings(sharedSettings)