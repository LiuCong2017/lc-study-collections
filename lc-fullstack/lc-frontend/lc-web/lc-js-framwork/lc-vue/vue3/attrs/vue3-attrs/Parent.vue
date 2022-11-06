<template>
  <child id="root" class="test" name="张三" @confirm="getData" />
</template>

<script lang="ts" setup>
const getData = () => {
  console.log('log')
}
</script>