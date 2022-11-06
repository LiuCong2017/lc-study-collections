<template>
  <child closeable @close="onClose" />
</template>

<script lang="ts" setup>
const onClose = () => {
  console.log('close')
}
</script>