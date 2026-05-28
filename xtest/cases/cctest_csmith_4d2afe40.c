// SPDX-License-Identifier: MIT
// cctest_csmith_4d2afe40.c --- cctest case csmith_4d2afe40 (csmith seed 1294663232)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1fa31a1c */
/* @exp_ticks 0x410c */

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

// Options:   -s 1294663232 -o /tmp/csmith_gen_slu4fm2t/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   int32_t  f1;
   int64_t  f2;
};

union U1 {
   int8_t  f0;
   const uint32_t  f1;
   uint32_t  f2;
};


static int32_t g_2 = 0x7DC4B4E1L;
static uint16_t g_12 = 0x977AL;
static uint8_t g_41[1] = {0x61L};
static int32_t g_74[2][5][3] = {{{0x9CC13236L,0x9CC13236L,0x9CC13236L},{0xF0C0ED6DL,0xF0C0ED6DL,0xF0C0ED6DL},{0x9CC13236L,0x9CC13236L,0x9CC13236L},{0xF0C0ED6DL,0xF0C0ED6DL,0xF0C0ED6DL},{0x9CC13236L,0x9CC13236L,0x9CC13236L}},{{0xF0C0ED6DL,0xF0C0ED6DL,0xF0C0ED6DL},{0x9CC13236L,0x9CC13236L,0x9CC13236L},{0xF0C0ED6DL,0xF0C0ED6DL,0xF0C0ED6DL},{0x9CC13236L,0x9CC13236L,0x9CC13236L},{0xF0C0ED6DL,0xF0C0ED6DL,0xF0C0ED6DL}}};
static uint64_t g_77 = 0x8B24CEC8E4446CA3LL;
static uint16_t g_78[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static uint64_t g_80 = 18446744073709551615UL;
static struct S0 g_81[1] = {{0xA5L,0xD8FDC3C1L,0x33FE8F1E0EF155D2LL}};
static uint16_t g_89 = 65531UL;
static int8_t g_92 = 0x77L;
static uint8_t g_94[3][1][4] = {{{0UL,0UL,0x5FL,0UL}},{{0UL,8UL,8UL,0UL}},{{8UL,8UL,0x5FL,0x5FL}}};
static uint16_t g_117 = 0xBA6CL;
static union U1 g_133[4] = {{0x1FL},{0x1FL},{0x1FL},{0x1FL}};
static int64_t g_144 = (-1L);
static uint32_t g_149 = 0x46617F50L;



static int16_t  func_1(void);
static int8_t  func_6(int32_t  p_7, uint16_t  p_8);
static uint64_t  func_13(uint64_t  p_14);
static struct S0  func_18(uint8_t  p_19, uint32_t  p_20, const int64_t  p_21, struct S0  p_22);




static int16_t  func_1(void)
{ 
    int16_t l_102 = 4L;
    int32_t l_116 = 1L;
    int32_t l_118 = 1L;
    int32_t l_135 = 0x0574D264L;
    for (g_2 = (-12); (g_2 > (-25)); g_2--)
    { 
        uint32_t l_5 = 6UL;
        int32_t l_146[3][3][2] = {{{6L,0xA64A4A93L},{6L,6L},{0xA64A4A93L,6L}},{{6L,0xA64A4A93L},{6L,6L},{0xA64A4A93L,6L}},{{6L,0xA64A4A93L},{6L,6L},{0xA64A4A93L,6L}}};
        struct S0 l_147 = {1UL,0L,0xBA02A555199DCED9LL};
        int i, j, k;
        if (((g_2 >= (l_5 & func_6(l_5, g_2))) <= g_2))
        { 
            int32_t l_105 = (-3L);
            l_118 = (g_117 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(l_102, (safe_rshift_func_uint8_t_u_s(l_105, g_74[0][3][2])))), (safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((l_116 = ((((((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((g_94[2][0][0] = 0x87L), 6)), l_102)), l_102)) < g_81[0].f2) >= 0xC633F4C6L) >= 18446744073709551615UL) && g_81[0].f1) ^ 0xB7DE593F29F9B9B7LL)), g_92)) >= l_5), l_105)))), g_74[1][3][0])));
        }
        else
        { 
            struct S0 l_119 = {253UL,0xFE8BAC28L,0x5E52A12E219839B2LL};
            int32_t l_134 = (-9L);
            uint8_t l_143 = 1UL;
            g_81[0] = l_119;
            if (((g_78[0] != (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((g_92 = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((~((l_116 , ((l_135 = (((safe_sub_func_uint8_t_u_u((g_133[2] , 0xDCL), 0xFEL)) , l_134) , g_74[1][4][0])) >= g_92)) , 1UL)), l_118)), l_118))), g_78[0])) && 0x99ADA34CL), 0x31L)) < 0xA2C9F03BL), g_133[2].f0))) <= l_5))
            { 
                return g_12;
            }
            else
            { 
                int8_t l_142 = 1L;
                int32_t l_145[2];
                struct S0 l_148 = {0xE2L,1L,0x36175416565E8320LL};
                int i;
                for (i = 0; i < 2; i++)
                    l_145[i] = 0x27A2C147L;
                l_145[1] |= (g_144 = (safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(0xB3L, ((l_5 ^ (-1L)) >= (safe_div_func_int64_t_s_s(((l_142 ^ l_119.f1) || 0x605DBDBD1F826527LL), l_143))))) ^ g_41[0]) != l_116), 0x0F31L)));
                l_146[0][2][0] = g_117;
                g_81[0] = (l_148 = l_147);
            }
        }
        if (g_149)
            break;
        return g_2;
    }
    return g_149;
}



static int8_t  func_6(int32_t  p_7, uint16_t  p_8)
{ 
    int32_t l_11 = (-4L);
    uint32_t l_17 = 2UL;
lbl_95:
    g_92 |= (safe_div_func_int8_t_s_s(0xA5L, ((g_12 = l_11) | func_13((safe_add_func_int16_t_s_s((p_7 == g_2), l_17))))));
    g_94[0][0][0] = (safe_unary_minus_func_int8_t_s((-7L)));
    if (g_77)
        goto lbl_95;
    return g_78[1];
}



static uint64_t  func_13(uint64_t  p_14)
{ 
    struct S0 l_23 = {0UL,8L,0x790412894FF5452FLL};
    union U1 l_24 = {1L};
    int32_t l_86 = 0x0016C6A4L;
    l_23 = func_18((l_23 , (l_24 , (safe_mul_func_int8_t_s_s((-1L), (((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(1UL, p_14)), l_23.f1)), p_14)) > p_14), l_24.f0)) , p_14) & g_2))))), p_14, l_23.f0, l_23);
    for (l_23.f1 = (-22); (l_23.f1 >= (-11)); l_23.f1 = safe_add_func_int8_t_s_s(l_23.f1, 4))
    { 
        l_86 = 0x29AFBAE3L;
        for (l_23.f2 = 0; (l_23.f2 < 19); ++l_23.f2)
        { 
            --g_89;
        }
    }
    for (p_14 = 0; p_14 < 1; p_14 += 1)
    {
        g_41[p_14] = 255UL;
    }
    return g_41[0];
}



static struct S0  func_18(uint8_t  p_19, uint32_t  p_20, const int64_t  p_21, struct S0  p_22)
{ 
    int16_t l_35[3][5] = {{(-1L),0x9634L,(-1L),1L,(-7L)},{0xFA89L,0xB62BL,(-7L),0xB62BL,0xFA89L},{(-1L),0xB62BL,0x9634L,0xFA89L,0x9634L}};
    int32_t l_38 = 0x649690B2L;
    uint16_t l_79[5] = {1UL,1UL,1UL,1UL,1UL};
    struct S0 l_83 = {0xF1L,0x8E5B495AL,0x89E6D542D3F7CC82LL};
    int i, j;
lbl_82:
    l_35[1][3] |= p_20;
    if ((((g_2 | (safe_mul_func_int8_t_s_s(l_38, (safe_sub_func_int32_t_s_s(g_2, (g_41[0] = ((((p_22.f0 = 8UL) != g_2) , (-1L)) && 0L))))))) || g_2) & 0x5AL))
    { 
        int16_t l_46 = 2L;
        g_80 = ((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_46, (safe_mod_func_uint8_t_u_u((g_78[0] = ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(g_2, 3)), ((safe_div_func_int16_t_s_s(((g_77 &= (((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((+(g_74[0][4][1] ^= (safe_rshift_func_int8_t_s_s((0x4DCDL >= (safe_rshift_func_int16_t_s_s(((p_19--) > (g_41[0]++)), 9))), 4)))), (safe_sub_func_int32_t_s_s((l_35[1][3] , 0x88558B04L), 4294967290UL)))), 0x2AA0L)) >= l_35[2][4]), (-8L))) | l_46), l_46)) < p_22.f1), 0x7C19L)) , 6UL) != l_46)) , l_35[1][2]), g_2)) & p_20))) ^ l_46)), 0xBDL)))), g_2)) < l_79[0]);
        l_38 = ((g_41[0] |= 0x78L) <= (-4L));
    }
    else
    { 
        for (p_20 = 0; (p_20 <= 0); p_20 += 1)
        { 
            for (g_77 = 0; (g_77 <= 0); g_77 += 1)
            { 
                int i;
                if (g_41[g_77])
                    break;
                return g_81[0];
            }
            g_81[0] = p_22;
            for (p_19 = 0; (p_19 <= 0); p_19 += 1)
            { 
                p_22 = g_81[0];
            }
        }
        if (p_19)
            goto lbl_82;
    }
    return l_83;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_41[i], "g_41[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_74[i][j][k], "g_74[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_81[i].f0, "g_81[i].f0", print_hash_value);
        transparent_crc(g_81[i].f1, "g_81[i].f1", print_hash_value);
        transparent_crc(g_81[i].f2, "g_81[i].f2", print_hash_value);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_94[i][j][k], "g_94[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_133[i].f0, "g_133[i].f0", print_hash_value);

    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
