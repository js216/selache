// SPDX-License-Identifier: MIT
// cctest_csmith_efa88396.c --- cctest case csmith_efa88396 (csmith seed 4020798358)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3b5a3212 */
/* @exp_ticks 0x46fa */

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

// Options:   -s 4020798358 -o /tmp/csmith_gen_48as5tuo/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint64_t  f1;
   const int32_t  f2;
   const uint32_t  f3;
   uint32_t  f4;
   int32_t  f5;
};

union U1 {
   struct S0  f0;
};

union U2 {
   int8_t  f0;
};


static int32_t g_11[1][5] = {{8L,8L,8L,8L,8L}};
static uint32_t g_14 = 0xD3EC93CCL;
static const union U2 g_21[1] = {{0xD1L}};
static uint64_t g_71 = 0x50CF10AA6F331A9DLL;
static int32_t g_72[5][2] = {{(-1L),0L},{0L,(-1L)},{0L,0L},{(-1L),0L},{0L,(-1L)}};
static union U1 g_73 = {{65535UL,0x819A8027267125BDLL,0L,0xC7E6801BL,0x4C643A56L,-7L}};
static union U1 g_78 = {{0x212EL,18446744073709551608UL,0xAE4714FEL,0x0FE05587L,1UL,0x8548DC09L}};
static uint32_t g_89[4][4] = {{0x204C5B33L,0x204C5B33L,0x204C5B33L,0x204C5B33L},{0x204C5B33L,0x204C5B33L,0x204C5B33L,0x204C5B33L},{0x204C5B33L,0x204C5B33L,0x204C5B33L,0x204C5B33L},{0x204C5B33L,0x204C5B33L,0x204C5B33L,0x204C5B33L}};
static uint8_t g_96 = 0x5AL;
static uint32_t g_137 = 0x10D3AC03L;
static uint8_t g_161 = 0x1EL;
static int64_t g_162 = 0x342C4FA8936D0663LL;
static uint64_t g_182 = 2UL;
static int16_t g_229 = 1L;
static int32_t g_257[4] = {0L,0L,0L,0L};
static uint16_t g_259 = 1UL;
static int16_t g_261 = 4L;



static const int32_t  func_1(void);
static struct S0  func_2(uint16_t  p_3, int16_t  p_4, int32_t  p_5, union U1  p_6);
static uint8_t  func_7(int32_t  p_8, const int16_t  p_9, union U1  p_10);
static int64_t  func_17(const union U2  p_18, uint64_t  p_19, int16_t  p_20);




static const int32_t  func_1(void)
{ 
    int64_t l_12 = 0x85B6478C38EC3268LL;
    int32_t l_13 = 0xD238E486L;
    uint32_t l_128 = 4UL;
    int16_t l_138 = (-9L);
    int32_t l_157 = 0L;
    int32_t l_195 = 0xA18D4A03L;
    int32_t l_196 = 0xFC4EB74DL;
    int64_t l_197 = 0L;
    int32_t l_198 = 0x0FA09440L;
    int32_t l_200 = 0xF35227E0L;
    int32_t l_201 = 0xA97C014DL;
    int32_t l_203 = 0L;
    int16_t l_205 = (-1L);
    int32_t l_208[3];
    uint32_t l_210[3][3][3] = {{{9UL,1UL,0xA8175423L},{9UL,9UL,1UL},{4294967286UL,1UL,1UL}},{{1UL,9UL,0xF0D61F29L},{0xA8175423L,9UL,0xA8175423L},{1UL,4294967286UL,0xF0D61F29L}},{{1UL,1UL,4294967286UL},{0xA8175423L,4294967286UL,4294967286UL},{4294967286UL,9UL,0xF0D61F29L}}};
    int8_t l_221 = (-10L);
    union U2 l_234 = {-1L};
    uint8_t l_235 = 0xDCL;
    int16_t l_258 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_208[i] = 0xDAEAB580L;
    if ((((g_96 = (func_2((g_73.f0.f0 = (func_7(((l_13 = ((g_14++) ^ ((((func_17(g_21[0], ((safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(0xE67684593F6A0837LL, l_12)), (safe_unary_minus_func_int8_t_s(l_12)))) , l_13), l_12) ^ l_13) == l_12) <= g_21[0].f0) | g_11[0][2]))) == (-7L)), g_11[0][2], g_73) || l_13)), l_12, g_11[0][2], g_78) , g_72[1][1])) , g_89[2][3]) ^ g_21[0].f0))
    { 
        uint32_t l_97 = 4294967295UL;
        int32_t l_100 = 0L;
        uint32_t l_107[4];
        int32_t l_110 = 0xC5E8AE31L;
        int32_t l_111 = 0xE5A8B3B0L;
        int32_t l_112 = 6L;
        int32_t l_113 = (-1L);
        union U1 l_124 = {{0xA8D4L,18446744073709551610UL,0x573AC2B9L,0x8980C300L,1UL,0L}};
        int i;
        for (i = 0; i < 4; i++)
            l_107[i] = 18446744073709551613UL;
        if (l_12)
        { 
            int64_t l_105 = 0xAE0D986BD2DA3065LL;
            int32_t l_108 = 8L;
            uint32_t l_114 = 2UL;
lbl_125:
            if (l_97)
            { 
                uint8_t l_106[5] = {246UL,246UL,246UL,246UL,246UL};
                int32_t l_109 = 2L;
                int i;
                l_108 = ((safe_add_func_int64_t_s_s(g_73.f0.f4, ((l_100 = g_72[1][0]) , 0x677FA2621F7AE596LL))) <= (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((((-5L) & g_73.f0.f2) > g_78.f0.f0), l_105)) <= l_106[3]), l_107[2])));
                l_114++;
                if (g_73.f0.f2)
                    goto lbl_125;
                l_109 |= (func_2(((g_78.f0.f4 = (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(l_13, (l_114 & (0UL < ((!(safe_add_func_uint8_t_u_u(l_110, l_113))) < 1L))))), l_106[3]))) , 4UL), l_113, g_72[2][1], l_124) , 0x3997128CL);
            }
            else
            { 
                return g_72[2][1];
            }
            for (l_124.f0.f5 = (-13); (l_124.f0.f5 > (-7)); l_124.f0.f5 = safe_add_func_uint32_t_u_u(l_124.f0.f5, 8))
            { 
                int64_t l_149[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_149[i][j] = 0L;
                }
                g_137 = (g_72[2][1] = (((((g_73.f0.f0 ^= (g_72[0][1] & l_128)) & ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_108 = 249UL), (5UL <= 0xFEL))), g_11[0][1])), 0L)), 7)) | g_11[0][4])) && 0x097536633CC6ED5ELL) || l_13) == g_72[2][0]));
                l_108 = (0x1BD501287A51E9EBLL && ((((((((l_124 , ((l_138 , (((l_138 || g_73.f0.f4) & 0x2AA92F95BF6126C6LL) < l_138)) < g_73.f0.f2)) , g_72[2][1]) || 0L) > l_111) , l_13) , g_21[0]) , l_12) ^ g_78.f0.f1));
                l_108 = (((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_137, ((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(255UL, (l_111 = (1L ^ (l_110 = ((safe_rshift_func_uint8_t_u_u((--g_96), g_11[0][2])) ^ g_137)))))) || (-3L)), g_73.f0.f3)) , g_73.f0.f1))), l_13)) >= g_73.f0.f0) > l_149[0][0]);
            }
        }
        else
        { 
            uint32_t l_156 = 0UL;
            l_156 = ((safe_div_func_uint32_t_u_u(((g_89[2][2] & (g_73 , 65532UL)) == (safe_mod_func_int8_t_s_s((((g_73.f0.f4 < 0x10F1C41FL) , 9UL) >= 3L), 0x6CL))), 0x5E00D4B9L)) > (-8L));
        }
    }
    else
    { 
        uint64_t l_158 = 0x83FB63F38E196A49LL;
        --l_158;
        g_162 ^= (0x5B04L != g_161);
    }
    if ((safe_rshift_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_13, (l_12 , (~l_13)))), ((safe_add_func_int64_t_s_s((l_13 == g_78.f0.f1), g_78.f0.f5)) > 0x9EL))) >= (-1L)) <= g_137) > g_78.f0.f2), 7)))
    { 
        uint32_t l_174[3];
        int32_t l_175 = 0xBF3B3623L;
        int32_t l_181[5][5] = {{(-7L),(-7L),(-7L),(-7L),(-7L)},{(-10L),0x308B9188L,(-10L),0x308B9188L,(-10L)},{(-7L),(-7L),(-7L),(-7L),(-7L)},{(-10L),0x308B9188L,(-10L),0x308B9188L,(-10L)},{(-7L),(-7L),(-7L),(-7L),(-7L)}};
        int32_t l_191 = 0x030E86BAL;
        int32_t l_192 = 0x55C4BC6AL;
        int32_t l_193 = 0xD5365362L;
        int32_t l_194 = 0xA3E22E11L;
        int32_t l_199 = 0x8F5B9073L;
        int32_t l_202 = 0xF61B098AL;
        int32_t l_204 = 0x89B94875L;
        int32_t l_206 = 0x38E51102L;
        int32_t l_207 = (-3L);
        int32_t l_209[1][5] = {{0xC0D73073L,0xC0D73073L,0xC0D73073L,0xC0D73073L,0xC0D73073L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_174[i] = 18446744073709551608UL;
        for (g_14 = 0; (g_14 > 43); g_14++)
        { 
            uint64_t l_176 = 0xE68E44B7FDB35930LL;
            g_72[2][0] &= l_174[2];
            l_176++;
        }
        for (l_138 = 0; (l_138 >= 17); ++l_138)
        { 
            int32_t l_186 = 0xC22193E6L;
            int32_t l_187 = 0x3F029002L;
            g_182--;
            for (g_78.f0.f4 = 0; (g_78.f0.f4 <= 3); g_78.f0.f4 += 1)
            { 
                int i, j;
                g_72[2][1] = (safe_unary_minus_func_uint64_t_u((l_181[(g_78.f0.f4 + 1)][g_78.f0.f4] , l_181[(g_78.f0.f4 + 1)][g_78.f0.f4])));
            }
            for (g_78.f0.f4 = 0; (g_78.f0.f4 <= 3); g_78.f0.f4 += 1)
            { 
                uint16_t l_188 = 1UL;
                int i, j;
                l_188++;
                if (g_89[g_78.f0.f4][g_78.f0.f4])
                    continue;
                g_72[2][0] = l_174[2];
            }
        }
        l_210[0][0][1]++;
    }
    else
    { 
        uint8_t l_228 = 0UL;
        g_229 ^= (((g_73.f0.f4 == (--g_161)) <= ((g_72[4][1] , (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((l_157 = l_221) && ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_221, l_228)), g_89[2][2])), g_137)) > l_228)), 0L)) <= 0xF2D1L), g_11[0][3])), g_73.f0.f4))) != (-1L))) == g_72[2][1]);
    }
    if ((((safe_mul_func_int16_t_s_s((l_196 >= (safe_mod_func_uint64_t_u_u((l_234 , (g_11[0][3] | ((l_203 , l_235) <= g_78.f0.f3))), l_221))), g_182)) ^ l_13) ^ g_73.f0.f4))
    { 
        int64_t l_239 = (-7L);
        for (g_78.f0.f4 = 1; (g_78.f0.f4 > 3); g_78.f0.f4 = safe_add_func_uint64_t_u_u(g_78.f0.f4, 1))
        { 
            int16_t l_242 = 0xFF29L;
            int32_t l_243 = (-1L);
            if ((g_72[4][0] |= ((g_89[2][2] | (safe_unary_minus_func_uint16_t_u(l_12))) ^ ((l_239 == (safe_mod_func_uint8_t_u_u(0xF3L, l_242))) ^ 0xE077B5E0L))))
            { 
                return g_96;
            }
            else
            { 
                l_243 = (l_208[2] & 0UL);
            }
            if (g_21[0].f0)
                break;
        }
        for (l_235 = 0; (l_235 <= 1); l_235 += 1)
        { 
            uint64_t l_246 = 18446744073709551615UL;
            int32_t l_260 = 0x8B3BC116L;
            int64_t l_272[3][2] = {{5L,0xF3B63973B462A510LL},{5L,5L},{0xF3B63973B462A510LL,5L}};
            uint8_t l_275[5][5][1] = {{{0x0FL},{0xCCL},{0x0FL},{0x0FL},{0xCCL}},{{0x0FL},{0x0FL},{0xCCL},{0x0FL},{0x0FL}},{{0xCCL},{0x0FL},{0x0FL},{0xCCL},{0x0FL}},{{0x0FL},{0xCCL},{0x0FL},{0x0FL},{0xCCL}},{{0x0FL},{0x0FL},{0xCCL},{0x0FL},{0x0FL}}};
            union U2 l_277 = {0xC1L};
            int i, j, k;
            l_208[0] = (g_261 = (((((++g_73.f0.f0) < (l_246 = 4L)) && (g_71--)) , ((l_260 &= (safe_mod_func_int8_t_s_s((g_259 ^= (((safe_mul_func_int8_t_s_s((g_257[3] = (safe_add_func_uint32_t_u_u(0x3D060EDEL, (g_14++)))), (l_239 < (((((((((g_78.f0.f1 = l_246) == g_73.f0.f0) , 0UL) , 255UL) || g_162) > l_258) < 0x76L) && (-1L)) , 0x98AFD053127A17F3LL)))) , l_246) ^ 0xA0E7L)), l_239))) & l_239)) , g_78.f0.f5));
            for (l_258 = 3; (l_258 >= 0); l_258 -= 1)
            { 
                int i, j;
                g_72[(l_235 + 2)][l_235] = (((safe_div_func_int8_t_s_s((((safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((g_72[(l_235 + 2)][l_235] , ((safe_sub_func_int32_t_s_s(g_78.f0.f3, l_239)) < (safe_div_func_int8_t_s_s((g_182 & g_72[(l_235 + 2)][l_235]), g_78.f0.f2)))) == 0x71C5E754A42A48A9LL) >= l_272[1][1]), g_162)), 0xFD493A947ED1C2D4LL)) , l_239) & l_12), 0x5AL)) | g_78.f0.f4) , g_72[(l_235 + 2)][l_235]);
                g_72[2][0] = (safe_rshift_func_int16_t_s_u(((l_275[3][2][0] > (g_161 = (0x8C2E6879L & ((!(l_277 , g_161)) , l_275[3][2][0])))) ^ g_78.f0.f4), 1));
            }
        }
    }
    else
    { 
        uint32_t l_292 = 0x8684C553L;
        int32_t l_293[1];
        uint16_t l_346[2][4][5] = {{{1UL,1UL,1UL,65535UL,0xA12EL},{1UL,1UL,0xA685L,1UL,1UL},{1UL,0x86C4L,0UL,65535UL,1UL},{0UL,0x86C4L,1UL,1UL,0x86C4L}},{{0xA685L,1UL,1UL,0x86C4L,1UL},{1UL,1UL,1UL,0xF049L,1UL},{1UL,1UL,1UL,0xA685L,0xA12EL},{1UL,0xA12EL,0UL,0xA685L,0xA685L}}};
        int32_t l_359 = 4L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_293[i] = 0xD6C61763L;
        if (g_11[0][2])
        { 
            int8_t l_278 = 0x5AL;
            g_72[4][1] = l_278;
        }
        else
        { 
            uint64_t l_283 = 9UL;
            l_293[0] ^= (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(l_221, ((l_283 = g_257[3]) ^ (safe_sub_func_uint16_t_u_u(l_138, (((g_96--) , (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(7UL, 9L)) >= 0x85A876B3CF8E8213LL), l_292))) >= g_78.f0.f3)))))), g_11[0][2]));
        }
        for (l_12 = 0; (l_12 < 12); l_12 = safe_add_func_uint8_t_u_u(l_12, 5))
        { 
            uint8_t l_306 = 250UL;
            int32_t l_307 = 0x6BECCCDAL;
            l_307 = (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(4L, l_293[0])) == (g_89[0][2] = (safe_add_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((l_293[0] | ((safe_add_func_uint32_t_u_u((g_137 = (((((l_306 < 0x2FD6FEC25883E4B1LL) && g_78.f0.f0) ^ 1L) == 1UL) > g_89[1][1])), g_72[2][1])) ^ l_203)), g_182)) <= g_229), l_306)))), 9));
            if (g_182)
                continue;
            if (g_73.f0.f4)
                continue;
        }
        if (((!(0x910637C8973B3B5CLL >= (l_292 > l_128))) >= ((safe_lshift_func_int16_t_s_s(g_73.f0.f3, g_78.f0.f3)) >= g_78.f0.f5)))
        { 
            int32_t l_327 = (-8L);
            l_327 = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(l_210[1][1][1], (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(((0xAF094154L ^ l_293[0]) >= g_73.f0.f3), 6UL)) <= l_293[0]), g_89[2][2])), 14)), g_161)), g_72[2][1])))), l_200)), l_221));
        }
        else
        { 
            int8_t l_339[3][5][3] = {{{0L,5L,0L},{0x97L,0xA1L,(-8L)},{7L,1L,(-8L)},{0xF2L,7L,0L},{0x9CL,0x9CL,0x97L}},{{0xF2L,0x97L,7L},{7L,0x97L,0xF2L},{0x97L,0x9CL,0x9CL},{0L,7L,0xF2L},{(-8L),1L,7L}},{{(-8L),0xA1L,0x97L},{0L,5L,0L},{0x97L,0xA1L,(-8L)},{7L,1L,(-8L)},{0xF2L,7L,0L}}};
            uint8_t l_358 = 0x28L;
            int32_t l_360[2][3][5] = {{{1L,1L,(-1L),(-1L),(-1L)},{(-1L),(-1L),(-7L),(-1L),5L},{1L,1L,1L,1L,(-1L)}},{{1L,(-1L),0L,0L,(-1L)},{(-1L),1L,0L,(-1L),(-1L)},{(-1L),5L,(-1L),(-7L),(-1L)}}};
            int i, j, k;
            for (g_14 = 9; (g_14 == 40); g_14 = safe_add_func_int16_t_s_s(g_14, 3))
            { 
                l_293[0] = l_292;
            }
            g_72[3][0] = (((--g_78.f0.f1) || (safe_rshift_func_int8_t_s_s((1UL || ((l_12 > (safe_sub_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((--g_73.f0.f0))), (((safe_mod_func_int64_t_s_s(l_293[0], (safe_div_func_uint32_t_u_u((g_78 , l_203), l_205)))) ^ g_14) , 4UL))) <= g_162), l_205))) < 0x1E63L)), 6))) == g_72[2][1]);
            if ((g_257[2] <= (l_346[0][1][1] != 0x25L)))
            { 
                int8_t l_357 = 0x83L;
                int32_t l_368 = 1L;
                l_360[1][1][4] = (l_359 |= ((safe_rshift_func_uint16_t_u_u((~(((g_161 | ((safe_unary_minus_func_int16_t_s((((((safe_add_func_uint32_t_u_u(((0xF19BAF28728338B1LL <= (safe_add_func_int16_t_s_s(1L, (safe_div_func_int32_t_s_s((g_257[3] = (l_196 && 0x067F046263974364LL)), l_210[0][0][1]))))) || g_162), l_357)) | l_358) <= l_157) < l_339[2][1][2]) && l_346[0][1][3]))) >= 0x5AF559F1L)) > g_78.f0.f1) ^ 0x57DA97F9D90B8971LL)), g_78.f0.f0)) || (-5L)));
                l_368 = (safe_add_func_int32_t_s_s(((++g_78.f0.f1) <= 6L), (!((safe_div_func_uint16_t_u_u(0x2531L, 9UL)) == g_96))));
                g_257[3] = (~(safe_rshift_func_int8_t_s_u(g_162, 1)));
            }
            else
            { 
                uint8_t l_377 = 0xDDL;
                l_293[0] &= (safe_mul_func_int8_t_s_s(((((+l_358) || (((safe_rshift_func_int8_t_s_u(l_377, 3)) , ((safe_add_func_uint8_t_u_u((g_96 = ((g_73.f0 , g_182) || 0x3E07E041AA28781ALL)), (-7L))) , l_205)) && 0x4210E2D0E202D368LL)) | 0UL) < g_162), g_73.f0.f0));
            }
        }
    }
    return l_128;
}



static struct S0  func_2(uint16_t  p_3, int16_t  p_4, int32_t  p_5, union U1  p_6)
{ 
    uint32_t l_88 = 18446744073709551612UL;
    struct S0 l_95[2] = {{0xD5D6L,18446744073709551613UL,0x01E86021L,0x9A735059L,0UL,0x99A04901L},{0xD5D6L,18446744073709551613UL,0x01E86021L,0x9A735059L,0UL,0x99A04901L}};
    int i;
    for (g_14 = (-28); (g_14 < 5); ++g_14)
    { 
        int64_t l_90 = 0x2DE0ECAC02D6B031LL;
        int32_t l_91 = 0L;
        if ((p_6.f0 , ((g_21[0] , (18446744073709551615UL == ((0xB7FBL & g_78.f0.f4) == 1UL))) != g_73.f0.f3)))
        { 
            for (g_78.f0.f0 = 0; (g_78.f0.f0 <= 0); g_78.f0.f0 += 1)
            { 
                int i, j;
                l_91 = (g_11[g_78.f0.f0][g_78.f0.f0] & (((!((((safe_lshift_func_int16_t_s_s((0L & (+g_72[2][1])), 2)) , (((safe_sub_func_int8_t_s_s((g_89[2][2] &= ((~(((1UL > l_88) , 0x77L) && g_71)) || 0xFD253E6AFD11FF24LL)), p_6.f0.f2)) | g_73.f0.f3) , 0x77CBL)) <= (-6L)) == l_90)) ^ 254UL) <= 0x55D1L));
            }
        }
        else
        { 
            for (g_78.f0.f5 = 0; (g_78.f0.f5 <= 3); g_78.f0.f5 += 1)
            { 
                uint16_t l_92 = 7UL;
                --l_92;
            }
        }
        return g_73.f0;
    }
    return l_95[0];
}



static uint8_t  func_7(int32_t  p_8, const int16_t  p_9, union U1  p_10)
{ 
    uint8_t l_76 = 0x2DL;
    int32_t l_77 = 0xD6F38C13L;
    for (p_10.f0.f5 = 0; (p_10.f0.f5 < 5); p_10.f0.f5 = safe_add_func_uint32_t_u_u(p_10.f0.f5, 2))
    { 
        l_77 &= l_76;
    }
    l_77 = (g_73.f0.f3 != g_73.f0.f1);
    for (g_73.f0.f4 = 0; (g_73.f0.f4 <= 1); g_73.f0.f4 += 1)
    { 
        return p_8;
    }
    return g_73.f0.f2;
}



static int64_t  func_17(const union U2  p_18, uint64_t  p_19, int16_t  p_20)
{ 
    int16_t l_27 = 2L;
    int32_t l_35 = (-9L);
    int32_t l_37 = 0x5349DDA4L;
    union U1 l_60 = {{0UL,0x17E40D8EB8A80AA4LL,7L,0xD46D8DA5L,0x9FAA33FEL,0x86B7DE7EL}};
    for (p_19 = 0; (p_19 <= 0); p_19 += 1)
    { 
        uint64_t l_36 = 0xF9752EE8B7203FCALL;
        int32_t l_53 = 0x6A8E49EDL;
        uint32_t l_61 = 0UL;
        l_27 = g_21[0].f0;
        l_37 = ((safe_sub_func_int8_t_s_s(((((((0xABL ^ ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u((0x0266L < (p_18.f0 , ((((l_35 = (0x7CC73EE4L && p_18.f0)) >= 0x81L) == g_21[0].f0) || l_27))))), g_11[0][2])) ^ 0L)) & 0x312349124C6E12CDLL) < l_36) < (-3L)) & g_11[0][2]) & p_18.f0), l_36)) & p_20);
        for (l_37 = 0; (l_37 >= 0); l_37 -= 1)
        { 
            int16_t l_49 = (-7L);
            int32_t l_62 = 0x7289F16CL;
            int i, j;
            if (g_11[p_19][(l_37 + 2)])
            { 
                uint64_t l_52[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_52[i] = 0x4F348F6F7E707ECBLL;
                l_53 = (safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s(5L, (safe_rshift_func_int16_t_s_u(((+(safe_sub_func_uint8_t_u_u((l_49 |= g_11[0][4]), ((safe_rshift_func_int16_t_s_u(p_19, g_11[0][2])) <= g_11[0][1])))) , 0x23A2L), p_20)))) , l_52[1]), g_21[0].f0)), g_11[0][2]));
            }
            else
            { 
                l_35 = (((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((-6L) && (g_11[0][2] > (safe_mod_func_int8_t_s_s(((((l_35 <= (l_60 , l_61)) , g_21[0].f0) , g_11[p_19][(l_37 + 2)]) <= 1UL), p_19)))), g_11[0][0])), g_11[0][2])) >= g_21[0].f0) , g_11[0][2]);
                l_62 = g_21[0].f0;
            }
        }
    }
    l_35 = (((safe_rshift_func_uint8_t_u_s((g_72[2][1] = ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_11[0][3], (g_71 = (safe_add_func_uint64_t_u_u((g_11[0][2] != 0x171CL), 2UL))))), p_20)) <= p_18.f0)), g_21[0].f0)) || l_27) | g_21[0].f0);
    return p_20;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_21[i].f0, "g_21[i].f0", print_hash_value);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_72[i][j], "g_72[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_73.f0.f0, "g_73.f0.f0", print_hash_value);
    transparent_crc(g_73.f0.f1, "g_73.f0.f1", print_hash_value);
    transparent_crc(g_73.f0.f2, "g_73.f0.f2", print_hash_value);
    transparent_crc(g_73.f0.f3, "g_73.f0.f3", print_hash_value);
    transparent_crc(g_73.f0.f4, "g_73.f0.f4", print_hash_value);
    transparent_crc(g_73.f0.f5, "g_73.f0.f5", print_hash_value);
    transparent_crc(g_78.f0.f0, "g_78.f0.f0", print_hash_value);
    transparent_crc(g_78.f0.f1, "g_78.f0.f1", print_hash_value);
    transparent_crc(g_78.f0.f2, "g_78.f0.f2", print_hash_value);
    transparent_crc(g_78.f0.f3, "g_78.f0.f3", print_hash_value);
    transparent_crc(g_78.f0.f4, "g_78.f0.f4", print_hash_value);
    transparent_crc(g_78.f0.f5, "g_78.f0.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_89[i][j], "g_89[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_257[i], "g_257[i]", print_hash_value);

    }
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
