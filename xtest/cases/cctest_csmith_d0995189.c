// SPDX-License-Identifier: MIT
// cctest_csmith_d0995189.c --- cctest case csmith_d0995189 (csmith seed 3499708809)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf40c724d */
/* @exp_ticks 0x83da */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3499708809 -o /tmp/csmith_gen__ghxl6mj/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint8_t  f0;
   const uint16_t  f1;
};

union U1 {
   const uint64_t  f0;
};


static uint8_t g_2 = 0x5CL;
static int64_t g_22 = 0x393E75CB5542AFA0LL;
static int64_t g_24 = 0x7B445ACEE61780EELL;
static int32_t g_38 = 0L;
static int32_t g_40 = 0x0887C5C6L;
static uint32_t g_47 = 0x93CC9D6CL;
static int64_t g_57 = 2L;
static int64_t *g_60 = (void*)0;
static int64_t *g_66 = &g_57;
static int64_t ** const g_65 = &g_66;
static uint64_t g_84[2] = {0x7F729B20146E0633LL,0x7F729B20146E0633LL};
static struct S0 g_91 = {0x34L,0UL};
static struct S0 **g_102 = (void*)0;
static int16_t g_108 = 0x1534L;
static int32_t g_118 = 0x4CB4AB47L;
static int8_t g_121 = (-1L);
static union U1 g_131[5][1][5] = {{{{18446744073709551615UL},{9UL},{9UL},{18446744073709551615UL},{9UL}}},{{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551610UL},{18446744073709551615UL},{18446744073709551615UL}}},{{{9UL},{18446744073709551615UL},{9UL},{9UL},{18446744073709551615UL}}},{{{18446744073709551615UL},{9UL},{9UL},{18446744073709551615UL},{9UL}}},{{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551610UL},{18446744073709551615UL},{18446744073709551615UL}}}};
static uint8_t g_141 = 254UL;
static int16_t g_193[3] = {(-1L),(-1L),(-1L)};
static uint16_t g_194[2] = {0x6412L,0x6412L};
static uint32_t g_197 = 0x0F42965CL;
static int16_t g_201 = 9L;
static uint64_t g_202 = 18446744073709551615UL;
static uint64_t g_219 = 0x3EE7E03242B5ABC4LL;
static const uint32_t g_238 = 0x4EA3BCE0L;
static uint32_t g_239[5] = {0UL,0UL,0UL,0UL,0UL};
static int32_t *g_247[2] = {(void*)0,(void*)0};
static int8_t g_255 = 0xC0L;
static int16_t g_268 = 0x1C29L;
static int16_t g_269 = 0xEFD9L;
static int32_t g_270 = 0x58A53ACAL;
static int16_t g_271 = (-1L);
static uint32_t g_272 = 0UL;
static int8_t g_371[4][5] = {{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL},{7L,7L,7L,7L,7L},{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL},{7L,7L,7L,7L,7L}};
static uint64_t g_388[3][3] = {{0UL,0UL,0UL},{0x58D73FEE7B131902LL,0x58D73FEE7B131902LL,0x58D73FEE7B131902LL},{0UL,0UL,0UL}};
static int64_t g_409 = 0xA8330122C0E24AB9LL;
static uint8_t g_442 = 247UL;
static int32_t g_450 = 0xD9299A7FL;
static uint16_t **g_467 = (void*)0;
static int64_t **g_501 = &g_60;
static int64_t ***g_500 = &g_501;
static int16_t *g_521[2] = {&g_193[1],&g_193[1]};
static int16_t **g_520 = &g_521[1];
static int16_t *** const g_519 = &g_520;
static int16_t *** const *g_518 = &g_519;
static int16_t *** const **g_517 = &g_518;
static int64_t g_526 = (-1L);
static int8_t *g_528 = &g_371[1][0];
static int8_t **g_527 = &g_528;
static int32_t *g_541[6] = {&g_450,&g_450,&g_450,&g_450,&g_450,&g_450};
static int32_t **g_540[1][6] = {{(void*)0,(void*)0,&g_541[5],(void*)0,(void*)0,&g_541[5]}};
static const int16_t *g_561 = &g_193[2];
static const int16_t **g_560[1][5][5] = {{{&g_561,&g_561,&g_561,&g_561,&g_561},{&g_561,&g_561,&g_561,&g_561,&g_561},{&g_561,&g_561,&g_561,&g_561,&g_561},{&g_561,&g_561,&g_561,&g_561,&g_561},{&g_561,&g_561,&g_561,&g_561,&g_561}}};
static uint32_t ***g_695 = (void*)0;
static uint32_t *g_699[3][3] = {{(void*)0,&g_239[4],&g_239[4]},{(void*)0,&g_239[4],&g_239[4]},{(void*)0,&g_239[4],&g_239[4]}};
static uint32_t **g_698 = &g_699[0][2];
static uint32_t ***g_697[6][3][6] = {{{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698}},{{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698}},{{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698}},{{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698}},{{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698}},{{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698},{&g_698,&g_698,&g_698,&g_698,&g_698,&g_698}}};
static const uint32_t ****g_720 = (void*)0;
static const uint32_t ***** const g_719 = &g_720;
static uint16_t g_755 = 0xC277L;
static int16_t g_784 = 1L;
static uint16_t g_804 = 1UL;
static int64_t g_880 = 6L;
static int16_t **g_999 = &g_521[0];
static struct S0 *g_1017 = &g_91;
static struct S0 **g_1016 = &g_1017;
static uint8_t g_1152[2][5][6] = {{{0xBDL,0x6FL,0x6FL,0xBDL,1UL,0x23L},{8UL,2UL,255UL,0xBDL,0x23L,4UL},{0xBDL,1UL,255UL,255UL,1UL,0xE8L},{0x23L,0xE8L,255UL,4UL,255UL,0xE8L},{0x6CL,255UL,255UL,1UL,246UL,255UL}},{{0x6CL,255UL,246UL,4UL,0xEDL,1UL},{0x23L,255UL,255UL,255UL,246UL,246UL},{0x6FL,255UL,255UL,0x6FL,255UL,1UL},{4UL,0xE8L,246UL,0x6FL,1UL,255UL},{0x6FL,1UL,255UL,255UL,1UL,0xE8L}}};
static uint32_t g_1162[2] = {0x9BC09808L,0x9BC09808L};
static const int32_t g_1178 = 1L;
static int32_t *g_1441 = &g_40;
static int32_t g_1442 = 8L;
static union U1 *g_1505 = &g_131[3][0][2];
static union U1 **g_1504 = &g_1505;
static int64_t g_1522 = 0xCFCDE83A7647795CLL;
static int8_t *g_1646 = &g_371[3][3];
static int32_t g_1662[6] = {0xB5D803EDL,0xB5D803EDL,0xB5D803EDL,0xB5D803EDL,0xB5D803EDL,0xB5D803EDL};
static const uint32_t g_1681[2][2] = {{1UL,1UL},{1UL,1UL}};
static int16_t ***g_1751 = &g_999;
static int16_t ****g_1750 = &g_1751;
static int16_t *****g_1749 = &g_1750;
static const int16_t g_1788[1][1][2] = {{{0x58B4L,0x58B4L}}};
static uint64_t g_1810 = 0x406224927FEBAAE2LL;
static uint64_t g_1885 = 18446744073709551609UL;
static union U1 g_1923[1] = {{0xCC70462972AA88DFLL}};
static int8_t ***g_1941 = &g_527;
static int8_t ****g_1940 = &g_1941;
static int64_t g_1946 = (-7L);
static const int64_t * const g_1992 = &g_22;
static const int64_t * const *g_1991 = &g_1992;
static const int64_t g_1997[3] = {0x30BA6D5A8BF9D470LL,0x30BA6D5A8BF9D470LL,0x30BA6D5A8BF9D470LL};
static int32_t g_2060 = 0x88005387L;
static uint32_t ****g_2121 = &g_697[5][0][2];
static uint32_t *****g_2120 = &g_2121;
static uint8_t g_2171[7] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL};



static int8_t  func_1(void);
static uint16_t  func_5(const uint16_t  p_6, uint16_t  p_7);
static int32_t  func_8(int8_t  p_9, int32_t  p_10, int16_t  p_11, int32_t  p_12);
static int8_t  func_13(int32_t  p_14, int64_t  p_15, struct S0  p_16, int32_t  p_17);
static struct S0  func_25(uint32_t  p_26, int32_t  p_27, uint16_t  p_28);
static uint32_t  func_29(int64_t * p_30, int64_t * p_31, int64_t  p_32, uint16_t  p_33, int64_t * const  p_34);
static union U1  func_35(int8_t  p_36);
static union U1  func_43(struct S0  p_44);




static int8_t  func_1(void)
{ 
    const int64_t * const l_1883 = &g_1522;
    uint64_t *l_1884 = &g_1885;
    int64_t ***l_1890[6] = {(void*)0,&g_501,(void*)0,(void*)0,&g_501,(void*)0};
    int32_t l_1891[4][2][2] = {{{0x624B5E32L,1L},{4L,1L}},{{0x624B5E32L,1L},{4L,1L}},{{0x624B5E32L,1L},{4L,1L}},{{0x624B5E32L,1L},{4L,1L}}};
    uint16_t l_1905 = 0UL;
    union U1 *l_1922 = &g_1923[0];
    int32_t l_1945 = 1L;
    uint16_t l_1948 = 0UL;
    uint8_t l_1956 = 0x3FL;
    uint8_t l_1973 = 0xB4L;
    int32_t l_2001 = 0L;
    uint32_t l_2011[1][7] = {{0x2A934106L,0x2A934106L,0x44306543L,0x2A934106L,0x2A934106L,0x44306543L,0x2A934106L}};
    int8_t *l_2015 = &g_371[3][4];
    int16_t l_2028 = 0x752CL;
    uint32_t ****l_2038[3];
    uint32_t *****l_2037 = &l_2038[1];
    int64_t l_2058 = 0x8F2D11ACD8D744C3LL;
    int8_t l_2111[1];
    int8_t l_2147 = 0xC6L;
    uint32_t l_2156 = 0x95B3B795L;
    int64_t l_2193 = (-1L);
    int16_t *l_2203 = &g_201;
    uint8_t *l_2204[6][1] = {{&g_2171[3]},{&g_442},{&g_2171[3]},{&g_2171[3]},{&g_442},{&g_2171[3]}};
    int32_t l_2207 = 1L;
    int32_t *l_2208[2][2][4] = {{{&g_270,&g_270,&g_270,&g_270},{&g_270,&g_270,&g_270,&g_270}},{{&g_270,&g_270,&g_1442,&g_270},{&g_270,&g_270,&g_270,&g_270}}};
    uint16_t l_2209 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2038[i] = &g_697[1][2][5];
    for (i = 0; i < 1; i++)
        l_2111[i] = (-1L);
    if (((g_2 > (safe_mod_func_uint16_t_u_u(func_5(g_2, g_2), (~((l_1883 != l_1883) != (--(*l_1884))))))) >= (safe_add_func_int8_t_s_s(((l_1890[3] == &g_65) >= l_1891[2][1][1]), 0UL))))
    { 
        int32_t *l_1894 = (void*)0;
        int32_t *l_1895 = &g_1442;
        (*l_1895) |= (l_1891[2][1][1] || (safe_lshift_func_uint8_t_u_s(g_1662[3], 0)));
    }
    else
    { 
        uint16_t l_1902[5][4] = {{65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL}};
        int32_t *l_1911[2][7][4] = {{{&g_1442,&l_1891[2][1][1],&l_1891[2][1][1],&g_1442},{&g_118,&g_1442,&l_1891[2][1][1],&g_118},{&g_1442,&g_1442,&g_40,&g_1442},{&g_1442,&l_1891[2][1][1],&l_1891[2][1][1],&g_1442},{&g_118,&g_1442,&l_1891[2][1][1],&g_118},{&g_1442,&g_1442,&g_40,&g_1442},{&g_1442,&l_1891[2][1][1],&l_1891[2][1][1],&g_1442}},{{&g_118,&g_1442,&l_1891[2][1][1],&g_118},{&g_1442,&g_1442,&g_40,&g_1442},{&g_1442,&l_1891[2][1][1],&l_1891[2][1][1],&g_1442},{&g_118,&g_1442,&l_1891[2][1][1],&g_118},{&g_1442,&g_1442,&g_40,&g_118},{&g_118,&g_40,&g_40,&g_118},{&g_270,&l_1891[2][1][1],&g_40,&g_270}}};
        int32_t l_1917 = 0L;
        int64_t **l_1943 = &g_66;
        uint32_t l_1974 = 0xEA3F5CA5L;
        union U1 l_1977 = {0x86FC0231DA1351A6LL};
        int8_t ****l_1982 = &g_1941;
        const uint8_t l_2018[5] = {0xC8L,0xC8L,0xC8L,0xC8L,0xC8L};
        int32_t l_2019 = 0x97BEA8B1L;
        int16_t *****l_2075 = &g_1750;
        uint8_t *l_2076 = &g_442;
        uint16_t *l_2083 = (void*)0;
        int64_t l_2086 = (-1L);
        int32_t l_2087 = 0xF289110FL;
        int8_t *l_2088 = &g_255;
        struct S0 l_2108 = {0x86L,0xB7BFL};
        int32_t l_2162 = 0xC9988718L;
        const struct S0 *l_2187 = (void*)0;
        uint32_t l_2192 = 0x434C5A33L;
        int i, j, k;
        if ((safe_lshift_func_uint8_t_u_u(g_1885, (0x12507571L == ((safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((*g_66), ((((l_1902[3][3] > (safe_div_func_uint8_t_u_u(((((l_1905 == (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(l_1905, (**g_527))) > 0xC8L), 0UL))) > l_1902[3][0]) | 0x82F6C775L) != (*g_528)), 0x5BL))) & g_271) == 0x90D42027L) > l_1891[2][1][1]))), 7)) , 4294967286UL)))))
        { 
            int32_t **l_1910[2][5] = {{&g_247[1],(void*)0,&g_1441,(void*)0,&g_247[1]},{&g_247[1],(void*)0,&g_1441,(void*)0,&g_247[1]}};
            uint16_t l_1952 = 65526UL;
            const int64_t * const l_1996 = &g_1997[1];
            const int64_t * const *l_1995 = &l_1996;
            int64_t l_1998 = 0x89629E6993AA7613LL;
            int i, j;
lbl_1924:
            l_1911[0][6][1] = &l_1891[2][1][1];
            for (g_409 = (-10); (g_409 > (-22)); --g_409)
            { 
                uint8_t l_1914 = 0xF6L;
                int32_t l_1918 = 1L;
                union U1 *l_1919 = &g_131[0][0][2];
                union U1 **l_1920 = (void*)0;
                union U1 **l_1921[6][4] = {{&g_1505,&g_1505,&g_1505,&g_1505},{&g_1505,&g_1505,&g_1505,&g_1505},{&g_1505,&g_1505,&g_1505,&g_1505},{&g_1505,&g_1505,&g_1505,&g_1505},{&g_1505,&g_1505,&g_1505,&g_1505},{&g_1505,&g_1505,&g_1505,&g_1505}};
                int i, j;
                --l_1914;
                if (l_1917)
                    break;
                for (g_272 = 0; (g_272 <= 3); g_272 += 1)
                { 
                    int i, j;
                    l_1918 ^= g_371[g_272][(g_272 + 1)];
                    l_1918 ^= g_371[g_272][(g_272 + 1)];
                }
                l_1922 = l_1919;
                if (g_272)
                    goto lbl_1924;
            }
            for (g_442 = 0; (g_442 <= 1); g_442 += 1)
            { 
                int8_t l_1929[1][5][5];
                int16_t l_1937 = 0x31B6L;
                int32_t l_1942[7][5] = {{1L,1L,0L,1L,1L},{0xF6095536L,0L,0xF6095536L,0xF6095536L,0L},{1L,0x86A6B7C7L,0x86A6B7C7L,1L,0x86A6B7C7L},{0L,0L,0x530008C5L,0L,0L},{0x86A6B7C7L,1L,0x86A6B7C7L,0x86A6B7C7L,1L},{0L,0xF6095536L,0xF6095536L,0L,0xF6095536L},{1L,1L,0L,1L,1L}};
                int8_t l_1944 = 1L;
                int64_t l_1947 = 0xECBEF32DDB136D28LL;
                int32_t l_1951 = 1L;
                uint64_t *l_1953 = &g_84[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1929[i][j][k] = 0L;
                    }
                }
                for (g_271 = 0; (g_271 <= 5); g_271 += 1)
                { 
                    uint8_t *l_1932 = &g_1152[0][4][2];
                    union U1 *l_1938 = &g_131[4][0][1];
                    uint32_t *l_1939 = &g_197;
                    int i;
                    l_1891[2][1][0] = 0xE8EC414EL;
                    l_1942[6][1] ^= (safe_lshift_func_int16_t_s_s(((((l_1891[2][1][1] & (safe_lshift_func_uint16_t_u_s(l_1929[0][0][4], ((255UL > (l_1929[0][0][4] >= (safe_mod_func_uint8_t_u_u((++(*l_1932)), (safe_rshift_func_int16_t_s_s(((l_1937 , ((*l_1939) &= (l_1891[2][1][1] , ((l_1938 != &g_131[0][0][3]) > 0x1C2C4E5FA4DFD340LL)))) <= g_84[1]), l_1905)))))) ^ 0x636DL)))) > l_1929[0][4][4]) , (void*)0) == g_1940), 6));
                    if (l_1942[6][1])
                        break;
                    l_1891[2][1][1] = ((*g_500) == (l_1943 = (*g_500)));
                }
                ++l_1948;
                l_1951 ^= l_1944;
                g_1441 = g_541[(g_442 + 2)];
                if ((l_1942[6][1] &= (((((l_1952 = (g_22 || (*g_1441))) >= (g_219 = ((*l_1953) = ((*l_1884) = 1UL)))) , (**g_527)) > ((**g_65) & (safe_div_func_uint8_t_u_u((((g_1442 ^ g_131[0][0][2].f0) , l_1905) , 0x8AL), g_270)))) , (-4L))))
                { 
                    uint32_t l_1957 = 4294967295UL;
                    uint8_t *l_1958 = &g_1152[1][2][2];
                    int16_t *l_1961 = &g_108;
                    int32_t l_1962 = 0xFF561294L;
                    uint8_t *l_1965 = (void*)0;
                    uint8_t *l_1966 = (void*)0;
                    uint8_t *l_1967 = &g_141;
                    g_247[1] = &l_1917;
                    (*g_1441) = ((void*)0 != &g_540[0][4]);
                    (*g_1441) = ((l_1956 ^ (g_1522 <= (l_1962 = ((*l_1961) |= (((*l_1958) = l_1957) & (l_1891[2][1][1] = (safe_rshift_func_uint8_t_u_u(g_197, 5)))))))) , ((l_1956 , ((((*l_1967) = (++(*l_1958))) > ((((l_1962 = ((((safe_lshift_func_int16_t_s_u((!(**g_65)), 9)) , (((**g_65) = (safe_rshift_func_uint16_t_u_u(g_1662[1], l_1929[0][4][4]))) && 1L)) , l_1973) == 0L)) || l_1974) != g_239[1]) && l_1957)) ^ g_131[0][0][2].f0)) >= (*g_1441)));
                    if (l_1891[2][0][1])
                        continue;
                }
                else
                { 
                    int8_t *****l_1983 = &l_1982;
                    (*g_1441) &= (safe_lshift_func_uint8_t_u_s(((l_1977 , &g_541[0]) != (void*)0), ((((((safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s((-2L), ((*l_1884) ^= g_784))), 0xE8L)) , ((*l_1983) = l_1982)) != (void*)0) != g_1810) > 0xF7L) , (****g_1940))));
                }
                for (g_268 = 1; (g_268 <= 5); g_268 += 1)
                { 
                    return (***g_1941);
                }
            }
            for (g_1810 = 0; (g_1810 <= 60); g_1810 = safe_add_func_int8_t_s_s(g_1810, 5))
            { 
                int64_t l_1990 = 0x030059D3CCAE9793LL;
                int32_t l_2000 = 0x01F7E0B1L;
                for (g_22 = 2; (g_22 >= 0); g_22 -= 1)
                { 
                    const int64_t * const **l_1993 = (void*)0;
                    const int64_t * const **l_1994[7] = {&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991};
                    int32_t l_1999 = (-1L);
                    int i, j;
                    l_1999 |= (l_1998 &= ((g_371[g_22][g_22] | ((0x4C86E4D6084FAFAELL ^ (safe_lshift_func_uint16_t_u_s((((l_1995 = ((0UL == (safe_sub_func_int8_t_s_s((g_371[1][3] != ((g_269 , (void*)0) != (void*)0)), l_1990))) , g_1991)) == (*g_500)) < l_1990), 3))) , 0x33E27934F0F97983LL)) <= g_197));
                    l_2001 = (l_2000 = (l_1891[2][1][1] = (l_1999 = (-1L))));
                }
            }
        }
        else
        { 
            uint16_t l_2008 = 7UL;
            uint32_t l_2014 = 4294967295UL;
            int32_t l_2029 = 4L;
            const uint32_t l_2055 = 9UL;
            if (((g_1662[3] >= ((*g_500) != ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((0xFDFFL <= (g_194[1] = (g_91.f1 > ((l_2008 <= (4UL && (((safe_add_func_uint32_t_u_u(g_1788[0][0][0], g_47)) < l_1905) & 3L))) == 0xE98CL)))), 0x16L)), l_1891[2][1][1])) , (*g_500)))) , l_1891[2][1][1]))
            { 
                int32_t l_2020 = 0x35994008L;
                int16_t *l_2027 = &g_201;
                struct S0 *l_2036 = &g_91;
                uint64_t l_2054[4];
                int32_t l_2057 = (-9L);
                int32_t l_2059 = (-2L);
                int i;
                for (i = 0; i < 4; i++)
                    l_2054[i] = 0x81E44E2FC3B0855BLL;
                l_2011[0][0]--;
                l_2020 = (func_25(((((****g_1940) = (l_2014 , ((**g_1941) != l_2015))) < (g_201 && ((l_2014 > (safe_div_func_uint64_t_u_u((g_202 <= (l_2011[0][0] > l_2008)), g_1178))) == l_2018[2]))) & (**g_1991)), l_2019, l_2008) , l_2008);
                l_2028 |= (safe_rshift_func_uint16_t_u_s((l_2008 != (safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s((-9L), l_1891[2][0][0])) >= l_2014), l_2020))), ((*l_2027) = l_2008)));
                l_2029 |= l_2008;
                if ((((l_2020 <= ((((0x81958E3AL != (safe_rshift_func_uint8_t_u_u(g_255, (((g_271 , (*g_1505)) , l_2028) <= ((safe_add_func_int16_t_s_s((g_1681[1][1] <= 0xEEBB001073006523LL), 0x0D72L)) < g_1997[2]))))) , 6L) != l_2020) == 0x6E72BD0C2ED83181LL)) != (-2L)) , l_2001))
                { 
                    uint8_t *l_2039 = (void*)0;
                    uint8_t *l_2040 = (void*)0;
                    uint8_t *l_2041 = (void*)0;
                    uint8_t *l_2042 = &g_1152[0][0][1];
                    uint8_t *l_2047 = &g_2;
                    int32_t l_2056 = (-8L);
                    g_118 |= (safe_mul_func_uint16_t_u_u((func_25(((void*)0 == l_2036), (l_2057 = (((l_2037 == (((--(*l_2042)) ^ ((safe_rshift_func_uint16_t_u_s(((0xD036L > ((((*l_2047) = ((void*)0 != &g_1941)) >= ((safe_sub_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_2054[0], 14)), l_1945)) , (void*)0) == (**g_1940)) ^ 0x17BAL), l_2011[0][0])) , l_2055)) != l_2011[0][0])) ^ g_755), l_2055)) , l_2029)) , &g_720)) || (-1L)) != l_2056)), l_1891[2][1][1]) , 6UL), l_2001));
                    g_1441 = &g_118;
                    return (***g_1941);
                }
                else
                { 
                    uint8_t l_2061 = 0UL;
                    l_2061--;
                }
            }
            else
            { 
                return (****g_1940);
            }
            for (g_442 = 0; (g_442 < 22); g_442++)
            { 
                for (g_47 = (-10); (g_47 != 13); ++g_47)
                { 
                    return (****g_1940);
                }
            }
        }
        if ((safe_mul_func_int16_t_s_s((+(safe_div_func_int16_t_s_s(((((*l_2088) = (safe_mul_func_uint8_t_u_u(((*l_2076) = (l_2075 != &g_1750)), ((**g_527) = (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((0xC7L < ((safe_add_func_uint16_t_u_u((g_804 = l_2001), ((safe_div_func_uint16_t_u_u(((void*)0 == &g_541[0]), l_2058)) | l_2086))) , 0x46L)), l_2087)), g_1681[0][0])) ^ g_1442) , (****g_1940)))))) & g_121) >= l_2001), l_1948))), (-1L))))
        { 
            uint32_t l_2089 = 0xFEF410EEL;
            int32_t **l_2092 = &l_1911[0][6][1];
            uint32_t ***l_2099 = &g_698;
            uint32_t ***l_2100 = &g_698;
            int16_t *l_2101 = (void*)0;
            int16_t *l_2102 = &g_271;
            int8_t **l_2103 = &l_2088;
            int32_t l_2109[5][1][6] = {{{(-2L),8L,(-2L),8L,(-2L),8L}},{{(-3L),8L,(-3L),8L,(-3L),8L}},{{(-2L),8L,(-2L),8L,(-2L),8L}},{{(-3L),8L,(-3L),8L,(-3L),8L}},{{(-2L),8L,(-2L),8L,(-2L),8L}}};
            int i, j, k;
            ++l_2089;
            (*l_2092) = &l_1917;
            l_2109[0][0][4] &= ((-5L) || (l_1982 != (l_2108 , &g_1941)));
        }
        else
        { 
            int64_t l_2110 = 0xC7146B7DA7C26B59LL;
            int32_t *l_2113 = &g_1442;
            union U1 l_2115 = {18446744073709551615UL};
            const struct S0 l_2170 = {253UL,0xEF41L};
            g_247[1] = &g_40;
            for (g_202 = 0; (g_202 <= 1); g_202 += 1)
            { 
                int32_t l_2112 = 6L;
                int32_t l_2134 = 0xEB52A98AL;
                l_2111[0] &= (1L != l_2110);
                if (((l_2112 = 0x52FAE5B7L) ^ l_2110))
                { 
                    int32_t **l_2114[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2114[i] = (void*)0;
                    l_1911[0][6][1] = l_2113;
                    (*l_2113) = ((((*g_1505) , l_2115) , (!0x886CL)) > (safe_rshift_func_uint8_t_u_u(((void*)0 == (***l_1982)), 1)));
                }
                else
                { 
                    int16_t l_2119 = 0xEC6EL;
                    uint32_t *****l_2122 = &l_2038[1];
                    const uint32_t **l_2135 = (void*)0;
                    int32_t l_2136[6][6] = {{0x78BB92E5L,0x03599D29L,(-6L),0x03599D29L,0x78BB92E5L,0x03599D29L},{0xC4CB8894L,0L,0xC4CB8894L,0x03599D29L,0xC4CB8894L,0L},{0x78BB92E5L,0L,(-6L),0L,0x78BB92E5L,0L},{0xC4CB8894L,0x03599D29L,0xC4CB8894L,0L,0xC4CB8894L,0x03599D29L},{0x78BB92E5L,0x03599D29L,(-6L),0x03599D29L,0x78BB92E5L,0x03599D29L},{0xC4CB8894L,0L,0xC4CB8894L,0x03599D29L,0xC4CB8894L,0L}};
                    int16_t l_2137 = 0x2E22L;
                    int i, j;
                    l_2136[1][5] = (l_2119 < ((((***g_1941) , (((l_2112 , (l_2122 = g_2120)) != &g_720) <= (((~(safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((~0xFE4FC57DC62A8C9ALL), (((safe_unary_minus_func_uint8_t_u(((safe_div_func_uint16_t_u_u((0x9D4C1BA9B4688EA5LL >= g_526), l_2134)) , g_409))) , l_2135) != (void*)0))), 18446744073709551615UL)), l_2134))) <= g_784) > 253UL))) != g_238) | l_1973));
                    (*l_2113) ^= 0L;
                    (*g_1016) = (*g_1016);
                    return l_2137;
                }
                for (g_255 = 1; (g_255 >= 0); g_255 -= 1)
                { 
                    return (*l_2113);
                }
            }
            if (l_2111[0])
            { 
                uint32_t l_2148[6][1];
                uint32_t l_2158[4] = {0x4B8AB90BL,0x4B8AB90BL,0x4B8AB90BL,0x4B8AB90BL};
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2148[i][j] = 3UL;
                }
                for (l_2086 = 0; (l_2086 <= (-20)); l_2086--)
                { 
                    int16_t l_2140 = 1L;
                    uint16_t *l_2151 = &l_1902[3][3];
                    int32_t l_2157 = (-1L);
                    (*l_2113) = l_2140;
                    l_2158[1] = ((*l_2113) = ((safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(g_1885, (safe_lshift_func_int8_t_s_s(l_2147, 6)))) ^ ((*l_2113) , l_2148[1][0])), ((g_272 == (safe_lshift_func_int8_t_s_s((***g_1941), (l_2157 = ((++(*l_2151)) , (safe_mod_func_int64_t_s_s(((9L & l_2156) == g_1152[0][0][1]), 0x8BFF7363FEB88003LL))))))) >= 0x48AE5035L))) ^ l_2147));
                }
                return l_2158[3];
            }
            else
            { 
                int64_t ***l_2172 = &l_1943;
                int32_t l_2173[2];
                const struct S0 *l_2186 = &g_91;
                int i;
                for (i = 0; i < 2; i++)
                    l_2173[i] = 0x4B1FDD92L;
                for (l_2001 = (-25); (l_2001 == 15); l_2001++)
                { 
                    int32_t **l_2161 = &l_2113;
                    (*l_2161) = &l_1917;
                    (**l_2161) = (((**g_65) |= (((*g_1505) , (*g_561)) && l_2162)) && (+(((void*)0 == (**g_1941)) & (0UL || ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((l_2170 , 2UL), l_1891[2][1][1])) , (*g_1992)) , 0x70L), 0)), g_2171[3])) >= (*g_1992))))));
                }
                l_2173[1] = (l_2172 == (void*)0);
                for (g_141 = 24; (g_141 >= 45); g_141++)
                { 
                    int64_t l_2180 = 0x42E68157F630383ELL;
                    int16_t l_2183 = 0x5DABL;
                    (*l_2113) = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_2180, (safe_mod_func_uint64_t_u_u(l_2183, (**g_1991))))), 5));
                }
                for (l_1917 = 5; (l_1917 <= (-27)); l_1917--)
                { 
                    l_2187 = l_2186;
                    return (****g_1940);
                }
            }
        }
        l_2192 |= (safe_add_func_uint8_t_u_u(g_193[2], (safe_div_func_uint32_t_u_u(0x8E07919EL, l_1973))));
        l_2001 ^= (l_1891[1][1][1] = l_2193);
    }
    l_2209 |= (safe_mod_func_uint32_t_u_u(2UL, (safe_rshift_func_int8_t_s_s((g_2171[1] < (l_2207 = (l_1891[2][1][1] = ((safe_mul_func_uint8_t_u_u((~(((l_2001 = (safe_rshift_func_uint16_t_u_s(0xD9BEL, ((*l_2203) |= ((***g_1749) == (**g_518)))))) < l_1945) < (safe_lshift_func_int8_t_s_u((l_2156 , l_2028), 4)))), g_1681[1][0])) < l_2058)))), (**g_527)))));
    return (**g_527);
}



static uint16_t  func_5(const uint16_t  p_6, uint16_t  p_7)
{ 
    uint32_t l_18 = 0x76CE4A6FL;
    int64_t *l_21 = &g_22;
    int64_t *l_23[2];
    uint32_t *l_598 = &g_239[0];
    uint32_t l_921[4][7];
    uint32_t ****l_1096 = &g_697[0][1][0];
    uint32_t *****l_1095[7];
    int32_t l_1106 = 0xB03B0963L;
    int32_t l_1107 = 2L;
    int64_t l_1129 = 0x61F2AFB97F72E3F1LL;
    int32_t l_1130[2];
    int8_t **l_1165 = &g_528;
    struct S0 *l_1192 = &g_91;
    int16_t *l_1207 = &g_108;
    int32_t l_1313[6];
    uint16_t l_1361 = 65530UL;
    int8_t l_1405 = 0xAFL;
    uint8_t *l_1428 = &g_1152[1][2][0];
    int64_t *l_1479 = (void*)0;
    int16_t ** const *l_1513 = &g_520;
    int16_t l_1519 = 1L;
    int64_t l_1550 = 0xF59CBF516EFE17A0LL;
    uint32_t l_1562[3];
    int64_t l_1565 = 0x49D9614E648DB78ALL;
    int16_t l_1604 = 0L;
    union U1 l_1715 = {1UL};
    int32_t **l_1722 = &g_247[0];
    uint32_t *l_1725 = &g_1162[1];
    uint16_t *l_1739 = &g_804;
    int32_t **l_1772 = &g_541[5];
    int32_t **l_1774 = &g_541[5];
    uint64_t l_1789 = 0xB5580E6909C8DCD9LL;
    int16_t l_1832 = 0x6E0BL;
    int16_t l_1877 = 0x7372L;
    int64_t l_1878[4];
    uint32_t l_1879 = 0xFCB13BCBL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_23[i] = &g_24;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
            l_921[i][j] = 4294967291UL;
    }
    for (i = 0; i < 7; i++)
        l_1095[i] = &l_1096;
    for (i = 0; i < 2; i++)
        l_1130[i] = 0xB355E9EEL;
    for (i = 0; i < 6; i++)
        l_1313[i] = 0x1B12F606L;
    for (i = 0; i < 3; i++)
        l_1562[i] = 0x3969372AL;
    for (i = 0; i < 4; i++)
        l_1878[i] = 0xF25D0BEB91C2F4A8LL;
    if (func_8(func_13(l_18, (g_24 = ((*l_21) &= (0x6EEAL | (safe_lshift_func_uint8_t_u_u((0xCD44L > l_18), 5))))), func_25(((*l_598) = (g_2 , func_29((func_35(g_2) , (*g_65)), l_23[1], l_18, l_18, l_23[1]))), p_7, g_526), l_18), g_755, l_921[1][4], l_18))
    { 
        uint32_t ****l_1094[3][2] = {{&g_695,&g_695},{&g_695,&g_695},{&g_695,&g_695}};
        uint32_t *****l_1093 = &l_1094[0][0];
        int32_t l_1105 = 0x55E3EA49L;
        int32_t l_1123 = 0x12B4F41CL;
        int32_t l_1124 = 0x05B4CA04L;
        int8_t l_1125[1][6][4] = {{{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)}}};
        int32_t l_1127 = 0x3BBCA895L;
        int32_t l_1128[4] = {0xCF2ED9A5L,0xCF2ED9A5L,0xCF2ED9A5L,0xCF2ED9A5L};
        uint32_t l_1131 = 0xCC4D0152L;
        int32_t l_1204 = 0x3B53025FL;
        struct S0 l_1238 = {0x7CL,65527UL};
        int32_t l_1297[5];
        int8_t l_1317 = (-1L);
        int8_t **l_1334[1][7];
        int32_t **l_1349 = &g_541[5];
        int64_t **l_1375 = &l_23[0];
        uint16_t l_1416 = 0x4591L;
        uint64_t l_1449 = 18446744073709551615UL;
        struct S0 **l_1467[5][4][5] = {{{(void*)0,&g_1017,&l_1192,&g_1017,&l_1192},{&g_1017,&l_1192,(void*)0,(void*)0,&g_1017},{(void*)0,(void*)0,&l_1192,&g_1017,(void*)0},{&g_1017,(void*)0,(void*)0,&g_1017,(void*)0}},{{(void*)0,&g_1017,&l_1192,&l_1192,&g_1017},{&l_1192,(void*)0,&g_1017,&l_1192,&g_1017},{&g_1017,&g_1017,&l_1192,&g_1017,&l_1192},{&g_1017,&l_1192,(void*)0,&g_1017,(void*)0}},{{&l_1192,&l_1192,(void*)0,(void*)0,&l_1192},{&g_1017,&l_1192,&g_1017,&g_1017,&g_1017},{(void*)0,&g_1017,&l_1192,&g_1017,&l_1192},{&l_1192,(void*)0,&l_1192,&l_1192,&l_1192}},{{(void*)0,&g_1017,(void*)0,(void*)0,&g_1017},{&g_1017,(void*)0,(void*)0,&g_1017,&l_1192},{&g_1017,(void*)0,&g_1017,&l_1192,(void*)0},{&g_1017,&l_1192,(void*)0,&l_1192,&l_1192}},{{&l_1192,&g_1017,(void*)0,&g_1017,&g_1017},{(void*)0,(void*)0,&l_1192,&l_1192,&g_1017},{(void*)0,&l_1192,&l_1192,(void*)0,(void*)0},{&l_1192,&l_1192,&g_1017,&l_1192,(void*)0}}};
        int16_t ** const *l_1515 = (void*)0;
        uint16_t l_1566 = 0x7E50L;
        int64_t l_1616 = 0L;
        union U1 l_1684 = {6UL};
        int32_t l_1707 = 0xC5100166L;
        uint16_t l_1708 = 0UL;
        int16_t * const *l_1719 = &l_1207;
        int16_t * const **l_1718 = &l_1719;
        int16_t * const ***l_1717 = &l_1718;
        int16_t * const ****l_1716 = &l_1717;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1297[i] = 0xD965655DL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_1334[i][j] = &g_528;
        }
        if ((safe_mul_func_uint16_t_u_u(((!((safe_mod_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_u(0xEF51L, 3)) == (safe_sub_func_uint16_t_u_u(((l_1093 = (void*)0) == l_1095[5]), (l_1107 = ((safe_rshift_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u(g_239[0], (l_1106 = (g_91.f0 && ((safe_div_func_int64_t_s_s(((*g_66) = (*g_66)), (safe_div_func_int64_t_s_s(((**g_527) != (**g_527)), l_921[3][1])))) >= l_1105))))) < 0x0885F491L) < 4L) | p_7) < l_18), g_197)) ^ l_18))))) , g_47) || (-7L)), p_6)) > l_921[0][2])) && (-1L)), 1UL)))
        { 
            int16_t *l_1112 = &g_784;
            uint16_t *l_1115[5][4];
            uint32_t *l_1116[3][3] = {{&l_921[1][4],&l_921[1][4],&l_921[1][4]},{&g_197,&g_197,&g_197},{&l_921[1][4],&l_921[1][4],&l_921[1][4]}};
            int32_t **l_1117 = &g_247[0];
            int32_t l_1126[7][7][5] = {{{0xDC301A79L,0L,(-7L),0x564BFA94L,0x415F3749L},{0x415F3749L,(-10L),1L,1L,0L},{0xEFBE635EL,0x1E9ECCBFL,0xADCE3E31L,0xD6374E5DL,7L},{(-8L),0xFC576D84L,(-1L),0xD6374E5DL,(-7L)},{0L,0x415F3749L,4L,1L,0x142D4398L},{0x1BF34D8BL,0x68D4D161L,6L,0x564BFA94L,0xC8CE761DL},{0x1CE5DE98L,(-3L),0xFC576D84L,0xFC576D84L,(-3L)}},{{(-10L),1L,(-8L),0x1985C94CL,6L},{0xE523CEA0L,(-4L),(-1L),6L,0x6B930E15L},{0x1985C94CL,1L,0x1CE5DE98L,0xDC301A79L,(-1L)},{0xE523CEA0L,0xC8CE761DL,0L,(-8L),0x1985C94CL},{(-10L),1L,0x58ADE324L,(-1L),0x1E9ECCBFL},{0x1CE5DE98L,(-10L),0x6B930E15L,(-7L),0xD716E89DL},{0x1BF34D8BL,(-8L),0x1E9ECCBFL,(-10L),0xB020A227L}},{{0L,0x1CE5DE98L,0x142D4398L,(-10L),0x089D7DD5L},{(-8L),0x6B930E15L,0x142D4398L,(-4L),0xF8CA8E76L},{(-1L),(-10L),(-7L),0x1BF34D8BL,0xADFF5EC3L},{(-8L),8L,0x1BF34D8BL,0x6B930E15L,0L},{(-10L),0xF8CA8E76L,0xDC301A79L,0xF8CA8E76L,(-10L)},{0L,0L,4L,7L,0x58ADE324L},{1L,0x6B930E15L,0x1E9ECCBFL,0xDC301A79L,0xEFBE635EL}},{{(-1L),1L,(-1L),0L,0x58ADE324L},{0xD716E89DL,0xDC301A79L,0xC8CE761DL,(-3L),(-10L)},{0x58ADE324L,0xE707C603L,0xD716E89DL,(-4L),0L},{0x68D4D161L,0xB020A227L,1L,0xE523CEA0L,0xADFF5EC3L},{0xFC576D84L,(-10L),0x0373FA8BL,0x564BFA94L,0xF8CA8E76L},{0L,0x0373FA8BL,0L,1L,0xC8FE166FL},{0xE523CEA0L,0x0373FA8BL,1L,(-1L),0xD6374E5DL}},{{0x142D4398L,(-10L),0xF8CA8E76L,(-7L),0x089D7DD5L},{(-4L),0xB020A227L,1L,0x415F3749L,(-7L)},{0x1985C94CL,0xE707C603L,0xE707C603L,0x1985C94CL,(-10L)},{1L,0xDC301A79L,0L,1L,(-1L)},{(-4L),1L,(-1L),0xEEDE9539L,0x1BF34D8BL},{0xADCE3E31L,0x6B930E15L,(-1L),1L,1L},{0xC8CE761DL,0L,(-8L),0x1985C94CL,0x1CE5DE98L}},{{0L,0xF8CA8E76L,0xADCE3E31L,0x415F3749L,0x142D4398L},{(-1L),8L,0x1985C94CL,(-7L),6L},{1L,(-10L),0x6B930E15L,(-1L),1L},{0L,0x1BF34D8BL,(-10L),1L,0x27707BDDL},{0L,0x1E9ECCBFL,0x68D4D161L,0x564BFA94L,1L},{1L,0xC8CE761DL,(-7L),0xE523CEA0L,(-8L)},{(-1L),(-8L),(-10L),(-4L),(-4L)}},{{0L,0xADFF5EC3L,0L,(-3L),0x0373FA8BL},{0xC8CE761DL,0x142D4398L,0xEEDE9539L,0L,7L},{0xADCE3E31L,0L,0x089D7DD5L,0xDC301A79L,(-8L)},{(-4L),0xEFBE635EL,0xEEDE9539L,7L,0L},{1L,0x76E7DF19L,0L,0xF8CA8E76L,0xADCE3E31L},{0x1985C94CL,0x1CE5DE98L,(-10L),0x6B930E15L,(-7L)},{(-4L),0xFC576D84L,(-7L),0x1BF34D8BL,0xC8CE761DL}}};
            union U1 l_1186 = {18446744073709551614UL};
            int32_t l_1230 = 0xFF8216AAL;
            uint16_t l_1277 = 0x5E7AL;
            uint32_t *** const l_1290[5] = {&g_698,&g_698,&g_698,&g_698,&g_698};
            int64_t l_1310 = 0x5B49B04E851E70B6LL;
            int16_t l_1314[4][3][6] = {{{0xFB27L,0x868DL,0x868DL,0xFB27L,(-1L),(-1L)},{(-1L),0xFB27L,0xA096L,0xFB27L,(-1L),(-1L)},{0xFB27L,(-1L),(-1L),(-1L),(-1L),0xFB27L}},{{0x868DL,0xFB27L,0L,(-1L),0L,0x868DL},{0L,(-1L),0xA096L,(-1L),(-1L),0xA096L},{0L,0L,(-1L),(-1L),0xFB27L,(-1L)}},{{(-1L),0L,(-1L),0xA096L,(-1L),(-1L)},{0x868DL,(-1L),(-1L),0x868DL,0L,(-1L)},{(-1L),0x868DL,(-1L),0x868DL,(-1L),0xA096L}},{{0x868DL,(-1L),0xA096L,0xA096L,(-1L),0x868DL},{(-1L),0x868DL,0L,(-1L),0L,0x868DL},{0L,(-1L),0xA096L,(-1L),(-1L),0xA096L}}};
            uint32_t l_1324 = 0x2ED63358L;
            int8_t **l_1332 = &g_528;
            int32_t *l_1350[7];
            uint8_t l_1368[7][1];
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1115[i][j] = (void*)0;
            }
            for (i = 0; i < 7; i++)
                l_1350[i] = &l_1128[3];
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1368[i][j] = 1UL;
            }
            for (g_271 = 3; (g_271 <= 15); g_271 = safe_add_func_uint16_t_u_u(g_271, 5))
            { 
                return g_194[1];
            }
            (*l_1117) = ((safe_mul_func_uint8_t_u_u((0x8950L > ((*l_1112) = l_1105)), (l_921[1][4] == (safe_mod_func_int32_t_s_s((l_1107 = 0x850F0026L), (g_197 &= (((p_7 = l_18) && p_6) <= ((-3L) & 0x57A0342F72789695LL)))))))) , (void*)0);
            for (g_271 = 6; (g_271 != (-24)); g_271 = safe_sub_func_uint8_t_u_u(g_271, 2))
            { 
                int32_t *l_1120 = &g_270;
                int32_t *l_1121 = &g_40;
                int32_t *l_1122[2];
                uint8_t *l_1148 = &g_141;
                uint8_t *l_1149 = &g_442;
                uint8_t *l_1150 = (void*)0;
                uint8_t *l_1151 = &g_1152[0][0][1];
                union U1 *l_1154 = &g_131[0][0][2];
                union U1 **l_1153 = &l_1154;
                int i;
                for (i = 0; i < 2; i++)
                    l_1122[i] = &g_270;
                l_1131++;
                (*l_1121) ^= (l_1127 |= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((*l_1112) = (~(((safe_mod_func_int32_t_s_s(4L, ((safe_div_func_uint32_t_u_u(((((~(*l_1120)) ^ 1UL) < (g_238 != (-7L))) | ((p_7 ^ (safe_rshift_func_uint8_t_u_s((((*l_1151) = ((*l_1149) = ((*l_1148) ^= ((safe_sub_func_uint32_t_u_u((g_202 < p_6), 0L)) , 3UL)))) , l_1128[3]), (**g_527)))) && (*l_1120))), g_2)) ^ p_7))) , l_1153) != (void*)0))), 4)), p_6)));
                l_1127 ^= p_6;
                if ((safe_unary_minus_func_uint8_t_u((*l_1120))))
                { 
                    int32_t l_1156 = 0xBDFBEEAEL;
                    int32_t l_1157 = 2L;
                    int32_t l_1158 = 0x50E86DD6L;
                    int32_t l_1159 = 1L;
                    int32_t l_1160 = 1L;
                    int32_t l_1161 = 0xD12EAC3DL;
                    ++g_1162[1];
                    return l_921[1][4];
                }
                else
                { 
                    return l_1131;
                }
            }
            if ((l_1165 != &g_528))
            { 
                uint8_t *l_1172 = &g_442;
                int32_t *l_1175 = &g_450;
                const int32_t *l_1177[1];
                const int32_t **l_1176 = &l_1177[0];
                int32_t l_1189 = 0L;
                int32_t l_1190 = 0x2516E4D7L;
                int64_t l_1201 = 0x50C2537A626AC63DLL;
                struct S0 l_1239[3] = {{0xE1L,0x659BL},{0xE1L,0x659BL},{0xE1L,0x659BL}};
                uint8_t l_1242 = 0x3DL;
                int32_t *l_1243 = (void*)0;
                int32_t *l_1244 = (void*)0;
                int32_t *l_1245 = &l_1190;
                int16_t l_1246 = 0xEC57L;
                uint64_t *l_1247 = &g_202;
                uint64_t *l_1248 = &g_84[0];
                uint8_t l_1264 = 0x83L;
                uint64_t *l_1265 = &g_388[1][1];
                int32_t *l_1266 = &l_1124;
                int32_t *l_1267 = &l_1128[3];
                int32_t *l_1268 = &l_1128[3];
                int32_t *l_1269 = &l_1124;
                int32_t *l_1270 = (void*)0;
                int32_t *l_1271 = &l_1190;
                int32_t *l_1272 = &l_1128[3];
                int32_t *l_1273 = (void*)0;
                int32_t *l_1274 = (void*)0;
                int32_t *l_1275 = &l_1204;
                int32_t *l_1276[5][5];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1177[i] = &g_1178;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1276[i][j] = (void*)0;
                }
                if ((((**g_1016) , (((g_84[1] , (l_1189 = (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((((((safe_mul_func_uint8_t_u_u(((*l_1172)++), (*g_528))) , l_1175) == ((*l_1176) = (void*)0)) , (~(safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_1123 = (((*l_1112) = (safe_add_func_int8_t_s_s(((l_1186 , (safe_div_func_uint32_t_u_u(((void*)0 != &g_141), l_1189))) <= l_1189), p_6))) & 0L)), l_1128[3])), l_1106)))) , p_6) != p_6), l_1125[0][4][0])), 9L)))) , 0L) ^ g_38)) ^ l_1190))
                { 
                    int32_t *l_1194 = (void*)0;
                    int32_t *l_1195 = &l_1105;
                    int8_t *l_1200[7] = {&g_371[3][3],&g_371[3][3],&g_371[3][3],&g_371[3][3],&g_371[3][3],&g_371[3][3],&g_371[3][3]};
                    int i;
                    l_1130[1] |= (~(((p_7 , l_1192) == (void*)0) ^ 1UL));
                    (*l_1195) = ((!0xFDL) == g_1152[0][0][1]);
                    l_1130[0] = ((*l_1195) = l_1190);
                    (*l_1195) &= (safe_sub_func_int64_t_s_s(((-1L) || (safe_lshift_func_int8_t_s_u((**g_527), 2))), (1UL <= ((l_1201 &= p_6) | (*g_528)))));
                }
                else
                { 
                    int64_t l_1202 = 0x37EF1A45E353E6B1LL;
                    uint8_t *l_1217 = &g_1152[0][0][1];
                    int32_t *l_1218 = (void*)0;
                    uint64_t *l_1226 = &g_219;
                    int32_t *l_1231 = &l_1126[3][1][2];
                    (*g_1016) = (void*)0;
                    l_1107 = (((*l_1112) &= l_1202) >= ((+(l_1204 != ((safe_sub_func_int32_t_s_s((l_1207 == (void*)0), (g_197 |= (safe_lshift_func_uint16_t_u_s(g_1162[0], (safe_div_func_uint32_t_u_u((g_47 = ((((*l_1172) ^= l_1128[3]) ^ ((*l_1217) = (safe_lshift_func_int16_t_s_s((((((safe_add_func_uint64_t_u_u((+g_272), 0UL)) , p_7) || 0UL) > p_6) | 0xA01DL), l_1202)))) > (-1L))), g_202))))))) , p_7))) >= l_921[1][6]));
                    (*l_1231) ^= (((p_7 = p_7) == 0xA154L) && (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((p_7 == (*g_528)) > (((l_1107 , (~((safe_add_func_uint8_t_u_u(((((((g_84[1] &= ((*l_1226) = 0x1EF8D84524F2AC06LL)) ^ (safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u(p_7, l_1230))))) , 0xEDC2DE17386D07FALL) < l_921[0][2]) >= p_6) < l_1124), l_1189)) > p_7))) >= (-3L)) & 0xE8411EA8995BE3F1LL)), 4)), l_1125[0][0][1])));
                }
                (*l_1245) ^= (safe_sub_func_uint8_t_u_u(g_38, (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((5L || ((((func_43((l_1238 , l_1239[1])) , (((*l_1172) ^= (safe_rshift_func_int16_t_s_s(((void*)0 != &g_131[4][0][2]), 12))) <= 252UL)) | p_6) != (*g_561)) < l_1242)), 0x55L)), g_371[0][3]))));
                if (l_1106)
                    goto lbl_1251;
                if ((((*l_1247) &= l_1246) < (--(*l_1248))))
                { 
                    return p_7;
                }
                else
                { 
lbl_1251:
                    (*l_1245) = 1L;
                    (*l_1245) ^= 0x709FCBB2L;
                    (*l_1245) &= (safe_sub_func_uint16_t_u_u((((*l_1265) &= ((*l_1248) ^= (safe_lshift_func_uint8_t_u_u(((*l_1172)--), (0UL && (((safe_sub_func_uint16_t_u_u((p_7 <= l_1204), p_6)) | p_6) == (((safe_rshift_func_int8_t_s_u((((l_1264 ^= (safe_add_func_uint8_t_u_u(l_1107, (g_784 <= (**g_527))))) & p_6) & 0UL), g_202)) , p_6) | p_7))))))) == p_6), 0x1211L));
                }
                --l_1277;
            }
            else
            { 
                uint64_t l_1280[2];
                int32_t l_1287 = 0x4FFF3A0AL;
                int32_t l_1309 = 0L;
                int32_t l_1311 = 0x59DB3E12L;
                int32_t l_1312[7] = {0xC7CC574CL,0xE55B4E41L,0xC7CC574CL,0xC7CC574CL,0xE55B4E41L,0xC7CC574CL,0xC7CC574CL};
                int16_t l_1315 = 0x5309L;
                uint32_t l_1318 = 0xEA41D979L;
                int32_t *l_1321 = &l_1123;
                int32_t *l_1322 = &l_1128[2];
                int32_t *l_1323[5];
                int8_t ***l_1333[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1280[i] = 0x7F1B4CFCF45BEAFFLL;
                for (i = 0; i < 5; i++)
                    l_1323[i] = &l_1124;
                if ((l_1280[1] < p_7))
                { 
                    return p_6;
                }
                else
                { 
                    int32_t *l_1281[4][1][3] = {{{&l_1123,&l_1126[5][5][3],&l_1123}},{{&l_1128[3],&l_1128[3],&l_1128[3]}},{{&l_1123,&l_1126[5][5][3],&l_1123}},{{&l_1128[3],&l_1128[3],&l_1128[3]}}};
                    uint32_t ** const *l_1292 = (void*)0;
                    uint32_t ** const **l_1291 = &l_1292;
                    uint32_t *l_1296 = (void*)0;
                    uint32_t ** const l_1295 = &l_1296;
                    uint32_t ** const *l_1294 = &l_1295;
                    uint32_t ** const **l_1293 = &l_1294;
                    const uint16_t *l_1299[6];
                    const uint16_t **l_1298 = &l_1299[4];
                    const uint16_t ***l_1300 = &l_1298;
                    int16_t l_1316 = 0L;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1299[i] = &g_194[0];
                    l_1107 = (p_7 ^ (*g_561));
                    l_1297[2] ^= ((safe_lshift_func_int16_t_s_s((l_1280[1] , (safe_rshift_func_int8_t_s_s((**g_527), (safe_unary_minus_func_int64_t_s(((l_1287 &= (p_6 > ((g_197 = p_6) == g_255))) != (l_1130[0] = ((safe_rshift_func_uint8_t_u_s(((l_1290[3] == ((*l_1293) = ((*l_1291) = &g_698))) , g_388[1][2]), 0)) == 0x672AL)))))))), p_6)) , 0x835794DBL);
                    (*l_1300) = l_1298;
                    l_1287 = ((((((((0x1DF259B1L && p_6) < l_1106) < (-1L)) || (((safe_div_func_int64_t_s_s(0L, (safe_mod_func_uint16_t_u_u((safe_mul_func_int64_t_s_s(p_6, ((((g_755 |= (safe_add_func_int8_t_s_s((func_25(p_7, l_1123, l_1297[2]) , (*g_528)), 0xAAL))) <= p_6) || 0xF7F6L) < p_7))), g_201)))) <= g_1162[1]) , 0UL)) , (*g_528)) > 0xC9L) && 0L) | 6L);
                    l_1318++;
                }
                l_1324--;
                (*l_1321) = (safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s((!((l_1334[0][1] = l_1332) != (g_527 = l_1165))), (safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(g_194[1], (safe_mod_func_int8_t_s_s(l_1125[0][5][0], (+((safe_unary_minus_func_uint64_t_u((p_7 , (!p_7)))) && (((p_6 > l_1238.f1) , l_1314[0][0][5]) || l_1317))))))) || 0x93L), (-1L))), (*g_528))))), g_47));
            }
            if ((g_193[1] > (safe_sub_func_int64_t_s_s((*g_66), (((!((l_1106 = ((void*)0 == l_1349)) ^ (l_1204 = (l_1105 = (l_1128[0] |= (l_1126[1][2][2] = 0xB4CB5E17L)))))) & p_7) > 1UL)))))
            { 
                int32_t **l_1353 = &g_247[1];
                uint64_t *l_1362 = &g_84[0];
                if (((safe_sub_func_uint16_t_u_u((&g_247[0] == l_1353), (safe_rshift_func_int8_t_s_u((g_255 &= (safe_sub_func_int8_t_s_s((**g_527), p_7))), 4)))) >= (safe_unary_minus_func_uint64_t_u(((*l_1362) = ((0x442BL != 0xE50AL) && (((l_1107 = (0x04523D5CB3261D11LL || l_1361)) , (void*)0) != (void*)0)))))))
                { 
                    return p_6;
                }
                else
                { 
                    uint32_t l_1367[6][7][4] = {{{1UL,0xB41042CBL,0x8FC06968L,0xDBC442B8L},{4294967292UL,0UL,4294967292UL,0x379CAAC0L},{1UL,2UL,4294967292UL,0UL},{4294967292UL,0UL,0x8FC06968L,2UL},{1UL,0x379CAAC0L,0x8FC06968L,0UL},{4294967292UL,0xDBC442B8L,4294967292UL,0xB41042CBL},{1UL,4294967289UL,4294967292UL,4294967287UL}},{{4294967292UL,4294967287UL,0x8FC06968L,4294967289UL},{1UL,0xB41042CBL,0x8FC06968L,0xDBC442B8L},{4294967292UL,0UL,4294967292UL,0x379CAAC0L},{1UL,2UL,4294967292UL,0UL},{4294967292UL,0UL,0x8FC06968L,2UL},{1UL,0x379CAAC0L,0x8FC06968L,0UL},{4294967292UL,0xDBC442B8L,4294967292UL,0xB41042CBL}},{{1UL,4294967289UL,4294967292UL,4294967287UL},{4294967292UL,4294967287UL,0x8FC06968L,4294967289UL},{1UL,0xB41042CBL,0x8FC06968L,0xDBC442B8L},{4294967292UL,0UL,4294967292UL,0x379CAAC0L},{1UL,2UL,4294967292UL,0UL},{4294967292UL,0UL,0x8FC06968L,2UL},{1UL,0x379CAAC0L,0x8FC06968L,0UL}},{{4294967292UL,0xDBC442B8L,4294967292UL,0xB41042CBL},{1UL,4294967289UL,4294967292UL,4294967287UL},{4294967292UL,4294967287UL,0x8FC06968L,4294967289UL},{1UL,0xB41042CBL,0x8FC06968L,0xDBC442B8L},{4294967292UL,0UL,4294967292UL,0x379CAAC0L},{1UL,2UL,4294967292UL,0UL},{4294967292UL,0UL,0x8FC06968L,2UL}},{{1UL,0x379CAAC0L,0x8FC06968L,0UL},{4294967292UL,0xDBC442B8L,4294967292UL,0xB41042CBL},{1UL,4294967289UL,4294967292UL,4294967287UL},{4294967292UL,4294967287UL,0x8FC06968L,4294967289UL},{1UL,0xB41042CBL,0x8FC06968L,0xDBC442B8L},{4294967292UL,0UL,4294967292UL,0x379CAAC0L},{1UL,2UL,4294967292UL,0UL}},{{4294967292UL,0UL,0x8FC06968L,2UL},{1UL,0x379CAAC0L,0x8FC06968L,0UL},{4294967292UL,0xDBC442B8L,4294967292UL,0xB41042CBL},{1UL,4294967289UL,4294967292UL,4294967287UL},{4294967292UL,4294967287UL,0x8FC06968L,4294967289UL},{1UL,0xB41042CBL,0x8FC06968L,0xDBC442B8L},{4294967292UL,0UL,4294967292UL,0x379CAAC0L}}};
                    int i, j, k;
                    l_1367[2][2][2] = (safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(p_7, 6)), (((*g_1016) != (void*)0) , l_1105)));
                    return l_1367[2][2][2];
                }
            }
            else
            { 
                return l_1368[6][0];
            }
        }
        else
        { 
            int8_t l_1376[2][1];
            int32_t l_1379 = 0xC6E8252DL;
            int32_t l_1389 = (-6L);
            int32_t l_1415[3];
            union U1 *l_1424 = (void*)0;
            int32_t *l_1436 = &l_1124;
            struct S0 **l_1466 = &g_1017;
            const int8_t l_1474 = 0x23L;
            uint64_t l_1480 = 0x589DAEADC32AC84ELL;
            uint32_t ****l_1549 = &g_697[5][0][2];
            const uint16_t *l_1585 = &g_755;
            const uint16_t **l_1584 = &l_1585;
            int32_t *l_1593 = &l_1415[2];
            int32_t **l_1594 = &g_247[1];
            uint16_t *l_1603 = &l_1361;
            uint64_t *l_1605 = &l_1480;
            union U1 *** const l_1645 = &g_1504;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1376[i][j] = (-3L);
            }
            for (i = 0; i < 3; i++)
                l_1415[i] = 1L;
            if ((safe_sub_func_uint8_t_u_u(0UL, 1L)))
            { 
                const uint32_t *l_1374 = &g_239[1];
                const uint32_t **l_1373 = &l_1374;
                int32_t l_1377 = 0x5EAACAA6L;
                int32_t l_1390 = (-1L);
                int64_t l_1404 = 7L;
                int32_t l_1406 = 0x32FD39E9L;
                int32_t l_1407 = 0x8347B6C3L;
                int32_t l_1408 = (-1L);
                int32_t l_1409 = 0xD78EA283L;
                int32_t l_1410 = (-1L);
                int32_t l_1411 = (-10L);
                int32_t l_1412 = (-1L);
                int32_t l_1413 = 0x01F17BCEL;
                int32_t l_1414[7] = {0x207AC60FL,0x207AC60FL,0x207AC60FL,0x207AC60FL,0x207AC60FL,0x207AC60FL,0x207AC60FL};
                int i;
                if (((safe_sub_func_uint64_t_u_u(((((void*)0 != l_1373) || ((((p_7 , (0xEAE73849L < (l_1204 = l_1130[1]))) , (((*g_500) != l_1375) < l_1125[0][3][2])) , p_7) != 0x98DAD74AL)) , l_921[1][4]), l_1376[0][0])) & l_1377))
                { 
                    int32_t *l_1378 = &g_40;
                    int32_t *l_1380 = &l_1105;
                    int32_t *l_1381 = &l_1204;
                    int32_t *l_1382 = &l_1379;
                    int32_t *l_1383 = &l_1379;
                    int32_t *l_1384 = &l_1105;
                    int32_t *l_1385 = &l_1204;
                    int32_t *l_1386 = &g_38;
                    int32_t *l_1387 = &l_1107;
                    int32_t *l_1388[4];
                    uint32_t l_1391 = 0x6FC2FE14L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1388[i] = &g_40;
                    g_247[0] = &l_1377;
                    l_1391--;
                }
                else
                { 
                    int32_t *l_1396 = (void*)0;
                    int32_t *l_1397 = (void*)0;
                    int32_t *l_1398 = &l_1389;
                    int32_t *l_1399 = (void*)0;
                    int32_t *l_1400 = &l_1106;
                    int32_t *l_1401 = &l_1106;
                    int32_t *l_1402 = &g_38;
                    int32_t *l_1403[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1403[i] = &l_1379;
                    l_1390 = (l_1128[3] = (safe_rshift_func_int16_t_s_u(p_6, p_6)));
                    l_1130[0] = p_6;
                    l_1416--;
                    (*l_1402) |= (g_40 & 0xD837L);
                }
            }
            else
            { 
                uint64_t l_1419 = 7UL;
                int32_t *l_1438 = &l_1379;
                struct S0 ***l_1470 = (void*)0;
                int32_t l_1475 = 0x031CC109L;
                uint32_t l_1490 = 0xEBC31F3FL;
                int32_t l_1492[6] = {0x47C93B0DL,0x47C93B0DL,0x47C93B0DL,0x47C93B0DL,0x47C93B0DL,0x47C93B0DL};
                int64_t l_1493[4][2][2] = {{{1L,1L},{0x83127AF6CF65FBA1LL,1L}},{{1L,0x83127AF6CF65FBA1LL},{1L,1L}},{{0x83127AF6CF65FBA1LL,1L},{1L,0x83127AF6CF65FBA1LL}},{{1L,1L},{0x83127AF6CF65FBA1LL,1L}}};
                union U1 **l_1502[5][6][1] = {{{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424}},{{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424}},{{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424}},{{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424}},{{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424},{&l_1424}}};
                uint8_t l_1506 = 0x95L;
                int32_t l_1520 = (-1L);
                uint32_t l_1523 = 8UL;
                uint32_t *l_1551 = &l_18;
                const uint16_t **l_1586[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1586[i] = &l_1585;
lbl_1569:
                if (l_1419)
                { 
                    uint32_t *l_1420 = (void*)0;
                    int32_t *l_1421 = &l_1105;
                    union U1 *l_1423 = &g_131[4][0][0];
                    union U1 **l_1422 = &l_1423;
                    int64_t **l_1427 = &l_23[1];
                    uint32_t *l_1429[5] = {&l_921[0][4],&l_921[0][4],&l_921[0][4],&l_921[0][4],&l_921[0][4]};
                    int32_t **l_1437 = &l_1421;
                    int i;
                    (*l_1421) = ((void*)0 != l_1420);
                    l_1424 = ((*l_1422) = (void*)0);
                    (*l_1437) = ((((((safe_mod_func_int8_t_s_s(((l_1427 != &l_21) == (((((((((l_1415[2] = (&g_442 == l_1428)) <= (safe_mod_func_uint8_t_u_u(((*l_1428)++), p_6))) == ((safe_sub_func_int64_t_s_s((p_7 , ((void*)0 == &g_501)), p_6)) & 0UL)) , p_7) | l_1416) >= 0xA9L) , (*l_1421)) > g_40) | p_6)), (*g_528))) , l_1389) & p_6) >= 0xAEECD261A49791E7LL) >= p_7) , l_1436);
                }
                else
                { 
                    int32_t **l_1439 = &g_247[1];
                    int32_t **l_1440[6];
                    struct S0 *l_1454 = &l_1238;
                    union U1 **l_1455 = &l_1424;
                    union U1 *l_1457[5][2][7] = {{{&g_131[1][0][1],(void*)0,&g_131[0][0][2],&g_131[0][0][2],(void*)0,&g_131[0][0][2],(void*)0},{&g_131[1][0][1],&g_131[3][0][2],(void*)0,&g_131[0][0][2],&g_131[3][0][2],&g_131[2][0][4],(void*)0}},{{&g_131[2][0][4],(void*)0,(void*)0,(void*)0,(void*)0,&g_131[2][0][4],&g_131[0][0][2]},{&g_131[1][0][1],(void*)0,&g_131[0][0][2],&g_131[0][0][2],(void*)0,&g_131[0][0][2],(void*)0}},{{&g_131[1][0][1],&g_131[3][0][2],(void*)0,&g_131[0][0][2],&g_131[3][0][2],&g_131[2][0][4],(void*)0},{&g_131[2][0][4],(void*)0,(void*)0,(void*)0,(void*)0,&g_131[2][0][4],&g_131[0][0][2]}},{{&g_131[1][0][1],(void*)0,&g_131[0][0][2],&g_131[0][0][2],(void*)0,&g_131[0][0][2],(void*)0},{&g_131[1][0][1],&g_131[3][0][2],(void*)0,&g_131[0][0][2],&g_131[3][0][2],&g_131[2][0][4],(void*)0}},{{&g_131[2][0][4],(void*)0,(void*)0,(void*)0,(void*)0,&g_131[4][0][4],&g_131[0][0][2]},{&g_131[0][0][2],(void*)0,(void*)0,&g_131[0][0][2],(void*)0,&g_131[4][0][4],(void*)0}}};
                    union U1 **l_1456 = &l_1457[3][1][6];
                    struct S0 *** const l_1471 = &g_1016;
                    uint32_t *l_1476 = &l_18;
                    int16_t *l_1491 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1440[i] = &l_1438;
                    g_1441 = ((*l_1439) = l_1438);
                    (*l_1438) = (g_1442 <= (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_7, l_1449)), (0xB3L < ((*l_1436) & (~((safe_add_func_uint16_t_u_u(p_7, ((~(l_1454 == l_1454)) < p_7))) >= 0x7B0EEF29L)))))), 0x67B6070CL)));
                    (*l_1456) = ((*l_1455) = &g_131[0][0][2]);
                    l_1130[0] |= ((*l_1438) = (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_1128[3] , ((((((safe_lshift_func_uint16_t_u_s(((((*l_1436) < (((l_1467[1][0][4] = l_1466) != l_1466) < (safe_lshift_func_uint8_t_u_s((l_1470 != l_1471), ((**g_527) = (((((*l_1207) &= ((safe_div_func_uint32_t_u_u(0xF0DC0632L, (*g_1441))) ^ l_1474)) || 0x01E2L) <= 4294967295UL) & 0x03019E6FB2AAF917LL)))))) && 0x53451C11L) | l_1238.f0), 2)) | 0x6BL) ^ g_268) || g_272) > 0x6CL) , p_7)) ^ l_1475), (*l_1438))), 1UL)));
                    l_1124 = (((*l_1476)--) & (l_1127 > ((*g_528) = (((**g_65) = (l_1480 = ((l_1479 = &l_1129) == (*l_1375)))) != ((safe_add_func_uint32_t_u_u((((((l_1492[4] &= ((*l_1207) = (safe_div_func_uint64_t_u_u(18446744073709551615UL, ((((safe_rshift_func_int8_t_s_s(((g_121 >= ((safe_unary_minus_func_uint8_t_u((l_1107 = g_1152[0][2][3]))) || ((safe_rshift_func_int16_t_s_u((-1L), g_194[1])) & l_1490))) >= l_1405), p_6)) >= (*l_1438)) <= p_7) ^ (-1L)))))) | l_1105) , p_7) ^ l_1493[0][1][0]) != 0xD6E94FF1L), 0x7995CEB8L)) & 0x9DC66B6424B35AA4LL)))));
                }
                for (g_202 = 0; (g_202 == 44); g_202 = safe_add_func_int16_t_s_s(g_202, 6))
                { 
                    int32_t *l_1496[7][6] = {{&l_1106,&l_1106,&l_1106,&l_1106,&l_1106,&l_1106},{&l_1106,&l_1106,&l_1106,&l_1106,&l_1106,&l_1106},{&l_1106,&l_1106,&l_1106,&l_1106,&l_1106,&l_1106},{&l_1106,&l_1106,&l_1106,&l_1106,&l_1106,&l_1106},{&l_1106,&l_1106,&l_1106,&l_1106,&l_1106,&l_1106},{&l_1106,&l_1106,&l_1106,&l_1106,&l_1106,&l_1106},{&l_1106,&l_1106,&l_1106,&l_1106,&l_1106,&l_1106}};
                    uint8_t l_1497 = 0xE9L;
                    int i, j;
                    l_1497--;
                    return l_1313[2];
                }
                for (l_1361 = 0; (l_1361 > 39); l_1361 = safe_add_func_uint8_t_u_u(l_1361, 3))
                { 
                    union U1 ***l_1503 = (void*)0;
                    int16_t ** const **l_1514[6][3][1];
                    int32_t *l_1521[2][2];
                    uint32_t *l_1538[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1514[i][j][k] = &l_1513;
                        }
                    }
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1521[i][j] = (void*)0;
                    }
                    for (i = 0; i < 6; i++)
                        l_1538[i] = &l_921[1][4];
                    (*l_1438) = (((g_1504 = l_1502[4][3][0]) == (((l_1506 <= ((safe_add_func_uint64_t_u_u((((p_7 < (*l_1438)) != ((((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((l_1515 = l_1513) == (void*)0), (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u(g_409, (-8L))))))), l_1519)) | g_141) & l_1520) | p_7)) && 2L), (*l_1438))) < p_7)) | l_1361) , (void*)0)) <= (*l_1436));
                    --l_1523;
                    if (l_1419)
                        goto lbl_1595;
                    if ((*l_1438))
                        continue;
                    (*g_1441) = (safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551609UL, (safe_rshift_func_int16_t_s_s((l_1105 & ((safe_add_func_int8_t_s_s(0xF9L, g_239[1])) & ((safe_div_func_int16_t_s_s((l_1128[3] |= (p_7 || ((*l_1436) & (safe_mul_func_int16_t_s_s((((l_1204 = ((void*)0 == &l_1466)) , l_1127) != 0xF4L), (*l_1438)))))), l_1130[0])) , p_6))), p_6)))), (*l_1438)));
                    if (p_6)
                        break;
                }
                if ((safe_lshift_func_int8_t_s_u((0x1B948824A6713FADLL != ((safe_mod_func_uint32_t_u_u(p_7, ((*l_1551) = (((-1L) >= (safe_rshift_func_uint16_t_u_s((0xF6E1L || (safe_mod_func_int16_t_s_s(((*l_1207) = (safe_div_func_int8_t_s_s(((*l_1438) != ((((void*)0 != l_1549) <= (*l_1436)) == 0x85L)), 0x6FL))), 0x8389L))), l_1550))) || 0x3729D582L)))) , g_2)), 2)))
                { 
                    int32_t **l_1552 = &g_247[1];
                    int32_t *l_1553 = &l_1130[1];
                    int32_t *l_1554 = &l_1124;
                    int32_t *l_1555 = (void*)0;
                    int32_t *l_1556 = &l_1107;
                    int32_t *l_1557 = &l_1106;
                    int32_t *l_1558 = &l_1520;
                    int32_t *l_1559 = &l_1106;
                    int32_t *l_1560 = &l_1204;
                    int32_t *l_1561[4] = {&l_1107,&l_1107,&l_1107,&l_1107};
                    int i;
                    (*l_1552) = &l_1127;
                    --l_1562[0];
                    --l_1566;
                }
                else
                { 
                    if (g_121)
                        goto lbl_1569;
                    return p_6;
                }
                for (l_1129 = 0; (l_1129 >= 18); l_1129 = safe_add_func_uint8_t_u_u(l_1129, 4))
                { 
                    uint16_t *l_1579[2][7][6] = {{{&g_804,&g_804,&l_1361,&g_194[1],&g_194[1],&l_1416},{&g_194[1],&l_1566,&g_194[1],&g_804,&g_804,&l_1361},{&g_755,&g_194[1],&g_194[1],&g_194[1],&g_804,&l_1416},{&g_194[0],&g_194[1],&l_1361,&l_1566,&l_1361,&g_194[1]},{&l_1566,&l_1361,&g_194[1],&g_194[0],&g_755,&l_1566},{&g_194[1],&g_194[1],&g_194[1],&g_755,&g_804,&g_804},{&g_804,&g_194[1],&l_1566,&g_194[1],&g_755,(void*)0}},{{&g_194[1],&l_1361,&g_804,&g_804,&l_1361,&g_194[1]},{&l_1566,&g_194[1],&g_755,(void*)0,&g_804,&g_194[0]},{&g_194[1],&g_194[1],(void*)0,&l_1416,&g_804,&l_1566},{&g_194[1],&l_1566,&l_1416,(void*)0,&g_194[1],&g_804},{&l_1566,&g_804,&g_804,&g_804,&l_1566,(void*)0},{&g_194[1],&g_755,&g_804,&g_194[1],(void*)0,&l_1566},{&g_804,(void*)0,&l_1566,&g_755,&l_1566,&l_1566}}};
                    int32_t l_1589 = 0L;
                    uint64_t *l_1590 = &g_219;
                    int i, j, k;
                    (*g_1441) = (safe_add_func_int64_t_s_s((*l_1436), (0xE10CF1CF0F924DB8LL > ((safe_rshift_func_uint8_t_u_u((++(*l_1428)), (safe_unary_minus_func_uint64_t_u(((*l_1590) &= ((++g_194[0]) , (((p_6 , (safe_mod_func_int32_t_s_s((p_6 ^ (((g_467 != (l_1586[2] = l_1584)) > (safe_lshift_func_int8_t_s_u(((((*l_1192) , 7UL) & l_1123) != 0x1FL), p_7))) != g_1178)), g_1178))) == p_6) == l_1589))))))) | 0UL))));
                    if (l_1523)
                        goto lbl_1595;
                }
            }
lbl_1595:
            (*l_1594) = (((l_1131 , ((safe_lshift_func_uint16_t_u_s(8UL, (((*l_1192) , l_1130[0]) | g_197))) ^ l_1562[1])) , g_271) , l_1593);
lbl_1613:
            (*g_1441) = ((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(((*l_1605) &= ((1UL < (((func_25(p_7, ((&g_65 != ((((safe_mul_func_int8_t_s_s(((+(((*l_1603) = (*l_1436)) , 0x8E70AE57L)) >= ((void*)0 == &l_1513)), l_1604)) ^ p_6) , p_6) , &g_65)) || (**g_65)), p_6) , l_1519) , (*g_1441)) >= g_271)) ^ 0x95C27E5DC6F9481ELL)), 1L)), g_450)) & p_7) , l_1297[2]) , l_1562[0]);
            for (l_1480 = (-9); (l_1480 <= 56); ++l_1480)
            { 
                uint32_t l_1610[7] = {0xBBFBBB80L,0xBBFBBB80L,0xBBFBBB80L,0xBBFBBB80L,0xBBFBBB80L,0xBBFBBB80L,0xBBFBBB80L};
                int i;
                (*l_1594) = &l_1130[0];
                if (l_1566)
                    continue;
                (*l_1594) = &l_1106;
                for (l_1317 = 0; (l_1317 >= 3); ++l_1317)
                { 
                    return l_1610[6];
                }
                if (l_1604)
                    break;
            }
            for (g_880 = 0; (g_880 < 18); ++g_880)
            { 
                const int8_t l_1659 = 0xA0L;
                uint32_t l_1661 = 0xB40F3498L;
                int32_t *l_1663 = &g_118;
                int8_t *** const l_1664 = &g_527;
                const uint32_t *l_1680[7] = {&g_1681[0][0],&g_1681[0][0],&g_1681[0][0],&g_1681[0][0],&g_1681[0][0],&g_1681[0][0],&g_1681[0][0]};
                const uint32_t **l_1679 = &l_1680[0];
                uint32_t *l_1682 = &l_18;
                int32_t l_1683 = 2L;
                uint32_t ** const *l_1687 = &g_698;
                int16_t **l_1688[1][1][6] = {{{&l_1207,&g_521[1],&g_521[1],&l_1207,&g_521[1],&g_521[1]}}};
                int32_t l_1703 = 0xD49ED67FL;
                int32_t l_1705[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1705[i] = 0x09AB0FF2L;
                if (g_880)
                    goto lbl_1613;
                (*g_1441) = (safe_rshift_func_uint16_t_u_s((l_1616 , (((((safe_add_func_int16_t_s_s(((void*)0 == &g_467), ((p_6 <= p_6) | ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_1105, 65535UL)) | l_1616), p_6)) , (*g_528))))) , 0L) & 0xF9E80CFEL) > 0xF680L) <= 0x7858A96C38E904A3LL)), 5));
                (*g_1441) |= (safe_lshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(g_201, ((*g_528) , (safe_sub_func_uint16_t_u_u((((*l_1603) = (((*l_1593) <= (!(safe_lshift_func_uint16_t_u_s(65527UL, (l_1105 , (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((((((((safe_mod_func_uint8_t_u_u(p_7, (l_1123 &= (((safe_mul_func_uint8_t_u_u((~18446744073709551615UL), 0x44L)) ^ (*l_1436)) && 0x92L)))) , g_141) >= p_6) , (void*)0) == l_1645) == (*g_528)) < l_1107), 5)), g_197)), (**g_527)))))))) == p_6)) == p_7), l_1124))))) | l_1550) , 0UL), p_7)) & (*l_1436)) , (-1L)), 11));
                if ((*g_1441))
                { 
                    uint64_t l_1660 = 18446744073709551606UL;
                    (*l_1594) = &l_1124;
                    l_1124 ^= (((((*g_527) == (g_1646 = (void*)0)) | (*l_1593)) , ((p_7 , (safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s(p_7, ((**g_65) |= (l_1128[3] = (((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((0xF1FFBFFAF7B2A3E2LL <= (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((*l_1207) = ((l_1659 | 1L) & l_1562[1])), p_7)) != l_1660), 1L)) || l_1660) , g_84[1])) , (*g_528)), l_1660)) & l_1449), l_1661)) >= 0UL) | p_6))))), g_1662[3]))) > p_6)) < 0x11367E7E040D69D9LL);
                }
                else
                { 
                    l_1663 = &g_118;
                    (*l_1593) |= (*g_1441);
                }
                if (((l_1664 == &l_1165) > (safe_lshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s((*g_66), ((safe_div_func_uint64_t_u_u(g_238, (safe_div_func_int64_t_s_s((((*l_1428) = g_388[1][1]) < ((***l_1664) = (safe_mod_func_uint32_t_u_u(((*l_1682) = (safe_sub_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s(((((*l_1679) = (*g_698)) == l_1593) || 5UL), 0L)) & l_1131) > l_1124) && 255UL), (*l_1663)))), l_1238.f1)))), (**g_65))))) >= 0L))) ^ 0xF426L), 5))))
                { 
                    int32_t *l_1698 = &g_40;
                    int32_t *l_1699 = (void*)0;
                    int32_t *l_1700 = &g_38;
                    int32_t *l_1701 = (void*)0;
                    int32_t *l_1702[7][6][4] = {{{&l_1124,&g_1442,&l_1128[3],&l_1107},{&l_1124,&g_40,&l_1415[0],&l_1127},{&g_1442,&l_1389,&l_1130[1],&l_1105},{&l_1389,&g_1442,&l_1107,(void*)0},{(void*)0,&l_1130[1],&l_1106,(void*)0},{&g_1442,&g_40,&l_1379,&l_1130[1]}},{{&l_1124,(void*)0,&l_1389,&l_1204},{&g_270,&l_1127,&g_40,&l_1106},{&g_40,&l_1128[0],&l_1415[0],(void*)0},{&l_1204,&g_1442,&l_1130[0],&l_1130[0]},{&l_1127,&l_1130[1],&l_1415[0],&g_40},{&l_1130[0],&l_1415[0],&l_1124,&l_1127}},{{&l_1389,&l_1389,&l_1389,&l_1105},{(void*)0,&g_1442,&l_1127,&g_40},{&l_1124,&l_1107,(void*)0,&g_1442},{(void*)0,&l_1204,(void*)0,(void*)0},{&l_1124,&g_40,&l_1127,&l_1128[0]},{(void*)0,&l_1204,&l_1389,(void*)0}},{{&l_1389,(void*)0,&l_1124,&l_1130[1]},{&l_1130[0],&g_40,&l_1415[0],&l_1106},{&l_1127,&l_1123,&l_1130[0],&g_38},{&l_1204,&l_1204,&l_1415[0],&l_1415[0]},{&g_40,&l_1123,(void*)0,&l_1124},{&g_1442,&l_1389,&g_40,&l_1107}},{{(void*)0,&g_270,&l_1130[1],&l_1128[3]},{&l_1130[1],&l_1379,&g_1442,&l_1204},{&g_40,&l_1105,(void*)0,&l_1130[1]},{&l_1415[0],&l_1415[0],&l_1124,&l_1389},{&l_1107,&l_1389,&l_1379,&l_1415[0]},{&l_1124,&g_38,(void*)0,&g_40}},{{&g_38,&l_1379,&g_118,&l_1415[0]},{&l_1123,&l_1105,&l_1124,&l_1124},{&g_40,&g_40,&g_40,&l_1130[0]},{&l_1107,&l_1130[1],(void*)0,&l_1123},{&l_1415[0],&g_270,&g_38,(void*)0},{&l_1127,&g_270,(void*)0,&l_1123}},{{&g_270,&l_1130[1],&l_1204,&l_1130[0]},{&l_1130[0],&g_40,(void*)0,&l_1124},{(void*)0,&l_1105,(void*)0,&l_1415[0]},{&l_1415[0],&l_1379,&l_1128[3],&g_40},{&g_40,&g_38,&l_1130[1],&l_1415[0]},{&l_1123,&l_1389,(void*)0,&l_1389}}};
                    int8_t l_1704 = 7L;
                    int32_t l_1706[2][3][1] = {{{1L},{0L},{1L}},{{1L},{0L},{1L}}};
                    int i, j, k;
                    l_1683 |= (((*l_1593) <= p_6) ^ (4294967292UL & 4294967293UL));
                    (*l_1663) |= (l_1684 , ((*g_1441) = (safe_div_func_uint64_t_u_u((((255UL || (l_1687 == &l_1679)) > ((*l_1603) = (((**l_1664) != (void*)0) == ((void*)0 == l_1688[0][0][3])))) != g_40), p_7))));
                    l_1105 &= (g_1442 >= (safe_lshift_func_int8_t_s_s(((g_1681[0][0] == (~g_131[0][0][2].f0)) , (safe_rshift_func_int8_t_s_s(l_1317, ((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(g_1162[0], 12)) , (g_141 && (((**g_65) && (*l_1436)) && 0L))), (*l_1663))) == (**g_65))))), (*g_528))));
                    if ((*g_1441))
                        break;
                    l_1708++;
                }
                else
                { 
                    int32_t *l_1720 = &l_1415[2];
                    (*l_1593) ^= (safe_sub_func_uint64_t_u_u(((safe_div_func_int64_t_s_s((*g_66), ((*l_21) &= ((*l_1663) = ((void*)0 == &l_1684))))) , (((l_1715 , (l_1708 , l_1716)) != &g_518) & (*g_1441))), (*l_1436)));
                    (*l_1594) = l_1720;
                    return p_6;
                }
            }
        }
    }
    else
    { 
        uint32_t l_1721 = 8UL;
        return l_1721;
    }
    (*l_1722) = &g_38;
    if (((p_6 || ((&g_47 == &g_1162[1]) > ((((*l_598) = ((safe_sub_func_uint32_t_u_u(((*l_1725) ^= p_7), ((safe_unary_minus_func_int16_t_s(1L)) == (safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((*l_1739) = (safe_lshift_func_uint16_t_u_u(65533UL, 10))) == ((*g_527) == (*g_527))), 3)), 1)), l_1715.f0)), 0xF2ACF948D29A7493LL))))) ^ 65535UL)) , 6UL) && 0xFDFA7C0BL))) ^ 0x7FL))
    { 
        int32_t *l_1740 = (void*)0;
        int32_t *l_1741 = &g_38;
        (*l_1741) |= (l_1562[1] <= p_7);
    }
    else
    { 
        uint32_t l_1768 = 7UL;
        int8_t * const *l_1822 = &g_528;
        int8_t * const **l_1821[5] = {&l_1822,&l_1822,&l_1822,&l_1822,&l_1822};
        int8_t * const ***l_1820 = &l_1821[0];
        int32_t l_1833 = 0x780F9797L;
        int32_t l_1836 = 0L;
        int32_t l_1841 = 0x8747B92BL;
        int32_t l_1864 = 0L;
        int32_t l_1865 = 1L;
        int32_t l_1866 = 0xF66A527FL;
        int32_t l_1867 = 0x34A0EC9EL;
        uint8_t l_1868 = 0x85L;
        int32_t *l_1871 = &l_1833;
        int32_t *l_1872 = &g_270;
        int32_t *l_1873 = &l_1107;
        int32_t *l_1874 = &l_1833;
        int32_t *l_1875 = (void*)0;
        int32_t *l_1876[4] = {&l_1841,&l_1841,&l_1841,&l_1841};
        int i;
        for (g_24 = 0; (g_24 < 14); g_24 = safe_add_func_uint16_t_u_u(g_24, 9))
        { 
            int16_t *****l_1752 = &g_1750;
            int32_t l_1753 = (-3L);
            (*l_1722) = &g_1442;
            for (g_271 = 0; (g_271 <= 2); g_271++)
            { 
                int32_t *l_1746 = &l_1130[0];
                (*l_1722) = l_1746;
                if (((g_1152[0][0][1] >= ((*g_66) = (g_271 == ((*l_1207) = (((safe_mod_func_uint8_t_u_u(p_7, ((p_7 , ((((l_1752 = g_1749) == &g_518) , (void*)0) != (void*)0)) | p_6))) != (-1L)) >= l_1753))))) && p_6))
                { 
                    if ((*l_1746))
                        break;
                    if (p_6)
                        break;
                    return g_194[1];
                }
                else
                { 
                    uint64_t l_1769[4][7] = {{0x9091F5B28EA4357DLL,18446744073709551612UL,1UL,0x3BDAD158229BDF75LL,0x420CA8859BD2D138LL,18446744073709551611UL,18446744073709551611UL},{0x01708EEEAA49BA1CLL,0x420CA8859BD2D138LL,0x2390D35B20C52E4FLL,0x420CA8859BD2D138LL,0x01708EEEAA49BA1CLL,0UL,0x9091F5B28EA4357DLL},{18446744073709551607UL,18446744073709551612UL,18446744073709551611UL,1UL,0x01708EEEAA49BA1CLL,0x9091F5B28EA4357DLL,0x01708EEEAA49BA1CLL},{1UL,0xD30CD0CE07B9E7B6LL,0xD30CD0CE07B9E7B6LL,1UL,0x420CA8859BD2D138LL,1UL,18446744073709551607UL}};
                    int i, j;
                    (*l_1746) = (safe_sub_func_uint16_t_u_u((0x4BD3191FL <= (*l_1746)), 5L));
                    (*l_1746) = (((((safe_sub_func_uint32_t_u_u(p_6, (p_7 == (safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(p_6, (safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((*l_1746), 0x253DF65BL)), (l_1768 = ((safe_add_func_int8_t_s_s((((((void*)0 != &g_1505) > g_1178) > p_6) || 255UL), g_197)) , l_1753)))))), l_1753))))) , (void*)0) == &l_1550) , g_24) ^ p_6);
                    if ((*l_1746))
                        break;
                    return l_1769[1][4];
                }
            }
            for (l_1106 = 0; (l_1106 <= (-3)); l_1106 = safe_sub_func_uint16_t_u_u(l_1106, 6))
            { 
                int32_t ***l_1773 = (void*)0;
                int8_t l_1792 = 0x7FL;
                int32_t l_1793[5][6] = {{0x9F5E3F80L,(-10L),0x9F5E3F80L,0x9F5E3F80L,(-10L),0x9F5E3F80L},{0x9F5E3F80L,(-10L),0x9F5E3F80L,0x9F5E3F80L,0x9F5E3F80L,0x037F92D6L},{0x037F92D6L,0x9F5E3F80L,0x037F92D6L,0x037F92D6L,0x9F5E3F80L,0x037F92D6L},{0x037F92D6L,0x9F5E3F80L,0x037F92D6L,0x037F92D6L,0x9F5E3F80L,0x037F92D6L},{0x037F92D6L,0x9F5E3F80L,0x037F92D6L,0x037F92D6L,0x9F5E3F80L,0x037F92D6L}};
                int i, j;
                l_1774 = (g_540[0][5] = l_1772);
                l_1793[0][1] &= (safe_mod_func_int64_t_s_s(p_6, (((safe_div_func_uint64_t_u_u((((safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_6, ((~(p_7 && ((-3L) > g_1788[0][0][1]))) ^ (l_1789 && ((((safe_lshift_func_uint16_t_u_u(((((-6L) ^ (**g_65)) != p_6) != p_6), 7)) , p_7) , p_6) != p_6))))), l_1753)) ^ 0x92B53A82F16FC667LL), g_193[1])) , g_141) != g_238), 0x091203839A45DF26LL)) ^ 0x88A8L) & l_1792)));
            }
        }
        for (g_38 = 0; (g_38 == (-15)); g_38 = safe_sub_func_uint64_t_u_u(g_38, 3))
        { 
            int32_t **l_1796 = &g_541[3];
            int32_t ***l_1797 = &g_540[0][2];
            int32_t *l_1798 = &g_40;
            struct S0 l_1816 = {0xBAL,65535UL};
            int32_t l_1837 = 0xDC84EBFAL;
            int32_t l_1839 = (-4L);
            int32_t l_1840[5][7] = {{0xA1713BB7L,0x49824855L,0xA1713BB7L,0xA1713BB7L,0x49824855L,0xA1713BB7L,0xA1713BB7L},{0x49824855L,0x49824855L,9L,0x49824855L,0x49824855L,9L,0x49824855L},{0x49824855L,0xA1713BB7L,0xA1713BB7L,0x49824855L,0xA1713BB7L,0xA1713BB7L,0x49824855L},{0xA1713BB7L,0x49824855L,0xA1713BB7L,0xA1713BB7L,0x49824855L,0xA1713BB7L,0xA1713BB7L},{0x49824855L,0x49824855L,9L,0x49824855L,0x49824855L,9L,0x49824855L}};
            int32_t *l_1845 = (void*)0;
            int32_t *l_1846 = (void*)0;
            int32_t *l_1847 = &l_1833;
            int32_t *l_1848 = &l_1130[0];
            int32_t *l_1849 = &g_118;
            int32_t *l_1850 = &l_1836;
            int32_t *l_1851 = &l_1840[4][5];
            int32_t *l_1852 = &l_1837;
            int32_t *l_1853 = &l_1833;
            int32_t *l_1854 = (void*)0;
            int32_t *l_1855 = &g_1442;
            int32_t *l_1856 = &l_1839;
            int32_t *l_1857 = &l_1840[4][5];
            int32_t *l_1858 = (void*)0;
            int32_t *l_1859 = &l_1841;
            int32_t *l_1860 = &l_1837;
            int32_t *l_1861 = &l_1107;
            int32_t *l_1862 = &l_1106;
            int32_t *l_1863[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_1863[i] = &l_1837;
            (*l_1798) ^= (((*l_1797) = l_1796) == &g_541[5]);
            for (g_271 = 0; (g_271 != (-2)); --g_271)
            { 
                int64_t l_1801[5][6][1] = {{{1L},{(-10L)},{0xE53735FE565B8E8DLL},{(-10L)},{1L},{(-10L)}},{{0xE53735FE565B8E8DLL},{(-10L)},{1L},{(-10L)},{0xE53735FE565B8E8DLL},{(-10L)}},{{1L},{(-10L)},{0xE53735FE565B8E8DLL},{(-10L)},{1L},{(-10L)}},{{0xE53735FE565B8E8DLL},{(-10L)},{1L},{(-10L)},{0xE53735FE565B8E8DLL},{(-10L)}},{{1L},{(-10L)},{0xE53735FE565B8E8DLL},{(-10L)},{1L},{(-10L)}}};
                int32_t l_1819 = 0xA49C0C4DL;
                int32_t l_1827 = (-9L);
                int32_t l_1834 = (-3L);
                int32_t l_1835 = 0x8324EE7EL;
                int32_t l_1838[1];
                uint8_t l_1842 = 255UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1838[i] = 0x809A8F8AL;
                for (g_121 = 0; (g_121 <= 2); g_121 += 1)
                { 
                    int i;
                    l_1801[0][2][0] ^= l_1562[g_121];
                }
                if (((*l_1798) = (safe_lshift_func_int8_t_s_u((p_6 >= (((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u((0xA28CL > 65533UL), p_7)) , (void*)0) == &g_1505) < ((void*)0 != &l_1796)), (-1L))), g_22)) , (*g_66)) & p_6)), g_1810))))
                { 
                    uint64_t l_1811 = 18446744073709551615UL;
                    int8_t * const ****l_1823 = &l_1820;
                    int8_t * const ***l_1825[1];
                    int8_t * const ****l_1824 = &l_1825[0];
                    int32_t *l_1826 = (void*)0;
                    int32_t *l_1828 = &l_1130[0];
                    int32_t *l_1829 = &l_1130[1];
                    int32_t *l_1830 = &g_270;
                    int32_t *l_1831[2][5][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1825[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1831[i][j][k] = &g_1442;
                        }
                    }
                    l_1819 &= (l_1811 , (safe_unary_minus_func_int16_t_s(((*l_1798) = ((*l_1207) = (!(l_1768 | ((((((l_1801[0][2][0] != (safe_mod_func_int32_t_s_s((((l_1816 , (**g_1016)) , (((safe_mul_func_int8_t_s_s(((((*l_21) = p_6) != p_6) , p_7), (**g_527))) ^ p_6) || p_6)) || (*l_1798)), p_7))) < l_1768) , 0xE296D511L) || 0x6518CBAAL) >= 4294967295UL) || p_6))))))));
                    (*l_1798) = 0x56B58938L;
                    (*l_1824) = ((*l_1823) = l_1820);
                    ++l_1842;
                }
                else
                { 
                    l_1798 = &g_38;
                    return (*l_1798);
                }
            }
            ++l_1868;
            if ((*l_1850))
                continue;
        }
        (*l_1722) = &l_1130[0];
        ++l_1879;
    }
    return p_7;
}



static int32_t  func_8(int8_t  p_9, int32_t  p_10, int16_t  p_11, int32_t  p_12)
{ 
    int16_t *l_924 = &g_784;
    int32_t l_927 = 0x08802646L;
    int8_t *l_930[3];
    int32_t l_931[2][7] = {{0x29E08330L,0x1C11E6C1L,0x1C11E6C1L,0x29E08330L,0xBBC88F27L,0x29E08330L,0x1C11E6C1L},{0x12A257E1L,0x12A257E1L,0x1C11E6C1L,1L,0x1C11E6C1L,0x12A257E1L,0x12A257E1L}};
    int32_t l_932 = (-2L);
    int32_t l_933 = 1L;
    int32_t *l_966 = (void*)0;
    const int32_t l_980 = 0x419E1B81L;
    int16_t l_1032[1][6][4] = {{{0x9762L,0x9762L,1L,0x9762L},{0x9762L,0x1417L,0x1417L,0x9762L},{0x1417L,0x9762L,0x1417L,0x1417L},{0x9762L,0x9762L,1L,0x9762L},{0x9762L,0x1417L,0x1417L,0x9762L},{0x1417L,0x9762L,0x1417L,0x1417L}}};
    union U1 *l_1082 = &g_131[0][0][2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_930[i] = &g_255;
    if ((safe_rshift_func_int16_t_s_s((((void*)0 == l_924) <= (l_927 = (safe_add_func_uint64_t_u_u((((((l_927 > (l_927 && (0x1A490BF3BBFEB758LL >= (l_932 = (safe_rshift_func_int8_t_s_s((l_931[0][4] = ((**g_527) = (-7L))), 7)))))) < ((-8L) || l_927)) , l_932) & p_10) != 0L), p_10)))), l_933)))
    { 
        int32_t *l_934 = &l_931[0][4];
        (*l_934) = p_12;
    }
    else
    { 
        uint8_t l_944[2];
        int32_t l_957 = (-1L);
        int32_t **l_967 = &g_541[5];
        int32_t l_993 = 0x67DCB610L;
        int32_t l_994 = 2L;
        int32_t l_1039 = 0xEC94DE7AL;
        const int16_t * const *l_1065 = (void*)0;
        const int16_t * const ** const l_1064[6] = {&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065};
        int32_t l_1077 = 0xE5FD967FL;
        uint16_t l_1079 = 0xF146L;
        int i;
        for (i = 0; i < 2; i++)
            l_944[i] = 9UL;
        for (g_272 = 0; (g_272 <= 2); g_272 += 1)
        { 
            struct S0 *l_938[4];
            struct S0 **l_937 = &l_938[3];
            uint32_t *l_969[2][7] = {{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}};
            uint8_t *l_977 = &g_442;
            int16_t l_1019 = 0L;
            int32_t l_1021[1];
            uint16_t *l_1035[7][7][2];
            uint32_t l_1038 = 9UL;
            int32_t *l_1057 = (void*)0;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_938[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_1021[i] = 0x894EC3CBL;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1035[i][j][k] = (void*)0;
                }
            }
            if ((safe_rshift_func_int8_t_s_s((l_937 != &l_938[0]), g_239[g_272])))
            { 
                if (p_9)
                    break;
            }
            else
            { 
                struct S0 l_946 = {0x5FL,65535UL};
                int64_t l_962 = (-1L);
                for (g_201 = 0; (g_201 <= 2); g_201 += 1)
                { 
                    uint32_t *l_945 = &g_239[1];
                    int32_t **l_947 = (void*)0;
                    uint32_t *l_952 = &g_47;
                    int32_t *l_963[6][3][6] = {{{&l_932,&l_931[1][4],&l_927,&l_931[1][4],&l_932,(void*)0},{&l_932,&l_931[0][6],&l_931[1][4],(void*)0,&l_931[0][4],&l_931[0][4]},{&l_931[0][6],&l_932,&l_932,&l_931[0][6],&l_927,&l_931[0][4]}},{{&l_931[0][4],&l_931[0][4],&l_931[1][4],(void*)0,(void*)0,(void*)0},{&l_927,&l_931[0][4],&l_927,&l_933,(void*)0,&l_932},{&l_931[1][4],&l_931[0][4],&l_931[0][4],&l_927,&l_927,&l_931[0][4]}},{{&l_932,&l_932,&l_931[0][6],&l_927,&l_931[0][4],&l_933},{&l_931[1][4],&l_931[0][6],&l_932,&l_933,&l_932,&l_931[0][6]},{(void*)0,&l_931[0][4],&l_931[0][4],&l_931[0][6],&l_933,&l_931[1][4]}},{{&l_927,&l_931[0][6],&l_932,&l_932,&l_931[0][6],&l_927},{&l_932,&l_931[0][6],&l_927,&l_931[0][4],&l_933,&l_931[0][4]},{&l_931[0][4],&l_931[0][4],(void*)0,&l_931[0][4],&l_931[0][4],&l_931[0][6]}},{{&l_931[0][4],&l_932,&l_931[0][4],&l_931[0][4],&l_932,&l_932},{&l_932,&l_933,&l_933,&l_932,(void*)0,&l_932},{&l_927,&l_932,&l_931[0][4],&l_931[0][6],&l_931[0][4],&l_931[0][6]}},{{(void*)0,(void*)0,(void*)0,&l_931[1][4],&l_931[0][4],&l_931[0][4]},{&l_931[0][4],&l_932,&l_927,(void*)0,(void*)0,&l_927},{&l_933,&l_933,&l_932,(void*)0,&l_932,&l_931[1][4]}}};
                    int i, j, k;
                    g_247[0] = ((((safe_div_func_uint64_t_u_u(0x37AF7F55D09CFC9ALL, (safe_div_func_uint32_t_u_u(0xBC88DB6DL, p_9)))) <= (~((g_526 &= (0xD978A23E01687CCFLL | (l_944[0] < (**g_65)))) == (l_945 == (void*)0)))) , l_946) , (void*)0);
                    if (l_944[0])
                        continue;
                    l_931[0][4] = (safe_sub_func_int16_t_s_s(((p_9 |= p_11) > (safe_div_func_uint8_t_u_u((((g_388[g_201][g_272] &= ((0x6B579C0BL <= (++(*l_952))) & (safe_mul_func_uint8_t_u_u(p_12, ((l_957 &= p_11) != (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(l_946.f1, 5)) && 65533UL), p_11))))))) <= p_11) || l_962), l_944[0]))), 0x41A4L));
                    if (p_9)
                        continue;
                    if (p_11)
                        break;
                }
                for (g_22 = 0; (g_22 >= 16); g_22 = safe_add_func_uint8_t_u_u(g_22, 3))
                { 
                    int32_t *l_968[4] = {&l_933,&l_933,&l_933,&l_933};
                    int i;
                    l_966 = &g_40;
                    l_927 = ((*l_966) = (0UL || ((void*)0 != l_967)));
                }
            }
            if ((g_239[g_272] && ((g_197 = g_269) ^ (p_9 > ((g_526 < ((safe_sub_func_uint8_t_u_u(((*l_977) = ((~(safe_add_func_int64_t_s_s(p_12, (l_944[0] == (safe_div_func_int16_t_s_s(g_239[g_272], 1L)))))) > g_239[g_272])), 0xF7L)) < (*g_66))) != l_931[1][4])))))
            { 
                int8_t **l_981 = &g_528;
                uint16_t *l_982 = &g_755;
                int32_t l_991 = (-1L);
                int32_t l_995 = 0xE069AB6CL;
                if (((((*l_982) = (((((safe_div_func_uint32_t_u_u(0x90D2A7D1L, g_239[g_272])) <= ((((p_11 < (g_141 = (g_239[g_272] <= (((l_944[0] == ((0x95L != (p_10 <= p_12)) > p_11)) != p_12) >= 4294967288UL)))) > l_980) , l_981) != (void*)0)) | 0x10774D5C50720212LL) > 1L) , g_239[g_272])) == p_11) != (*g_528)))
                { 
                    int32_t *l_983 = &l_933;
                    int32_t *l_984 = &l_931[0][5];
                    int32_t *l_985 = (void*)0;
                    int32_t *l_986 = &g_38;
                    int32_t *l_987 = &l_933;
                    int32_t *l_988 = &g_118;
                    int32_t *l_989 = &g_118;
                    int32_t *l_990 = (void*)0;
                    int32_t *l_992[5];
                    uint8_t l_996[5][5] = {{251UL,251UL,250UL,251UL,251UL},{1UL,251UL,1UL,1UL,251UL},{251UL,1UL,1UL,251UL,1UL},{251UL,251UL,250UL,251UL,251UL},{1UL,251UL,1UL,1UL,251UL}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_992[i] = &g_270;
                    if (p_12)
                        break;
                    l_996[3][4]++;
                    p_10 = ((***g_517) != g_999);
                    if (p_10)
                        continue;
                }
                else
                { 
                    int64_t l_1018 = (-1L);
                    int32_t *l_1020[2][6] = {{(void*)0,&l_993,&l_993,(void*)0,&g_40,(void*)0},{(void*)0,&g_40,(void*)0,&l_993,&l_993,(void*)0}};
                    int i, j;
                    l_1021[0] ^= (safe_add_func_uint16_t_u_u((7UL == (((((*l_977) = ((((((void*)0 == l_981) >= ((((safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u(0UL, (safe_lshift_func_int16_t_s_s((*g_561), (((*g_528) = ((safe_div_func_uint8_t_u_u(0x2AL, (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((g_102 = g_102) == g_1016), p_10)), g_880)) | g_239[g_272]), 65535UL)))) <= (*g_528))) == p_12))))), 3L)) < g_194[1]) >= l_1018) == l_1019)) && l_980) , 4294967288UL) != l_993)) == 0UL) & 0x38072DBFL) != 0xB1B55B3816C3A92CLL)), g_201));
                    p_10 = (l_944[1] & l_995);
                    g_247[1] = &g_40;
                    l_931[1][5] |= (~l_944[0]);
                }
            }
            else
            { 
                int8_t *l_1027 = &g_371[1][3];
                uint16_t *l_1036[1][5][4] = {{{&g_755,&g_755,&g_755,&g_755},{&g_755,&g_755,&g_755,&g_755},{&g_755,&g_755,&g_755,&g_755},{&g_755,&g_755,&g_755,&g_755},{&g_755,&g_755,&g_755,&g_755}}};
                int32_t l_1037[3][5][7] = {{{0xA4F00724L,(-1L),0x4D5F365CL,1L,(-4L),0xBE05449CL,(-6L)},{0xF62E5046L,(-8L),(-1L),(-1L),(-8L),0xF62E5046L,0xA4F00724L},{0x4D5F365CL,(-6L),(-1L),(-1L),5L,0x734E6996L,(-8L)},{0x734E6996L,(-4L),0x4D5F365CL,0xF62E5046L,0xF4864D70L,(-8L),0xF4864D70L},{5L,(-6L),(-6L),5L,(-1L),(-1L),0xBE05449CL}},{{5L,(-8L),3L,(-4L),0x278801E4L,1L,(-1L)},{0x734E6996L,(-1L),0xBE05449CL,0xA4F00724L,0x4D5F365CL,0xA4F00724L,0xBE05449CL},{0x4D5F365CL,0x4D5F365CL,0x274C42FDL,0x58B0AE30L,1L,0xA4F00724L,0xF4864D70L},{0xF62E5046L,0x274C42FDL,0xF4864D70L,(-6L),0x734E6996L,1L,(-8L)},{0xA4F00724L,(-1L),1L,0xF4864D70L,1L,(-1L),0xA4F00724L}},{{(-1L),3L,0x274C42FDL,(-1L),0x734E6996L,(-4L),0x4D5F365CL},{5L,0xF62E5046L,0x58B0AE30L,0x4D5F365CL,(-1L),0xB115FD5DL,0xB115FD5DL},{0x58B0AE30L,(-6L),0x274C42FDL,(-6L),0x58B0AE30L,0xF4864D70L,0x278801E4L},{0x278801E4L,(-6L),(-1L),3L,(-1L),0xA4F00724L,(-1L)},{(-6L),0xF62E5046L,(-1L),0xBE05449CL,0x274C42FDL,0x274C42FDL,0xBE05449CL}}};
                int32_t *l_1040[6][6][2] = {{{&g_40,(void*)0},{(void*)0,(void*)0},{&g_40,&l_933},{&l_957,&g_38},{(void*)0,&l_993},{(void*)0,&l_933}},{{(void*)0,&l_993},{(void*)0,&g_38},{&l_957,&l_933},{&g_40,(void*)0},{(void*)0,(void*)0},{&g_40,&l_933}},{{&l_957,&g_38},{(void*)0,&l_993},{(void*)0,&l_933},{(void*)0,&l_993},{(void*)0,&g_38},{&l_957,&l_933}},{{&g_40,(void*)0},{(void*)0,(void*)0},{&g_40,&l_933},{&l_957,&g_38},{(void*)0,&l_993},{(void*)0,&l_933}},{{(void*)0,&l_993},{(void*)0,&g_38},{&l_957,&l_933},{&g_40,(void*)0},{(void*)0,(void*)0},{&g_40,&l_933}},{{&l_957,&g_38},{(void*)0,&l_993},{(void*)0,&l_933},{(void*)0,&l_993},{(void*)0,&g_38},{&l_957,&l_933}}};
                int i, j, k;
                p_10 ^= ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((3L && ((g_194[1] = 0x52E3L) < (((l_1027 == (*g_527)) <= (p_11 ^ (((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_1037[1][4][6] = (l_1032[0][0][2] , (safe_add_func_uint64_t_u_u((l_1035[3][5][0] != l_1036[0][0][1]), p_9)))), g_201)), g_118)) < 1UL) && 4UL))) , p_12))), l_1038)), 9L)) || l_1039);
            }
            for (g_47 = 0; g_47 < 2; g_47 += 1)
            {
                g_521[g_47] = &g_193[1];
            }
            if (p_12)
            { 
                uint8_t l_1056 = 7UL;
                for (g_270 = 1; (g_270 >= 0); g_270 -= 1)
                { 
                    int32_t **l_1051 = &l_966;
                    int i;
                    if (l_944[g_270])
                        break;
                    p_10 = (((*l_924) &= g_193[g_270]) || (l_944[1] , ((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((0xD540L > ((&p_10 != ((*l_1051) = &g_270)) > (((l_931[0][1] && ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((**g_527), g_388[2][1])), 0xF2E5L)) & p_10)) == p_10) < 65529UL))) != 65526UL) == l_931[0][2]), l_1056)), l_1056)) != 0xA80EB4AAL) != p_9), 1UL)), g_91.f0)), 7UL)) || p_10)));
                    (*l_1051) = l_1057;
                    return p_9;
                }
                if (p_10)
                    break;
            }
            else
            { 
                int32_t *l_1066 = &l_931[0][4];
                int32_t l_1076 = 1L;
                int32_t l_1078[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1078[i] = 0x605C899CL;
                (*l_1066) = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_91.f1, 6)), (safe_mul_func_uint8_t_u_u(0xD6L, ((void*)0 != l_1064[3])))));
                p_10 = ((*l_1066) = p_10);
                for (l_1039 = 2; (l_1039 >= 0); l_1039 -= 1)
                { 
                    int32_t *l_1067 = &l_932;
                    int32_t *l_1068 = &l_1021[0];
                    int32_t *l_1069 = &g_40;
                    int32_t *l_1070 = &l_993;
                    int32_t *l_1071 = &l_927;
                    int32_t *l_1072 = &l_927;
                    int32_t *l_1073 = &g_40;
                    int32_t *l_1074[6][1][4] = {{{&g_270,&g_270,&l_931[0][4],&g_270}},{{&g_270,&g_118,&g_118,&g_270}},{{&g_118,&g_270,&g_118,&g_118}},{{&g_270,&g_270,&l_931[0][4],&g_270}},{{&g_270,&g_118,&g_118,&g_270}},{{&g_118,&g_270,&g_118,&g_118}}};
                    int16_t l_1075 = 1L;
                    union U1 **l_1083[5][1] = {{&l_1082},{&l_1082},{&l_1082},{&l_1082},{&l_1082}};
                    int i, j, k;
                    ++l_1079;
                    g_247[0] = &l_931[1][6];
                    l_1082 = l_1082;
                }
            }
            if (l_944[0])
                break;
        }
    }
    return p_10;
}



static int8_t  func_13(int32_t  p_14, int64_t  p_15, struct S0  p_16, int32_t  p_17)
{ 
    uint16_t l_913 = 65535UL;
    for (g_24 = 0; g_24 < 6; g_24 += 1)
    {
        for (p_14 = 0; p_14 < 3; p_14 += 1)
        {
            for (g_141 = 0; g_141 < 6; g_141 += 1)
            {
                g_697[g_24][p_14][g_141] = (void*)0;
            }
        }
    }
    for (p_15 = 2; (p_15 >= 0); p_15 -= 1)
    { 
        uint32_t l_890 = 0xCC119F4BL;
        int32_t *l_891 = &g_38;
        uint16_t *l_892[5][3];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_892[i][j] = (void*)0;
        }
        (*l_891) = l_890;
        for (g_804 = 0; (g_804 <= 2); g_804 += 1)
        { 
            union U1 l_893 = {0xB4D73254C0656C47LL};
            const int32_t *l_896 = &g_118;
            int8_t **l_914 = &g_528;
            int32_t l_915 = (-5L);
            int32_t l_917 = 0xCED67A86L;
            (*l_891) |= (l_893 , p_17);
            for (g_255 = 2; (g_255 >= 0); g_255 -= 1)
            { 
                int32_t l_899 = 5L;
                uint64_t *l_912[1];
                int8_t *l_916[1][6];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_912[i] = &g_202;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_916[i][j] = &g_121;
                }
                l_896 = (((safe_rshift_func_int16_t_s_s((p_16.f1 && 0x63L), 10)) | p_16.f1) , (void*)0);
                (*l_891) = (safe_mul_func_uint16_t_u_u(((l_899 > (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((p_16.f0 && ((*g_66) , ((l_913 = (++g_388[0][0])) >= (l_915 = ((void*)0 != l_914))))), (l_917 |= ((*g_528) = p_16.f0)))), (safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_s(0xFAL, 3)))))) != 1UL), g_755)), 7)) , 0x62L), 0x36L))) , l_899), 0xA10FL));
            }
        }
    }
    return (*g_528);
}



static struct S0  func_25(uint32_t  p_26, int32_t  p_27, uint16_t  p_28)
{ 
    struct S0 l_604 = {255UL,65535UL};
    int16_t *l_612 = (void*)0;
    union U1 *l_613 = &g_131[0][0][2];
    uint32_t l_614 = 0xC145E632L;
    uint8_t l_631 = 2UL;
    int32_t l_633 = (-3L);
    int64_t ***l_651 = &g_501;
    union U1 l_652 = {0x18E04B44D90D084ELL};
    int32_t **l_722[5][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    const uint32_t *l_725[4][4] = {{&g_197,(void*)0,&g_197,&g_197},{&g_47,&g_47,&g_197,&g_197},{(void*)0,(void*)0,(void*)0,&g_197},{(void*)0,&g_197,&g_197,(void*)0}};
    struct S0 ***l_728 = &g_102;
    uint64_t l_752 = 0UL;
    int32_t l_768[5] = {1L,1L,1L,1L,1L};
    int32_t l_781 = 0xA26C5BA8L;
    int32_t l_783 = 0xC2C55D5CL;
    int16_t ****l_836 = (void*)0;
    int i, j;
    if ((safe_add_func_int16_t_s_s((g_91 , ((g_131[0][0][1] , (safe_mod_func_int8_t_s_s((~(((g_141 = (l_604 , (l_604.f1 > (safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(0x64F0L, (((safe_sub_func_uint64_t_u_u((!(((**g_519) = l_612) != ((l_613 != &g_131[0][0][2]) , l_612))), g_388[1][1])) && 0x85BCL) , p_28))) | 0xBDCD9FA0437A0470LL), l_604.f0))))) | g_131[0][0][2].f0) , 0x68D4L)), 0x82L))) , l_614)), p_28)))
    { 
        uint64_t l_619 = 18446744073709551611UL;
        int32_t *l_632 = (void*)0;
        struct S0 l_634 = {0xAFL,0x10CEL};
        l_633 &= (((((((safe_mul_func_uint8_t_u_u((0UL & (5L ^ (((safe_mul_func_int16_t_s_s(l_619, (!(((((safe_add_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((((0L <= (safe_sub_func_uint8_t_u_u(l_619, ((*g_517) == ((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((g_131[0][0][2] , g_91.f1), 4294967292UL)), 0x77L)) , (void*)0))))) == l_631) , 0x73F7A62BL), p_27)), 0xDC6C5738073B54D6LL)) & p_26) ^ p_28) && l_614) == g_91.f0)))) < (-1L)) | 1L))), 0xC0L)) && l_614) , &g_528) == (void*)0) == p_28) >= (-6L)) == p_26);
        return l_634;
    }
    else
    { 
        uint64_t l_653 = 9UL;
        int8_t *l_654 = (void*)0;
        int8_t *l_655 = &g_121;
        int32_t l_656 = 0x5E4DBF16L;
        uint64_t l_657[5][2][3] = {{{4UL,18446744073709551606UL,4UL},{18446744073709551615UL,0x6E15CC3A1C9D8DB3LL,18446744073709551615UL}},{{2UL,4UL,2UL},{18446744073709551615UL,0x6E15CC3A1C9D8DB3LL,18446744073709551615UL}},{{2UL,4UL,2UL},{18446744073709551615UL,0x6E15CC3A1C9D8DB3LL,18446744073709551615UL}},{{2UL,4UL,2UL},{18446744073709551615UL,0x6E15CC3A1C9D8DB3LL,18446744073709551615UL}},{{2UL,4UL,2UL},{18446744073709551615UL,0x6E15CC3A1C9D8DB3LL,18446744073709551615UL}}};
        union U1 l_658 = {18446744073709551612UL};
        const struct S0 *l_659[5][4][5] = {{{&l_604,&g_91,&l_604,&l_604,(void*)0},{&g_91,&g_91,&l_604,&l_604,&g_91},{&l_604,&g_91,&g_91,&g_91,&l_604},{&g_91,&l_604,&g_91,&g_91,&l_604}},{{&g_91,&l_604,&g_91,&l_604,&l_604},{&l_604,&g_91,&l_604,&l_604,&l_604},{&g_91,&l_604,(void*)0,(void*)0,&g_91},{&g_91,&l_604,&l_604,&g_91,(void*)0}},{{&l_604,&g_91,(void*)0,&g_91,&g_91},{&g_91,&l_604,&l_604,&g_91,(void*)0},{&l_604,&g_91,&g_91,&g_91,&l_604},{&l_604,&g_91,&g_91,&l_604,&l_604}},{{&g_91,&g_91,&g_91,&g_91,&g_91},{&l_604,&g_91,&l_604,(void*)0,&g_91},{&g_91,&l_604,&l_604,&g_91,&g_91},{&g_91,(void*)0,&g_91,&l_604,&g_91}},{{&l_604,&g_91,(void*)0,&g_91,&l_604},{&g_91,&g_91,&g_91,&g_91,&g_91},{&g_91,(void*)0,&g_91,&g_91,&l_604},{&l_604,&l_604,&l_604,&g_91,&g_91}}};
        int32_t l_769 = 0x274B3146L;
        int32_t l_771 = 5L;
        int32_t l_772 = 0x1DDA2C7FL;
        int32_t l_775 = 6L;
        int32_t l_779 = 0x6086E17AL;
        int32_t l_780[6][6][5] = {{{(-1L),0xA7A4013FL,(-1L),(-1L),(-1L)},{(-1L),(-1L),0L,(-1L),1L},{0xA7A4013FL,(-1L),(-1L),0xA7A4013FL,(-1L)},{0xA7A4013FL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),0L,0L},{(-1L),(-1L),(-1L),(-1L),0L}},{{(-1L),0xA7A4013FL,0L,0xA7A4013FL,(-1L)},{(-1L),0xA7A4013FL,(-1L),(-1L),(-1L)},{(-1L),(-1L),0L,(-1L),1L},{0xA7A4013FL,(-1L),(-1L),0xA7A4013FL,(-1L)},{0xA7A4013FL,(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),0L,0L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),1L},{1L,1L,(-1L),(-1L),0xA7A4013FL},{(-1L),(-1L),(-1L),(-1L),1L},{(-1L),(-1L),0L,0L,(-1L)}},{{1L,(-1L),0L,(-1L),(-1L)},{(-1L),1L,(-1L),0L,(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),1L},{1L,1L,(-1L),(-1L),0xA7A4013FL},{(-1L),(-1L),(-1L),(-1L),1L}},{{(-1L),(-1L),0L,0L,(-1L)},{1L,(-1L),0L,(-1L),(-1L)},{(-1L),1L,(-1L),0L,(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),1L},{1L,1L,(-1L),(-1L),0xA7A4013FL}},{{(-1L),(-1L),(-1L),(-1L),1L},{(-1L),(-1L),0L,0L,(-1L)},{1L,(-1L),0L,(-1L),(-1L)},{(-1L),1L,(-1L),0L,(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),1L}}};
        int64_t l_806 = 0x38A3698E89F0D04CLL;
        int i, j, k;
        if (((safe_rshift_func_int8_t_s_u((((g_131[0][0][2] , p_27) > 0xFCBBL) || g_57), 4)) >= l_653))
        { 
            const struct S0 **l_660 = (void*)0;
            const struct S0 **l_661 = &l_659[0][3][1];
            (*l_661) = (l_658 , l_659[0][3][1]);
        }
        else
        { 
            uint64_t l_668 = 0x0EE13ABE40DF9EB5LL;
            uint8_t *l_690[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            uint32_t ****l_696 = &g_695;
            int32_t *l_700 = &g_38;
            union U1 **l_715[2][3] = {{&l_613,(void*)0,&l_613},{&l_613,(void*)0,&l_613}};
            uint16_t *l_716 = &g_194[1];
            int i, j;
            for (l_614 = 0; (l_614 <= 1); l_614 += 1)
            { 
                const uint32_t *l_677 = &l_614;
                const uint32_t **l_676 = &l_677;
                const uint32_t ***l_678 = (void*)0;
                const uint32_t ***l_679 = &l_676;
                int i;
                for (g_526 = 0; (g_526 <= 1); g_526 += 1)
                { 
                    int32_t *l_662 = &l_633;
                    int32_t *l_663 = &g_40;
                    int32_t *l_664 = &g_40;
                    int32_t *l_665 = &l_656;
                    int32_t *l_666 = (void*)0;
                    int32_t *l_667 = &g_118;
                    --l_668;
                }
                (*l_679) = ((safe_add_func_uint8_t_u_u(g_84[l_614], (safe_lshift_func_uint8_t_u_u((p_27 | (!(p_28 &= 0xAF9CL))), (g_194[1] <= 0x44L))))) , l_676);
            }
lbl_717:
            p_27 = ((*l_700) |= (safe_mul_func_uint8_t_u_u(((((((safe_mul_func_int16_t_s_s((l_604 , ((safe_mul_func_int8_t_s_s(l_668, ((((l_633 = (safe_add_func_uint16_t_u_u(p_28, (safe_rshift_func_uint8_t_u_u((l_656 ^= g_194[1]), (safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(0x18L, ((((*l_696) = g_695) != g_697[5][0][2]) >= p_28))) && (**g_527)), p_26))))))) , 0x6372BD41L) && l_658.f0) , (*g_528)))) , 0x32C9L)), p_27)) , l_657[2][1][1]) , p_27) , (*g_528)) | g_201) <= l_631), (-1L))));
            l_656 = (((safe_mul_func_int16_t_s_s((((((safe_div_func_int8_t_s_s(0x3DL, (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((l_633 , ((*l_716) = ((safe_rshift_func_int16_t_s_s((p_26 | (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((-3L), ((0xBC91L & (((void*)0 == l_715[1][1]) || p_26)) <= l_657[2][0][1]))), (**g_527)))), 1)) ^ 4294967286UL))), p_26)) >= (*g_528)), 4)))) , 0xA6DEL) < p_27) && 0xF433888BL) & l_652.f0), p_27)) || l_614) < 0x730535F2F287EEEDLL);
            if (l_656)
                goto lbl_717;
        }
        if ((l_604.f0 >= 4UL))
        { 
            const uint32_t *****l_721[7];
            int16_t l_753[7] = {0xE451L,0xE451L,0xE451L,0xE451L,0xE451L,0xE451L,0xE451L};
            int32_t l_758 = (-5L);
            struct S0 *l_761 = &l_604;
            int32_t l_773 = (-1L);
            int32_t l_776 = 0xD1693446L;
            int32_t l_777[4][4][1] = {{{5L},{5L},{0L},{1L}},{{(-1L)},{1L},{0L},{5L}},{{5L},{0L},{1L},{(-1L)}},{{1L},{0L},{5L},{5L}}};
            int8_t l_782 = 0x17L;
            int32_t *l_793 = &l_777[3][3][0];
            uint32_t ****l_796 = &g_697[5][0][2];
            uint32_t *****l_795[1][2];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_721[i] = &g_720;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_795[i][j] = &l_796;
            }
lbl_809:
            if (p_28)
            { 
                int32_t **l_718 = (void*)0;
                g_247[1] = (void*)0;
                l_721[2] = g_719;
            }
            else
            { 
                int32_t ***l_723[6][4] = {{&g_540[0][1],(void*)0,(void*)0,&g_540[0][1]},{(void*)0,&g_540[0][1],(void*)0,(void*)0},{&g_540[0][1],&g_540[0][1],&l_722[0][1],&g_540[0][1]},{&g_540[0][1],(void*)0,(void*)0,&g_540[0][1]},{(void*)0,&g_540[0][1],(void*)0,(void*)0},{&g_540[0][1],&g_540[0][1],&l_722[0][1],&g_540[0][1]}};
                int32_t l_734 = 0L;
                int32_t l_770 = 0x37BB02E1L;
                int32_t l_774 = 0x66251CB8L;
                int32_t l_778[1][5][5] = {{{0x16C27E28L,0xBD592CB8L,0xBD592CB8L,0x16C27E28L,(-5L)},{0x16C27E28L,0x83AA880BL,0x1CC87EE8L,0x1CC87EE8L,0x83AA880BL},{(-5L),0xBD592CB8L,0x1CC87EE8L,0xA1C89938L,(-5L)},{0x83AA880BL,(-1L),0x83AA880BL,0xA1C89938L,(-5L)},{0x1CC87EE8L,0xBD592CB8L,(-5L),0xBD592CB8L,0x1CC87EE8L}}};
                uint8_t l_785 = 0x64L;
                int32_t *l_788 = (void*)0;
                int i, j, k;
                if (((g_540[0][1] = l_722[0][1]) != (void*)0))
                { 
                    struct S0 ***l_729[7][1][2] = {{{&g_102,&g_102}},{{&g_102,&g_102}},{{&g_102,&g_102}},{{&g_102,&g_102}},{{&g_102,&g_102}},{{&g_102,&g_102}},{{&g_102,&g_102}}};
                    int16_t *l_732 = (void*)0;
                    int16_t *l_733[2][4][7] = {{{&g_268,(void*)0,&g_268,(void*)0,&g_268,(void*)0,&g_268},{&g_193[1],&g_268,&g_268,&g_193[1],&g_193[1],&g_268,&g_268},{&g_268,(void*)0,&g_268,(void*)0,&g_268,(void*)0,&g_268},{&g_193[1],&g_193[1],&g_268,&g_268,&g_193[1],&g_193[1],&g_268}},{{&g_268,(void*)0,&g_268,(void*)0,&g_268,(void*)0,&g_268},{&g_193[1],&g_268,&g_268,&g_193[1],&g_193[1],&g_268,&g_268},{&g_268,(void*)0,&g_268,(void*)0,&g_268,(void*)0,&g_268},{&g_193[1],&g_193[1],&g_268,&g_268,&g_193[1],&g_193[1],&g_268}}};
                    int32_t *l_735 = &l_633;
                    uint8_t *l_739 = (void*)0;
                    uint8_t *l_740 = &g_442;
                    uint16_t *l_749 = &g_194[1];
                    uint16_t *l_754[6][3] = {{&g_755,&g_755,&g_755},{&g_755,&g_755,&g_755},{&g_755,&g_755,&g_755},{(void*)0,&g_755,&g_755},{&g_755,&g_755,&g_755},{&g_755,(void*)0,&g_755}};
                    int32_t *l_762 = &g_270;
                    int32_t *l_763 = &g_38;
                    int32_t *l_764 = &l_656;
                    int32_t *l_765 = &l_734;
                    int32_t *l_766 = &l_656;
                    int32_t *l_767[5] = {&g_38,&g_38,&g_38,&g_38,&g_38};
                    int i, j, k;
                    (*l_735) = (((~1UL) || ((void*)0 == l_725[1][1])) != ((safe_rshift_func_uint16_t_u_s((l_728 == l_729[4][0][1]), 5)) > (p_27 , (safe_mod_func_int16_t_s_s((l_656 = (l_734 = ((p_27 >= p_26) < 0xBC5DL))), p_26)))));
                    l_656 |= (~(g_239[1] , ((safe_div_func_int8_t_s_s((((*g_66) |= (g_388[1][0] || ((*l_740)++))) <= (l_653 != l_604.f0)), (-1L))) || ((p_28 = (safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((++(*l_749)) , ((p_28 || p_26) | l_752)) , 9UL), 0L)), l_753[6])), l_734))) <= l_753[6]))));
                    (*l_762) &= ((safe_mul_func_int16_t_s_s((*l_735), (l_758 ^= ((p_28 , p_27) <= g_388[0][1])))) > (safe_add_func_uint8_t_u_u((0xE7E7417316F9DF4ALL > ((*g_66) = (l_761 != (void*)0))), g_84[1])));
                    ++l_785;
                }
                else
                { 
                    int32_t **l_789 = &g_247[0];
                    l_788 = &p_27;
                    (*l_789) = &p_27;
                }
            }
            for (g_108 = 0; (g_108 >= (-9)); --g_108)
            { 
                int32_t **l_792[7];
                uint32_t *****l_794 = (void*)0;
                uint8_t *l_805 = &g_141;
                uint32_t l_808 = 0x3155172FL;
                uint32_t *l_818 = &g_197;
                uint16_t l_823 = 0x93D2L;
                int i;
                for (i = 0; i < 7; i++)
                    l_792[i] = (void*)0;
                l_793 = &l_768[2];
                l_795[0][1] = l_794;
                if ((0xDFL < (((((l_769 ^ (((!(((p_27 , ((*l_805) = ((safe_mul_func_uint16_t_u_u((((g_131[0][0][2].f0 ^ 0x0E639B5CB7AC97E0LL) < g_47) && ((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((0UL <= l_657[4][1][1]), p_26)), p_27)) <= g_804)), 0xC0A4L)) , 1UL))) , g_804) && g_47)) && 0x31556F67L) > (*g_66))) | (**g_527)) ^ l_806) || 255UL) && g_442)))
                { 
                    struct S0 l_807 = {0x91L,65531UL};
                    return l_807;
                }
                else
                { 
                    l_808 |= p_27;
                }
                if (l_631)
                    goto lbl_809;
                l_758 &= (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((*g_528) ^= ((safe_lshift_func_uint8_t_u_s(g_239[1], 3)) & ((*l_818) = (safe_mul_func_int16_t_s_s(p_27, p_26))))), (safe_sub_func_uint16_t_u_u((p_28 , (safe_rshift_func_uint16_t_u_s((0x7C999F7572DED0BDLL >= l_823), p_26))), p_28)))) , l_768[0]), 0));
            }
        }
        else
        { 
            struct S0 *l_838 = &g_91;
            struct S0 **l_837 = &l_838;
            int32_t l_842[4];
            uint32_t *l_870 = &l_614;
            int16_t **l_878[5][1][2] = {{{&l_612,&g_521[1]}},{{&g_521[1],&l_612}},{{&g_521[1],&g_521[1]}},{{&l_612,&g_521[1]}},{{&g_521[1],&l_612}}};
            uint64_t l_879[5];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_842[i] = 0xC4013E77L;
            for (i = 0; i < 5; i++)
                l_879[i] = 18446744073709551608UL;
            for (l_614 = 0; (l_614 < 1); ++l_614)
            { 
                int16_t l_832 = 0x0A58L;
                uint32_t *l_833 = &g_47;
                int64_t l_839 = 5L;
                struct S0 ***l_848[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_856 = (-7L);
                int32_t *l_889 = &l_856;
                int i, j;
                if ((safe_sub_func_int8_t_s_s((((-1L) | ((((*l_833) |= l_832) & (4294967295UL <= 5UL)) == ((safe_mul_func_int16_t_s_s(((void*)0 != l_836), ((((void*)0 == l_837) & l_768[2]) >= l_652.f0))) <= (-1L)))) , l_839), 0x5AL)))
                { 
                    int32_t **l_840 = &g_247[1];
                    struct S0 l_841 = {0x09L,0x9834L};
                    (*l_840) = l_833;
                    return l_841;
                }
                else
                { 
                    int32_t *l_843 = &l_633;
                    uint64_t l_857 = 18446744073709551606UL;
                    (*l_843) |= l_842[2];
                    if (l_832)
                        break;
                    (*l_843) = ((safe_mod_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(((((((l_848[0][2] == ((((safe_sub_func_int8_t_s_s((l_856 ^= ((((((safe_div_func_uint16_t_u_u(p_27, (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u((p_26 , g_255))), (((*l_838) , (*l_613)) , (((((((*l_843) >= 0UL) <= 65526UL) & l_653) ^ 2UL) & 0x13D4L) & (*g_528))))))) <= l_768[2]) >= p_27) & 1UL) || (*l_843)) , 0x92L)), l_631)) > l_839) , l_857) , l_728)) > l_842[2]) | 0UL) == 0x7DL) > 0xC361L) && l_631), l_657[2][0][1])) <= (*l_843)) > p_27), l_769)) ^ p_27);
                }
                if (((((safe_rshift_func_int8_t_s_s((0x4407FFD076AC0AB3LL >= (safe_div_func_int16_t_s_s(((l_839 > ((((safe_mod_func_uint16_t_u_u(((g_269 && ((p_27 || ((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((((((safe_add_func_int8_t_s_s((((l_870 = l_870) != ((*g_698) = l_833)) , ((((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((safe_div_func_uint16_t_u_u((+(~((*l_655) ^= ((g_141 > p_28) , p_28)))), (-9L))))), l_781)) >= 1UL) || g_269) & g_108)), 0xA3L)) && 0UL) , l_878[1][0][1]) != l_878[4][0][1]) && p_27) != g_388[0][2]), l_879[4])), 5)) ^ p_27) | g_526) >= 247UL)) | g_880)) , l_631), 0xAF8FL)) != g_194[1]) ^ 0xE086L) , (**g_65))) || l_771), p_28))), 0)) > g_450) , g_371[1][3]) <= (-1L)))
                { 
                    int32_t *l_887 = &l_780[1][0][4];
                    (*l_887) = (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_239[4], ((l_842[2] != (1UL != l_856)) & (safe_lshift_func_uint8_t_u_s(0x0CL, 4))))), 65535UL));
                }
                else
                { 
                    int32_t **l_888[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_888[i] = (void*)0;
                    l_889 = &p_27;
                    g_467 = (void*)0;
                    g_247[1] = &l_856;
                }
            }
        }
    }
    return l_604;
}



static uint32_t  func_29(int64_t * p_30, int64_t * p_31, int64_t  p_32, uint16_t  p_33, int64_t * const  p_34)
{ 
    int32_t *l_595[6] = {&g_270,&g_270,&g_270,&g_270,&g_270,&g_270};
    struct S0 *l_596[1][1];
    struct S0 **l_597 = &l_596[0][0];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_596[i][j] = &g_91;
    }
    l_595[2] = l_595[2];
    (*l_597) = l_596[0][0];
    return g_526;
}



static union U1  func_35(int8_t  p_36)
{ 
    int64_t l_37[2][7];
    int8_t * const l_290 = &g_121;
    int32_t l_295 = 4L;
    int32_t l_297 = 8L;
    int32_t l_299 = 0L;
    int32_t l_303 = 0x906D4D06L;
    int32_t l_308 = (-1L);
    int32_t l_309[3];
    struct S0 *l_331 = &g_91;
    struct S0 **l_330 = &l_331;
    int16_t *l_347 = &g_193[1];
    int16_t **l_346 = &l_347;
    int16_t l_376 = 0L;
    uint16_t *l_407 = &g_194[0];
    const int16_t ***l_412 = (void*)0;
    const int16_t ****l_411 = &l_412;
    union U1 l_440 = {0xA1E77EB65D125F12LL};
    int32_t *l_449 = &g_450;
    uint32_t l_487 = 0x27B2186DL;
    int64_t ***l_502 = &g_501;
    int64_t ***l_503 = &g_501;
    uint8_t l_516[5][2] = {{255UL,0xC7L},{255UL,255UL},{0xC7L,255UL},{255UL,0xC7L},{255UL,255UL}};
    uint16_t l_571[5][3] = {{2UL,0UL,2UL},{2UL,0x881FL,0UL},{0x881FL,2UL,2UL},{0UL,2UL,1UL},{0x8E6AL,0x881FL,0xA786L}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_37[i][j] = 0x28ABF8B243E5EC35LL;
    }
    for (i = 0; i < 3; i++)
        l_309[i] = 0xDE0BD541L;
    for (p_36 = 1; (p_36 >= 0); p_36 -= 1)
    { 
        union U1 l_39 = {0x2585FAFE44FA3FDALL};
        int32_t l_294[3][7][2] = {{{0x5D172392L,0x5D172392L},{0x74D66F8EL,0xDA48ED95L},{0x00320479L,0L},{0L,(-2L)},{0xFC018604L,0L},{(-1L),0x7A405C94L},{(-1L),0L}},{{0xFC018604L,(-2L)},{0L,0L},{0x00320479L,0xDA48ED95L},{0x74D66F8EL,0x5D172392L},{0x5D172392L,0xFC018604L},{0L,0xFC018604L},{0x5D172392L,0x5D172392L}},{{0x74D66F8EL,0xDA48ED95L},{0x00320479L,0L},{0L,(-2L)},{0xFC018604L,0L},{(-1L),0x7A405C94L},{(-1L),0L},{0xFC018604L,(-2L)}}};
        int32_t l_359 = 0x988E820BL;
        int64_t l_374 = 0x47E2376DFDD3D1E3LL;
        int32_t *l_392 = &l_299;
        int32_t **l_403 = (void*)0;
        int32_t **l_404 = &l_392;
        uint16_t *l_406[4][7] = {{&g_194[1],&g_194[1],&g_194[1],&g_194[1],&g_194[1],&g_194[1],&g_194[1]},{&g_194[0],&g_194[0],(void*)0,&g_194[0],&g_194[0],(void*)0,&g_194[0]},{&g_194[1],&g_194[1],&g_194[1],&g_194[1],&g_194[1],&g_194[1],&g_194[1]},{&g_194[1],&g_194[0],&g_194[1],&g_194[1],&g_194[0],&g_194[1],&g_194[1]}};
        uint16_t **l_405[1][6];
        int32_t *l_408[6];
        const int16_t * const **l_524 = (void*)0;
        const int16_t * const ***l_523 = &l_524;
        const int16_t * const ****l_522 = &l_523;
        int16_t **l_563 = &g_521[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_405[i][j] = &l_406[2][6];
        }
        for (i = 0; i < 6; i++)
            l_408[i] = &g_40;
        for (g_38 = 1; (g_38 >= 0); g_38 -= 1)
        { 
            return l_39;
        }
        for (g_38 = 0; (g_38 <= 1); g_38 += 1)
        { 
            int32_t l_291 = 1L;
            int32_t l_296 = 0x200AAEA3L;
            int32_t l_298 = 0x737CADD6L;
            int32_t l_300 = 1L;
            int32_t l_301 = 0xE0E62B9FL;
            int32_t l_302 = 0xC130D5CCL;
            int32_t l_304 = 0x92AB5C4EL;
            int32_t l_305 = (-1L);
            int32_t l_306 = 0L;
            int32_t l_307 = 2L;
            int32_t l_310 = (-1L);
            int32_t l_311 = (-8L);
            int32_t l_312[5] = {0x47A7E031L,0x47A7E031L,0x47A7E031L,0x47A7E031L,0x47A7E031L};
            int64_t **l_368 = (void*)0;
            int16_t *** const l_384 = &l_346;
            int16_t *** const *l_383 = &l_384;
            int32_t *l_391 = &l_312[1];
            int i;
            for (g_40 = 0; (g_40 <= 1); g_40 += 1)
            { 
                struct S0 l_45 = {1UL,0x0B7FL};
                int32_t *l_292 = &g_270;
                int32_t *l_293[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint16_t l_313 = 1UL;
                uint8_t *l_328 = &g_141;
                int32_t *l_329 = &l_291;
                int32_t l_352[4] = {(-9L),(-9L),(-9L),(-9L)};
                union U1 l_365 = {1UL};
                int64_t **l_366 = &g_66;
                int i, j;
                (*l_292) = (safe_add_func_uint32_t_u_u((((l_37[g_40][(g_38 + 2)] , (void*)0) == (func_43(l_45) , &l_37[1][2])) , ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_290 != &p_36), 0x4077L)), l_291)) , g_201)), 3L));
                l_313--;
                l_294[1][3][0] ^= (~((safe_mul_func_uint16_t_u_u((((*l_292) = (safe_lshift_func_int16_t_s_u(l_311, 3))) , 5UL), (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((((*l_329) = (g_271 , (safe_rshift_func_uint8_t_u_s(((*l_328) = (safe_unary_minus_func_uint8_t_u((((void*)0 == &l_37[g_40][(g_38 + 2)]) | (g_131[0][0][2] , (0x6CAFL != 0xF8C1L)))))), l_297)))) , l_330) != (void*)0), l_302)), p_36)))) == 0xA488L));
                if ((((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_36, (safe_mul_func_uint16_t_u_u((((*l_292) = 0xFD19086DL) && p_36), (l_39 , l_305))))), 3)) > (((g_108 < (p_36 | l_39.f0)) , 0xA7A387CFL) < 4294967290UL)), (-1L))), g_202)), p_36)) || p_36) > 0x0C62L))
                { 
                    int16_t ***l_348 = (void*)0;
                    int16_t ***l_349 = &l_346;
                    int32_t l_360 = 0x694DCDECL;
                    uint16_t *l_369 = &l_313;
                    int64_t **l_370[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_370[i] = &g_60;
                    (*l_349) = l_346;
                    if (l_294[2][1][1])
                        continue;
                    if (p_36)
                        continue;
                    (*l_292) |= (safe_rshift_func_uint16_t_u_u(l_352[3], (l_360 = (((0xDCEB6B3DL == (l_301 = p_36)) > (((-1L) | p_36) & ((safe_lshift_func_int16_t_s_s((g_271 ^= ((*l_347) = ((safe_rshift_func_uint8_t_u_s(((*l_328) = p_36), (safe_add_func_uint8_t_u_u(l_39.f0, l_359)))) > g_2))), g_194[1])) >= l_308))) || p_36))));
                    l_304 ^= ((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_118, p_36)) == (((l_359 > ((l_365 , l_366) != (((*l_369) = (~((((void*)0 == l_368) == 0xA7DFFA2BL) , g_270))) , l_370[0]))) , g_255) && g_371[1][3])), g_238)) > (-7L));
                }
                else
                { 
                    int16_t l_372 = 0x55F5L;
                    int32_t l_373 = 0xA4F82BEEL;
                    int32_t l_375 = 1L;
                    int32_t l_377[4];
                    uint32_t l_378[6][7] = {{0xF64F763DL,1UL,0xF64F763DL,1UL,0xF64F763DL,1UL,0xF64F763DL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0xF64F763DL,1UL,0xF64F763DL,1UL,0xF64F763DL,1UL,0xF64F763DL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0xF64F763DL,1UL,0xF64F763DL,1UL,0xF64F763DL,1UL,0xF64F763DL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
                    int32_t **l_381 = &l_293[6];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_377[i] = 0L;
                    l_378[2][3]++;
                    (*l_381) = (void*)0;
                }
                for (l_307 = 0; (l_307 <= 1); l_307 += 1)
                { 
                    int16_t *** const **l_385 = &l_383;
                    int32_t l_386 = 0x6CBF1957L;
                    int32_t l_387[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_387[i] = 0xB1D3F4D9L;
                    (*l_292) &= (safe_unary_minus_func_uint8_t_u((g_141 <= 0xA9CDL)));
                    (*l_385) = l_383;
                    if (l_304)
                        break;
                    ++g_388[0][0];
                    if (l_291)
                        break;
                }
            }
            (*l_391) = p_36;
            if (p_36)
                break;
            l_392 = ((&l_391 != (void*)0) , &g_38);
            for (l_291 = 0; (l_291 <= 1); l_291 += 1)
            { 
                int8_t l_396[6] = {7L,0xA2L,0xA2L,7L,0xA2L,0xA2L};
                int i;
                for (g_47 = 0; (g_47 <= 1); g_47 += 1)
                { 
                    int32_t *l_393 = (void*)0;
                    int32_t *l_394 = &l_312[2];
                    int32_t *l_395 = &l_294[1][3][0];
                    int32_t *l_397 = &l_297;
                    int32_t *l_398[1][3][1];
                    uint32_t l_399 = 4294967295UL;
                    union U1 l_402[7][1][5] = {{{{18446744073709551615UL},{0x5DD34847E49756D0LL},{18446744073709551615UL},{18446744073709551615UL},{3UL}}},{{{0xF1CC6B48333D8C60LL},{18446744073709551615UL},{0xC9A3680CAE5E2007LL},{18446744073709551615UL},{0xF1CC6B48333D8C60LL}}},{{{18446744073709551615UL},{18446744073709551615UL},{0x5DD34847E49756D0LL},{3UL},{18446744073709551615UL}}},{{{0xF1CC6B48333D8C60LL},{0x5DD34847E49756D0LL},{0x5DD34847E49756D0LL},{0xF1CC6B48333D8C60LL},{3UL}}},{{{18446744073709551615UL},{0xF1CC6B48333D8C60LL},{0xC9A3680CAE5E2007LL},{18446744073709551615UL},{18446744073709551615UL}}},{{{18446744073709551615UL},{0xF1CC6B48333D8C60LL},{18446744073709551615UL},{3UL},{0xF1CC6B48333D8C60LL}}},{{{18446744073709551615UL},{0x5DD34847E49756D0LL},{3UL},{18446744073709551615UL},{3UL}}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_398[i][j][k] = (void*)0;
                        }
                    }
                    --l_399;
                    return l_402[2][0][2];
                }
            }
        }
        if ((g_409 = ((((*l_404) = &l_294[1][3][0]) == (((l_407 = (void*)0) != (void*)0) , &g_38)) & g_197)))
        { 
            union U1 l_410 = {2UL};
            return l_410;
        }
        else
        { 
            int32_t *l_413 = &g_118;
            uint16_t l_424 = 0x3CDBL;
            struct S0 l_429 = {1UL,0UL};
            int32_t *l_448 = &l_359;
            int32_t **l_447 = &l_448;
            uint8_t *l_468[1][3];
            int32_t l_469[4] = {(-1L),(-1L),(-1L),(-1L)};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_468[i][j] = &g_141;
            }
            (*l_392) |= (l_411 == (void*)0);
            for (g_141 = 0; (g_141 <= 1); g_141 += 1)
            { 
                int16_t l_435 = (-8L);
                uint8_t *l_441 = &g_442;
                int16_t *l_443 = &l_435;
                l_413 = &g_270;
                (**l_404) &= (safe_div_func_uint32_t_u_u(g_121, (safe_unary_minus_func_int64_t_s((safe_mod_func_uint8_t_u_u(g_84[0], (safe_lshift_func_uint16_t_u_s(1UL, ((((*l_413) ^= (-1L)) >= (safe_add_func_uint32_t_u_u(((+l_424) , (safe_lshift_func_uint16_t_u_s((0x87160518L >= ((((safe_mod_func_uint64_t_u_u(((((p_36 < l_297) != 0x55396E05EC6BD980LL) != p_36) != 1L), 0xCEDE78F07ABB56E9LL)) , l_429) , 1L) == p_36)), 12))), 4294967295UL))) , 0x4EC4L)))))))));
                (**l_404) = (((*l_443) = (((*l_441) = ((safe_mul_func_uint16_t_u_u((~(safe_rshift_func_uint16_t_u_u((l_435 >= (safe_lshift_func_int8_t_s_u((p_36 >= (safe_div_func_int8_t_s_s(((((*l_347) = ((**l_330) , (l_440 , p_36))) & 0x8BE9L) ^ (g_131[0][0][2].f0 < l_435)), (-1L)))), l_309[2]))), l_435))), g_388[0][0])) , g_270)) >= 0xE7L)) , l_435);
            }
            l_469[1] ^= (((safe_unary_minus_func_uint8_t_u(g_255)) == p_36) >= (safe_mul_func_int16_t_s_s(((((*l_447) = l_413) == l_449) , p_36), ((safe_lshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((((*l_413) = (safe_sub_func_int8_t_s_s(0xC2L, (((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((((((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_440.f0 & 0xA77EL), g_131[0][0][2].f0)), p_36)) , g_467) != &l_407) != 1L) || 0xD072CA42L) ^ p_36), p_36)), (*l_413))) < g_84[1]), (*l_413))) == p_36) | 0x502CL)))) ^ 0x5AL), 0xCE6959D6B01C9FD3LL)) & p_36), 1)) != l_440.f0))));
        }
        for (g_268 = 0; (g_268 <= 1); g_268 += 1)
        { 
            struct S0 l_470 = {0x26L,0x8BB7L};
            int16_t *l_495 = &g_268;
            int32_t *l_568 = (void*)0;
            (*l_392) &= (l_470 , ((((*l_449) = (g_409 > (safe_mul_func_uint16_t_u_u((p_36 & ((p_36 , &g_247[1]) == ((((safe_unary_minus_func_int16_t_s(g_239[1])) >= (safe_sub_func_uint64_t_u_u(p_36, g_268))) | 6UL) , (void*)0))), 65532UL)))) , (void*)0) == (void*)0));
            for (g_40 = 1; (g_40 >= 0); g_40 -= 1)
            { 
                struct S0 **l_482 = &l_331;
                int32_t l_494 = 0x458D17BAL;
                union U1 *l_496 = &g_131[0][0][2];
                int32_t l_566 = 0L;
                for (g_270 = 1; (g_270 >= 0); g_270 -= 1)
                { 
                    if (l_299)
                        break;
                }
                if (((safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s(((safe_div_func_int64_t_s_s((-8L), ((l_482 != ((safe_sub_func_uint64_t_u_u((((((((safe_rshift_func_int16_t_s_s(((g_194[0] || 0x96D62F4968207F79LL) >= l_487), (safe_sub_func_int16_t_s_s((((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((l_470.f1 == 0x3768666F780B8A79LL) == 0x0560L), l_494)), 0x729D5E21L)) > p_36) < 0UL), (-1L))))) , p_36) > l_470.f1) ^ 0xCCECCE27L) , g_131[0][0][0]) , l_495) != l_406[2][6]), p_36)) , l_482)) , 5L))) > 0x3AL), 2UL)), (-1L))) || (*g_66)))
                { 
                    union U1 **l_497 = &l_496;
                    const int32_t *l_498 = &l_294[1][3][0];
                    const int32_t **l_499 = &l_498;
                    uint8_t *l_525 = &g_442;
                    if (p_36)
                        break;
                    (*l_497) = l_496;
                    (*l_499) = l_498;
                    (*l_392) = (((-1L) & (((l_502 = g_500) != l_503) && (safe_div_func_uint8_t_u_u(((((~((!(((*l_525) = ((safe_div_func_int32_t_s_s(0x941775C6L, (safe_sub_func_uint16_t_u_u((g_194[1] = (((safe_mod_func_uint16_t_u_u(((l_516[4][1] && (((((g_517 != l_522) , 0L) & p_36) <= l_494) >= 253UL)) != (-7L)), (***g_519))) == p_36) >= (-1L))), 0x4812L)))) > 0L)) != g_526)) | 0x37L)) , 0x22L) >= p_36) & (*l_498)), p_36)))) | 65535UL);
                    (*l_499) = (*l_404);
                }
                else
                { 
                    uint8_t l_535 = 1UL;
                    int32_t ***l_542 = &g_540[0][4];
                    uint8_t *l_545 = &g_141;
                    int16_t *l_556 = (void*)0;
                    int16_t *l_557 = &g_271;
                    const int16_t ***l_562 = &g_560[0][3][0];
                    uint32_t *l_567 = &g_197;
                    g_527 = g_527;
                    l_494 = (((((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(((***g_519) = ((safe_sub_func_int32_t_s_s(l_535, (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_542) = g_540[0][4]) != (void*)0), (*g_528))), 0x1FL)))) ^ ((safe_lshift_func_uint8_t_u_s((--(*l_545)), 2)) | (255UL <= 4UL)))), 0xA203L)) == (-1L)), l_494)) , g_269) != g_268) ^ 1L) > p_36);
                    (*l_392) ^= ((((*l_567) = (safe_add_func_int8_t_s_s(l_535, (p_36 <= (safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(((l_494 = ((safe_rshift_func_int16_t_s_s(((*l_557) &= (**g_520)), 0)) , ((((***g_519) |= (safe_mod_func_int32_t_s_s((((*l_562) = g_560[0][0][4]) == l_563), 0x2B4A7AD7L))) <= ((((safe_add_func_uint32_t_u_u(g_238, p_36)) | p_36) , l_470.f0) ^ 3L)) & 0x972FC327L))) & 0xB150L), l_440.f0)) <= (**g_527)) ^ l_566) || p_36), 1L)))))) ^ p_36) >= p_36);
                }
            }
            l_568 = l_568;
        }
        for (g_197 = 0; (g_197 <= 1); g_197 += 1)
        { 
            int32_t *l_569 = &l_309[2];
            struct S0 l_581 = {253UL,65528UL};
            int32_t l_590 = 0L;
            (*l_404) = l_569;
            for (g_40 = 1; (g_40 >= 0); g_40 -= 1)
            { 
                const int32_t l_570 = 0xE0B41486L;
                if (l_570)
                    break;
                (**l_404) = p_36;
                l_571[1][0]--;
                for (g_38 = 0; (g_38 <= 1); g_38 += 1)
                { 
                    (*l_569) |= l_570;
                }
            }
            for (g_121 = 1; (g_121 >= 0); g_121 -= 1)
            { 
                int32_t l_591 = 0x9FEC34AEL;
                int i, j;
                if ((**l_404))
                    break;
                if ((*l_392))
                    continue;
                (*l_392) = ((((safe_mul_func_int8_t_s_s((+(safe_sub_func_int8_t_s_s((0x919F354A2498A8C1LL || (safe_sub_func_uint8_t_u_u(p_36, ((l_581 , ((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((g_255 && (safe_rshift_func_uint16_t_u_u(l_309[2], 0))), (safe_mod_func_int64_t_s_s((l_37[g_197][(p_36 + 2)] &= ((0x44DE27A1L || p_36) | 0UL)), 0x0C8CA76D067266A0LL)))) , 250UL), l_590)) , l_516[4][1])) > l_591)))), g_442))), p_36)) >= 65535UL) || l_295) != g_2);
                for (g_118 = (-26); (g_118 <= 9); g_118 = safe_add_func_uint8_t_u_u(g_118, 6))
                { 
                    union U1 l_594[7] = {{0x2927BB66EC7165C7LL},{0x2927BB66EC7165C7LL},{0x2927BB66EC7165C7LL},{0x2927BB66EC7165C7LL},{0x2927BB66EC7165C7LL},{0x2927BB66EC7165C7LL},{0x2927BB66EC7165C7LL}};
                    int i;
                    return l_594[0];
                }
            }
            return l_440;
        }
    }
    return l_440;
}



static union U1  func_43(struct S0  p_44)
{ 
    uint32_t *l_46[3];
    int32_t l_48 = (-1L);
    int32_t l_49[2];
    int64_t *l_56 = &g_57;
    int64_t *l_59 = &g_57;
    int64_t **l_58[1];
    int64_t ***l_73[5];
    int64_t **l_74[7][4] = {{&g_60,&g_66,&g_66,&g_60},{&g_66,&g_60,(void*)0,(void*)0},{&g_66,(void*)0,&g_66,&g_66},{&g_60,(void*)0,&g_66,&g_66},{(void*)0,(void*)0,&l_59,(void*)0},{(void*)0,&g_60,&l_59,&g_60},{(void*)0,&g_66,&g_66,&l_59}};
    int32_t *l_85 = &l_48;
    struct S0 *l_105 = (void*)0;
    struct S0 **l_104 = &l_105;
    int8_t *l_185 = (void*)0;
    int8_t *l_186 = &g_121;
    uint64_t l_223[1];
    int32_t l_242 = 0x01276FEFL;
    int32_t l_279 = 0x19EBCAD0L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_46[i] = &g_47;
    for (i = 0; i < 2; i++)
        l_49[i] = 0xF12959AFL;
    for (i = 0; i < 1; i++)
        l_58[i] = &l_59;
    for (i = 0; i < 5; i++)
        l_73[i] = &l_58[0];
    for (i = 0; i < 1; i++)
        l_223[i] = 0UL;
    l_49[1] = ((g_47--) && (safe_add_func_int32_t_s_s((l_49[1] == ((l_48 = 8UL) != (l_56 != (g_60 = l_56)))), ((g_47 = (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((void*)0 != g_65) != (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0xBC1FL, p_44.f0)), g_40))), g_38)), l_49[1]))) > 0UL))));
    if (((safe_lshift_func_uint16_t_u_u((p_44.f1 == p_44.f1), 2)) , (l_48 = (0x74ABL ^ (((*g_65) != ((&g_66 != (l_74[3][2] = (void*)0)) , (*g_65))) , p_44.f0)))))
    { 
        union U1 l_79 = {0xFF6366113C509C0DLL};
        int64_t *l_80 = &g_57;
        int32_t l_83 = 0x6005BF03L;
        int32_t *l_87 = &l_49[0];
        int32_t **l_86 = &l_87;
        struct S0 **l_88 = (void*)0;
        struct S0 *l_90 = &g_91;
        struct S0 **l_89 = &l_90;
        struct S0 ***l_103[2];
        const int64_t *l_106 = &g_57;
        int16_t *l_107 = &g_108;
        int32_t *l_109 = (void*)0;
        int32_t *l_110 = &l_49[1];
        uint32_t l_111 = 0xAFAA48CCL;
        int i;
        for (i = 0; i < 2; i++)
            l_103[i] = &l_89;
        for (g_57 = 0; (g_57 >= 0); g_57 -= 1)
        { 
            int32_t l_81 = 0x7B54C1CEL;
            int32_t *l_82[1][6][5] = {{{&l_49[1],&l_81,&l_49[1],&l_81,&l_49[1]},{&l_49[1],&l_49[1],&l_49[1],&l_49[1],&l_49[1]},{&l_49[1],&l_81,&l_49[1],&l_81,&l_49[1]},{&l_49[1],&l_49[1],&l_49[1],&l_49[1],&l_49[1]},{&l_49[1],&l_81,&l_49[1],&l_81,&l_49[1]},{&l_49[1],&l_49[1],&l_49[1],&l_49[1],&l_49[1]}}};
            int i, j, k;
            l_83 = (safe_sub_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(0xF6B071CE904CDE8BLL, (((((p_44.f0 , 0x922B85AEL) ^ ((void*)0 != l_46[0])) , ((p_44.f1 && (((*g_65) = (((l_79 , p_44.f1) < (*g_66)) , l_80)) == (void*)0)) & g_40)) == p_44.f0) && l_79.f0))) && 0xC30F106BL), l_81));
            l_49[1] = (g_47 , (g_84[1] |= l_48));
        }
        (*l_86) = (l_85 = &l_48);
        (*l_89) = &p_44;
        (*l_110) &= (safe_sub_func_uint16_t_u_u((((&g_91 == &g_91) > (safe_add_func_uint32_t_u_u(p_44.f0, (safe_mul_func_int16_t_s_s((*l_85), ((safe_mul_func_int16_t_s_s(((*l_107) = (safe_sub_func_uint8_t_u_u((g_102 != (l_104 = &l_90)), ((g_91.f0 , l_80) != l_106)))), p_44.f0)) == (**l_86))))))) == (*l_85)), 0xDFBCL));
        ++l_111;
    }
    else
    { 
        int64_t l_119 = 8L;
        int8_t *l_120 = &g_121;
        int32_t l_128[7] = {0x2A80421AL,0x2A80421AL,1L,0x2A80421AL,0x2A80421AL,1L,0x2A80421AL};
        struct S0 *l_142[6] = {&g_91,&g_91,&g_91,&g_91,&g_91,&g_91};
        int i;
        if ((((*l_120) &= ((((l_104 = &l_105) != ((safe_rshift_func_uint16_t_u_u((((-1L) && g_108) <= (*g_66)), (((g_118 |= (g_2 <= (safe_div_func_uint16_t_u_u((0x313BL ^ 9L), 1UL)))) | l_119) && p_44.f1))) , (void*)0)) > p_44.f1) & p_44.f0)) <= g_84[1]))
        { 
            uint16_t l_125 = 0xA983L;
            int32_t **l_147 = &l_85;
            for (l_48 = 0; (l_48 <= 2); l_48 += 1)
            { 
                uint8_t *l_140 = &g_141;
                int32_t l_145[4][7] = {{0xAE2F6F5FL,0x8BFC0376L,0x8BFC0376L,0xAE2F6F5FL,0xAE2F6F5FL,0x8BFC0376L,0x8BFC0376L},{(-1L),0xC632DA6AL,(-1L),0xC632DA6AL,(-1L),0xC632DA6AL,(-1L)},{0xAE2F6F5FL,0xAE2F6F5FL,0x8BFC0376L,0x8BFC0376L,0xAE2F6F5FL,0xAE2F6F5FL,0x8BFC0376L},{1L,0xC632DA6AL,1L,0xC632DA6AL,1L,0xC632DA6AL,1L}};
                int32_t *l_146 = &g_118;
                int i, j;
                for (l_119 = 0; (l_119 <= 2); l_119 += 1)
                { 
                    int32_t *l_122 = &l_49[1];
                    int32_t *l_123 = &l_49[1];
                    int32_t *l_124 = (void*)0;
                    --l_125;
                    if (g_108)
                        break;
                    (*l_123) ^= g_84[0];
                    l_128[4] |= (-1L);
                }
                (*l_146) ^= (safe_mul_func_int8_t_s_s((g_131[0][0][2] , (((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((*l_140) = (p_44.f1 <= (-1L))), (((*l_104) = l_142[0]) != ((g_84[1] , ((*l_85) || (safe_sub_func_uint64_t_u_u(((void*)0 == &g_108), l_145[3][4])))) , (void*)0)))) , g_84[0]), p_44.f0)), 0xEEEE36A7L)) == g_2), (-1L))) & 9UL) ^ (*l_85))), l_128[3]));
                if (p_44.f1)
                    break;
            }
            (*l_147) = &l_49[0];
        }
        else
        { 
            struct S0 l_148 = {251UL,0x86EFL};
            int64_t *l_157[3][1][1];
            int8_t *l_167 = &g_121;
            int32_t *l_173 = &g_118;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_157[i][j][k] = &l_119;
                }
            }
            (*l_85) ^= (l_148 , (safe_mod_func_int32_t_s_s((&l_58[0] == &g_65), (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((l_157[2][0][0] == (*g_65)) , (safe_div_func_uint8_t_u_u(0x1AL, (safe_div_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(((~p_44.f1) <= g_2), 4294967288UL)) < 0xCA0CL) >= p_44.f1), 0xB5L))))), 0x0F799829L)), l_119)), p_44.f1)))));
            (*l_173) ^= ((*l_85) = ((((safe_sub_func_int64_t_s_s(((((*l_85) <= ((((void*)0 != l_167) <= (safe_mul_func_uint8_t_u_u((0x05L ^ 0x68L), l_148.f0))) <= (+(safe_mod_func_uint8_t_u_u(0x97L, g_131[0][0][2].f0))))) , g_102) == (void*)0), p_44.f1)) , (*g_65)) != (*g_65)) >= l_128[4]));
        }
    }
    if (((safe_div_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(g_91.f1, 12)) > (!((*l_85) , (safe_lshift_func_uint8_t_u_s(((((((-3L) > (65529UL != (safe_rshift_func_int8_t_s_s(g_47, 7)))) , ((((*l_186) = p_44.f1) && ((safe_div_func_uint16_t_u_u((g_91 , 0UL), 2L)) , g_2)) , p_44.f0)) ^ 65534UL) <= 65534UL) , 0UL), g_91.f1))))), 6UL)) | (*l_85)), g_118)) > p_44.f1))
    { 
        int32_t *l_191 = (void*)0;
        int32_t *l_192[2][2][3];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 3; k++)
                    l_192[i][j][k] = &g_118;
            }
        }
        (*l_85) = (65527UL < (~(!9L)));
        ++g_194[1];
        --g_197;
    }
    else
    { 
        int32_t *l_200[5][7][7] = {{{&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0]},{(void*)0,(void*)0,&g_40,(void*)0,(void*)0,&g_40,(void*)0},{(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0},{&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0},{&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0]}},{{(void*)0,(void*)0,&g_40,(void*)0,(void*)0,&g_40,(void*)0},{(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0},{&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0},{&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0]},{(void*)0,(void*)0,&g_40,(void*)0,(void*)0,&g_40,(void*)0}},{{(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0},{&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0},{&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0]},{(void*)0,(void*)0,&g_40,(void*)0,(void*)0,&g_40,(void*)0},{(void*)0,&l_49[0],&l_49[0],(void*)0,(void*)0,(void*)0,&l_49[0]}},{{&g_40,&g_118,&g_40,&g_40,&g_118,&g_40,&g_40},{&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0]},{&g_118,&g_40,&g_40,&g_118,&g_40,&g_40,&g_118},{(void*)0,&l_49[0],(void*)0,(void*)0,&l_49[0],(void*)0,(void*)0},{&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118},{&l_49[0],(void*)0,(void*)0,&l_49[0],(void*)0,(void*)0,&l_49[0]},{&g_40,&g_118,&g_40,&g_40,&g_118,&g_40,&g_40}},{{&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0]},{&g_118,&g_40,&g_40,&g_118,&g_40,&g_40,&g_118},{(void*)0,&l_49[0],(void*)0,(void*)0,&l_49[0],(void*)0,(void*)0},{&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118},{&l_49[0],(void*)0,(void*)0,&l_49[0],(void*)0,(void*)0,&l_49[0]},{&g_40,&g_118,&g_40,&g_40,&g_118,&g_40,&g_40},{&l_49[0],&l_49[0],(void*)0,&l_49[0],&l_49[0],(void*)0,&l_49[0]}}};
        int i, j, k;
        ++g_202;
        if (g_84[1])
        { 
            int32_t **l_205[2];
            int i;
            for (i = 0; i < 2; i++)
                l_205[i] = &l_85;
            l_200[0][4][0] = (void*)0;
        }
        else
        { 
            uint16_t l_210 = 0UL;
            int32_t l_216 = 0xDADEB26EL;
            int32_t l_218 = (-8L);
            const int16_t *l_222 = &g_201;
            int32_t l_277[2];
            int i;
            for (i = 0; i < 2; i++)
                l_277[i] = (-1L);
            for (g_47 = (-16); (g_47 != 44); g_47 = safe_add_func_int64_t_s_s(g_47, 6))
            { 
                union U1 l_208 = {0xE5B2E24D0F4EB8E8LL};
                int32_t l_209 = 8L;
                int32_t l_215[4] = {0xDB6F4733L,0xDB6F4733L,0xDB6F4733L,0xDB6F4733L};
                int i;
                for (g_108 = 3; (g_108 >= 0); g_108 -= 1)
                { 
                    return l_208;
                }
                l_210--;
                if ((safe_rshift_func_uint8_t_u_u(0xAAL, 5)))
                { 
                    int64_t l_217 = (-1L);
                    uint16_t *l_236 = &g_194[1];
                    int16_t *l_237 = &g_108;
                    g_219++;
                    l_223[0] = ((*l_85) = ((void*)0 == l_222));
                    g_118 &= ((8L <= ((safe_mod_func_int64_t_s_s((((void*)0 == &l_217) , ((safe_add_func_int16_t_s_s(((*l_237) = (safe_mod_func_int64_t_s_s(p_44.f0, (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((0x2BE1L <= 1UL), (safe_div_func_int16_t_s_s((((*l_236) = ((((((g_202 <= g_202) , (void*)0) == &g_47) ^ (*l_85)) != g_47) <= (**g_65))) > 0xEFE2L), g_121)))), g_91.f1))))), g_47)) < g_91.f0)), 1UL)) && p_44.f1)) <= g_219);
                }
                else
                { 
                    uint32_t l_243 = 18446744073709551615UL;
                    int32_t **l_246[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_246[i] = &l_200[1][4][0];
                    if (g_238)
                        break;
                    g_239[1]--;
                    l_243++;
                    g_247[1] = (l_85 = l_200[3][5][3]);
                    return g_131[2][0][2];
                }
                for (l_216 = 0; (l_216 != (-10)); --l_216)
                { 
                    int8_t *l_254 = &g_255;
                    int32_t **l_278 = &g_247[0];
                    int32_t l_280 = 0xED36F4B3L;
                    int32_t l_281 = 1L;
                    int32_t l_282[2];
                    uint64_t l_283 = 18446744073709551611UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_282[i] = 0x77CAAD7BL;
                    l_277[0] ^= (l_209 &= ((p_44.f1 | ((safe_mod_func_uint32_t_u_u(((*l_85) &= p_44.f0), (((l_218 |= ((safe_mod_func_int8_t_s_s(((*l_254) = ((*l_186) = l_216)), (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(p_44.f1, (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_197, ((0x14L < (safe_sub_func_int64_t_s_s((((++g_272) , (((((safe_rshift_func_int8_t_s_u(l_215[2], l_215[2])) ^ p_44.f1) & 1UL) <= g_201) <= p_44.f0)) ^ 1UL), 0xF66C19CA71FDF043LL))) & g_201))), 3)) || 0x738AL) <= g_238), 3UL)))) > 0x1AL), g_108)))) || g_202)) < p_44.f0) && p_44.f1))) || p_44.f0)) == 0x7399BAD2D41E9DDELL));
                    (*l_278) = &g_118;
                    --l_283;
                }
            }
            (*l_85) = p_44.f0;
        }
    }
    return g_131[0][0][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_131[i][j][k].f0, "g_131[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_193[i], "g_193[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_194[i], "g_194[i]", print_hash_value);

    }
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_239[i], "g_239[i]", print_hash_value);

    }
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_371[i][j], "g_371[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_388[i][j], "g_388[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1152[i][j][k], "g_1152[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1162[i], "g_1162[i]", print_hash_value);

    }
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1442, "g_1442", print_hash_value);
    transparent_crc(g_1522, "g_1522", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1662[i], "g_1662[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1681[i][j], "g_1681[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1788[i][j][k], "g_1788[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1810, "g_1810", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1923[i].f0, "g_1923[i].f0", print_hash_value);

    }
    transparent_crc(g_1946, "g_1946", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1997[i], "g_1997[i]", print_hash_value);

    }
    transparent_crc(g_2060, "g_2060", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2171[i], "g_2171[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
