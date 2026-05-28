// SPDX-License-Identifier: MIT
// cctest_csmith_f1f482a3.c --- cctest case csmith_f1f482a3 (csmith seed 4059333283)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x373eb50e */
/* @exp_ticks 0x77ae */

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

// Options:   -s 4059333283 -o /tmp/csmith_gen_h_zsor2z/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int16_t  f0;
   uint32_t  f1;
   int64_t  f2;
   uint8_t  f3;
   const uint16_t  f4;
   uint32_t  f5;
   uint32_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   const uint64_t  f1;
   uint64_t  f2;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   int8_t  f1;
   int32_t  f2;
   const uint8_t  f3;
};

union U3 {
   int8_t * f0;
   uint8_t  f1;
   int16_t  f2;
};


static int32_t g_4 = 0x1A4D63A8L;
static int8_t *g_42[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t g_44 = 0x01L;
static int32_t g_49 = 0xD66BD5D5L;
static int8_t g_61 = 0x23L;
static int32_t g_62 = 0x49F72E73L;
static int8_t g_63[1][2][2] = {{{(-1L),(-1L)},{(-1L),(-1L)}}};
static int32_t *g_68 = &g_62;
static uint64_t g_79[4][3][2] = {{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}}};
static int16_t g_95[2] = {2L,2L};
static uint32_t g_96 = 4294967295UL;
static uint32_t g_108 = 0UL;
static int64_t g_118[2][2][2] = {{{0x1C6990D6E1A5D364LL,0xDDDEB7D8DEE130BCLL},{0xDDDEB7D8DEE130BCLL,0x1C6990D6E1A5D364LL}},{{0xDDDEB7D8DEE130BCLL,0xDDDEB7D8DEE130BCLL},{0x1C6990D6E1A5D364LL,0xDDDEB7D8DEE130BCLL}}};
static int64_t *g_117[1][7] = {{&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0]}};
static int64_t *g_127 = &g_118[0][0][0];
static int64_t *g_128 = &g_118[0][0][0];
static struct S1 g_138 = {0UL,18446744073709551615UL,0xF3F102FCD55C4C9ALL};
static int8_t g_148[1] = {0xB5L};
static int64_t g_149[5][7] = {{0xB05A58BF42A53268LL,0x556FB2AC54307DC9LL,0x556FB2AC54307DC9LL,0xB05A58BF42A53268LL,0L,0xACA9B24F8DD1E84ALL,0xACA9B24F8DD1E84ALL},{(-1L),0x6B2F1F733664A167LL,0xF5A9DCD68DE2A517LL,0x6B2F1F733664A167LL,(-1L),0x6B2F1F733664A167LL,0xF5A9DCD68DE2A517LL},{0L,0xB05A58BF42A53268LL,0x556FB2AC54307DC9LL,0x556FB2AC54307DC9LL,0xB05A58BF42A53268LL,0L,0xACA9B24F8DD1E84ALL},{(-10L),6L,(-10L),0x6B2F1F733664A167LL,(-10L),6L,(-10L)},{0L,0x556FB2AC54307DC9LL,0xACA9B24F8DD1E84ALL,0xB05A58BF42A53268LL,0xB05A58BF42A53268LL,0xACA9B24F8DD1E84ALL,0x556FB2AC54307DC9LL}};
static int64_t g_150 = 0x3FDFE543AAA62D2FLL;
static uint8_t g_151 = 0x7EL;
static int16_t g_163 = 0x069BL;
static struct S0 g_177[2] = {{-1L,4294967294UL,0xB3A3B66FB3F3E8A5LL,3UL,2UL,18446744073709551608UL,4294967286UL},{-1L,4294967294UL,0xB3A3B66FB3F3E8A5LL,3UL,2UL,18446744073709551608UL,4294967286UL}};
static struct S0 g_206[4] = {{0x6903L,0xBE0EB0DAL,0L,0xCFL,0UL,0UL,0x12D87E1EL},{0x6903L,0xBE0EB0DAL,0L,0xCFL,0UL,0UL,0x12D87E1EL},{0x6903L,0xBE0EB0DAL,0L,0xCFL,0UL,0UL,0x12D87E1EL},{0x6903L,0xBE0EB0DAL,0L,0xCFL,0UL,0UL,0x12D87E1EL}};
static struct S0 *g_205[1][4] = {{&g_177[1],&g_177[1],&g_177[1],&g_177[1]}};
static union U2 g_238 = {0x059B8B7CL};
static uint64_t g_247 = 18446744073709551611UL;
static int64_t g_265 = 1L;
static union U2 g_270 = {-1L};
static const struct S0 *g_292 = &g_206[3];
static const struct S0 **g_291[6] = {&g_292,&g_292,&g_292,&g_292,&g_292,&g_292};
static uint16_t g_296[2][4][2] = {{{0x5077L,65533UL},{5UL,65533UL},{0x5077L,5UL},{1UL,1UL}},{{1UL,5UL},{0x5077L,65533UL},{5UL,65533UL},{0x5077L,5UL}}};
static uint16_t *g_295 = &g_296[1][0][1];
static int8_t **g_324[2] = {&g_42[3],&g_42[3]};
static int8_t ***g_323 = &g_324[1];
static uint32_t g_335[3][1][1] = {{{0x5488A4E5L}},{{0x5488A4E5L}},{{0x5488A4E5L}}};
static const uint32_t ***g_429 = (void*)0;
static uint8_t g_448[6][2] = {{251UL,251UL},{0x6DL,251UL},{251UL,0x6DL},{251UL,251UL},{0x6DL,251UL},{251UL,0x6DL}};
static union U3 g_474[4] = {{0},{0},{0},{0}};
static int32_t g_518[7][3] = {{0xEDC65C8EL,1L,1L},{0xB49B4E7FL,1L,(-10L)},{0x0693607AL,0xEDC65C8EL,0x20476008L},{0xB49B4E7FL,0xB49B4E7FL,0x20476008L},{0xEDC65C8EL,0x0693607AL,(-10L)},{1L,0xB49B4E7FL,1L},{1L,0xEDC65C8EL,0xB49B4E7FL}};
static int16_t *g_622[6][3][3] = {{{(void*)0,(void*)0,(void*)0},{&g_95[1],&g_163,(void*)0},{&g_95[1],(void*)0,&g_95[0]}},{{&g_163,&g_163,&g_163},{&g_163,(void*)0,&g_95[1]},{&g_95[0],&g_163,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&g_95[1],&g_163,(void*)0},{&g_95[1],(void*)0,&g_95[0]}},{{&g_163,&g_163,&g_163},{&g_163,(void*)0,&g_95[1]},{&g_95[0],&g_163,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&g_95[1],&g_163,(void*)0},{&g_95[1],(void*)0,&g_95[0]}},{{&g_163,&g_163,&g_163},{&g_163,(void*)0,&g_95[1]},{&g_95[0],&g_163,(void*)0}}};
static int16_t **g_621 = &g_622[4][0][0];
static uint8_t *g_743 = (void*)0;
static uint8_t **g_742 = &g_743;
static struct S0 ****g_851 = (void*)0;
static uint16_t g_897[1][5] = {{0x6B6DL,0x6B6DL,0x6B6DL,0x6B6DL,0x6B6DL}};
static int8_t g_920 = (-4L);
static int32_t *g_931 = &g_518[4][1];
static const union U3 g_937 = {0};
static const union U3 *g_936 = &g_937;
static const union U3 **g_935[6] = {(void*)0,(void*)0,&g_936,(void*)0,(void*)0,&g_936};
static const struct S0 * const **g_969 = (void*)0;
static const struct S0 * const ***g_968[6][3] = {{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969}};
static const union U2 *g_973 = &g_238;
static const union U2 ** const g_972 = &g_973;
static struct S1 *g_1010 = &g_138;
static struct S1 **g_1009[2] = {&g_1010,&g_1010};
static int8_t g_1025 = 3L;
static union U3 *g_1175 = (void*)0;
static struct S1 *g_1185 = &g_138;
static int32_t g_1381 = 0xF0931299L;
static int8_t g_1385 = 9L;
static uint64_t g_1474 = 2UL;
static uint16_t g_1487 = 1UL;
static uint32_t *g_1495[3] = {&g_206[1].f1,&g_206[1].f1,&g_206[1].f1};
static int8_t *****g_1509 = (void*)0;
static struct S1 g_1627 = {0xB5EEC91AL,1UL,4UL};
static uint64_t *g_1669 = (void*)0;
static uint64_t * const *g_1668 = &g_1669;
static struct S1 g_1685[4] = {{4294967295UL,0x27908288E3E3E61ALL,0xAED14D071F3F64DDLL},{4294967295UL,0x27908288E3E3E61ALL,0xAED14D071F3F64DDLL},{4294967295UL,0x27908288E3E3E61ALL,0xAED14D071F3F64DDLL},{4294967295UL,0x27908288E3E3E61ALL,0xAED14D071F3F64DDLL}};
static int32_t g_1698 = 0x6020BF6FL;
static uint64_t *g_1727 = &g_79[1][1][0];
static uint64_t ** const g_1726 = &g_1727;
static uint64_t ** const *g_1725 = &g_1726;



static const union U3  func_1(void);
static int64_t  func_5(int8_t * p_6, int16_t  p_7, const int8_t * p_8);
static int8_t * func_9(int8_t * p_10, int32_t  p_11, int8_t * p_12);
static int8_t * func_13(int32_t  p_14);
static int32_t  func_19(const int32_t  p_20);
static const union U3  func_24(int64_t  p_25, union U2  p_26, uint8_t  p_27, int32_t  p_28);
static int64_t  func_29(int32_t  p_30);
static int8_t  func_38(int8_t * p_39, uint32_t  p_40, int8_t * p_41);




static const union U3  func_1(void)
{ 
    uint32_t l_35 = 1UL;
    int64_t *l_266 = (void*)0;
    int64_t *l_267 = &g_206[1].f2;
    union U2 l_268 = {0x9EFFA177L};
    uint32_t l_1241 = 0xEAA25364L;
    int8_t *l_1242 = &g_148[0];
    uint16_t l_1405 = 8UL;
    const union U3 l_1440 = {0};
    uint16_t l_1496 = 0x2059L;
    int32_t l_1528 = (-1L);
    uint8_t l_1574 = 253UL;
    uint32_t l_1588 = 0xE1579ACCL;
    int32_t l_1602 = 0xC6F403ADL;
    struct S1 *l_1626 = &g_1627;
    int32_t l_1641 = (-5L);
    uint32_t l_1642 = 0UL;
    uint32_t l_1688 = 0x45CF0F44L;
    uint64_t l_1701 = 0xC5FD60BEAE27D8ECLL;
    uint32_t l_1731 = 0x57626603L;
    int64_t l_1743 = 0xE86EA9CED99C01C4LL;
    int32_t l_1762 = 0xFA658E70L;
    uint16_t l_1780 = 0xB133L;
    union U3 *l_1818 = &g_474[1];
    uint16_t l_1833[3][7][4] = {{{65534UL,0x560AL,65534UL,0x6F35L},{0xBFE7L,2UL,0x6F35L,0x6F35L},{0x560AL,0x560AL,0UL,2UL},{2UL,0xBFE7L,0UL,0xBFE7L},{0x560AL,65534UL,0x6F35L,0UL},{0xBFE7L,65534UL,65534UL,0xBFE7L},{65534UL,0xBFE7L,0x560AL,2UL}},{{65534UL,0x560AL,65534UL,0x6F35L},{0xBFE7L,2UL,0x6F35L,0x6F35L},{0x560AL,0x560AL,0UL,2UL},{2UL,0xBFE7L,0UL,0xBFE7L},{0x560AL,65534UL,0x6F35L,0UL},{0xBFE7L,65534UL,65534UL,0xBFE7L},{65534UL,0xBFE7L,0x560AL,2UL}},{{65534UL,0x560AL,65534UL,0x6F35L},{0xBFE7L,2UL,0x6F35L,0x6F35L},{0x560AL,0x560AL,0UL,2UL},{2UL,0xBFE7L,0UL,0xBFE7L},{0x560AL,65534UL,0x6F35L,0UL},{0xBFE7L,65534UL,65534UL,0xBFE7L},{65534UL,0xBFE7L,0x560AL,2UL}}};
    union U2 *l_1850 = (void*)0;
    int i, j, k;
    if ((safe_sub_func_int64_t_s_s((g_4 >= g_4), func_5(((**g_323) = func_9(func_13(((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_19(g_4), (safe_mul_func_uint16_t_u_u((func_24(((*l_267) = func_29(((g_4 ^ ((safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s(0x7BC6C8951BB35B68LL, 0x635300547507AF9CLL)), 0xEAA3E8F0L)) == g_4)) < l_35))), l_268, g_206[1].f3, g_149[2][0]) , (*g_295)), g_238.f2)))), 8)) | l_268.f2)), l_1241, l_1242)), l_35, l_1242))))
    { 
        int16_t l_1394 = 0x3D99L;
        int32_t l_1407[5] = {4L,4L,4L,4L,4L};
        const struct S0 **l_1423 = &g_292;
        const union U3 l_1483[1][5] = {{{0},{0},{0},{0},{0}}};
        int32_t l_1493[2][6];
        uint32_t *l_1494 = &g_177[1].f6;
        uint64_t l_1533 = 18446744073709551615UL;
        struct S1 *l_1543 = &g_138;
        int32_t *l_1544 = &g_270.f2;
        int8_t *l_1545 = &l_268.f1;
        int32_t l_1578[5][7][7] = {{{1L,0x84F6745BL,(-2L),0x398AF0EBL,0xBF157B74L,(-9L),1L},{0x47BBD228L,2L,1L,0xF22FAD49L,0x7216E99DL,0x47BBD228L,0xD149CBD0L},{0x99788635L,0L,(-1L),0L,0x99788635L,4L,0x05DBB581L},{9L,(-2L),0x9C195391L,0x7216E99DL,7L,0x9C195391L,0xCFFD7F76L},{(-2L),0xBA25304FL,0xDDE0249CL,(-2L),0x0C3D9A82L,0x84F6745BL,0xBF157B74L},{9L,0x7216E99DL,0L,0L,(-1L),(-1L),1L},{0x99788635L,0L,0x6EDADBB9L,(-1L),0x6EDADBB9L,0L,0x99788635L}},{{0x47BBD228L,1L,0xF22FAD49L,7L,2L,0xD149CBD0L,1L},{1L,0xBA25304FL,0L,0L,1L,0L,0x0C3D9A82L},{0x7216E99DL,0L,0xF22FAD49L,0x785ABCBBL,0L,7L,0xCFFD7F76L},{9L,0L,0x6EDADBB9L,(-9L),0x41A5570BL,(-9L),0x6EDADBB9L},{2L,4L,0L,0L,0L,1L,1L},{(-2L),0L,0x9BB7F982L,(-9L),(-10L),0x74AFA6EDL,0x8F19E5F6L},{0xCE9CCD73L,0x47BBD228L,7L,0x73DABB27L,0L,0xCE9CCD73L,1L}},{{9L,0L,0x41A5570BL,9L,7L,0x398AF0EBL,7L},{0xE5A302DFL,0x73DABB27L,0x73DABB27L,0xE5A302DFL,0x82D25A5AL,7L,0x9C195391L},{(-10L),0x84F6745BL,0L,0L,0x8F19E5F6L,0x74AFA6EDL,(-10L)},{7L,0L,0xCFFD7F76L,0x9C195391L,7L,0x7216E99DL,0x9C195391L},{0x753E1F6DL,4L,(-1L),(-9L),0xA2DE5BE0L,(-8L),7L},{(-1L),0xD149CBD0L,0x267F490BL,0x949621F0L,0x47BBD228L,0x73DABB27L,1L},{0xDDE0249CL,(-9L),1L,(-2L),5L,(-1L),0x8F19E5F6L}},{{7L,0xDE11EC4EL,0x73DABB27L,(-2L),(-1L),0xDE11EC4EL,1L},{0x4CD9F92BL,(-9L),0x20F7C8C9L,0L,0x6EDADBB9L,0x74AFA6EDL,0xA2DE5BE0L},{0xE5A302DFL,0xD149CBD0L,0x785ABCBBL,0L,0L,0x785ABCBBL,0xD149CBD0L},{0x8F19E5F6L,4L,0x9BB7F982L,9L,3L,0L,5L},{0xCE9CCD73L,0L,0x73DABB27L,7L,0x47BBD228L,0xCE9CCD73L,0x73DABB27L},{0x6EDADBB9L,0x84F6745BL,0xB0B66DD8L,9L,9L,0L,0x6EDADBB9L},{7L,0x73DABB27L,0x267F490BL,0L,0xDE11EC4EL,0L,0x9C195391L}},{{(-1L),0L,(-1L),0L,0x8F19E5F6L,(-8L),3L},{0L,0x47BBD228L,0xCFFD7F76L,(-2L),0x47BBD228L,9L,0xD149CBD0L},{0x753E1F6DL,0L,0xA2DE5BE0L,(-2L),0xE80D2C58L,(-8L),9L},{0xDE11EC4EL,1L,0x73DABB27L,0x949621F0L,0L,0L,0L},{(-2L),(-9L),0x0C3D9A82L,(-9L),(-2L),0L,0x8F19E5F6L},{0xE5A302DFL,0x82D25A5AL,7L,0x9C195391L,(-1L),0xCE9CCD73L,0xD149CBD0L},{0xA2DE5BE0L,0L,0x20F7C8C9L,0L,7L,0L,0xE80D2C58L}}};
        uint64_t l_1695 = 2UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_1493[i][j] = (-5L);
        }
    }
    else
    { 
        int32_t *l_1716 = &g_238.f0;
        uint64_t ** const l_1723 = &g_1669;
        uint64_t ** const *l_1722 = &l_1723;
        int32_t l_1758[4][4][7] = {{{8L,0xF404E922L,1L,0L,0xCDAE4B3AL,0xB7BFE0C8L,0x96CEBD23L},{0x6951C19BL,1L,0xB573D583L,0L,2L,(-5L),2L},{(-1L),0x7A957896L,0x7A957896L,(-1L),1L,0xC96DB67BL,0xF404E922L},{(-6L),(-1L),0xC35AD435L,0xE81D61DFL,1L,0x3A50A2C8L,0xE81D61DFL}},{{(-1L),0xE72D8DABL,5L,0x3A50A2C8L,(-4L),0x7A957896L,1L},{0x0F83FBFDL,2L,0xC96DB67BL,0L,0xD3A1CE56L,0x7A3E6C4DL,0x36F115CCL},{2L,0xB7BFE0C8L,0xD39955C9L,0x36F115CCL,0xCDAE4B3AL,0xE81D61DFL,0x0F83FBFDL},{0xE81D61DFL,(-2L),0xD39955C9L,0x7A957896L,0x18FDCBDEL,0x18FDCBDEL,0x7A957896L}},{{0xC96DB67BL,0x96CEBD23L,0xC96DB67BL,0x6951C19BL,0xF404E922L,9L,8L},{0xE72D8DABL,0xF404E922L,5L,(-6L),0xC35AD435L,0x75D46B8CL,0x18FDCBDEL},{0xD7EDA6FFL,(-7L),0x96CEBD23L,5L,1L,9L,0xC35AD435L},{(-2L),(-4L),(-1L),0x957C09CFL,0x96CEBD23L,0x18FDCBDEL,5L}},{{9L,0x0F83FBFDL,(-2L),2L,0xD7EDA6FFL,0xE81D61DFL,0xE72D8DABL},{0xF404E922L,0x0F83FBFDL,0x48FF9923L,0x7A3E6C4DL,0xD39955C9L,0x7A3E6C4DL,0x48FF9923L},{(-4L),(-4L),0x75D46B8CL,9L,0xE61DAB70L,0x7A957896L,(-2L)},{(-7L),(-7L),0x7A3E6C4DL,0xA81F6D6BL,1L,0x3A50A2C8L,0xF404E922L}}};
        int64_t l_1759 = 0xD124A7536F6244E2LL;
        int16_t l_1761 = (-2L);
        int32_t l_1781 = 0xA481D487L;
        uint32_t l_1784 = 0x1354E6E2L;
        union U3 *l_1819 = &g_474[0];
        uint32_t l_1840[5] = {0x5F9C0A03L,0x5F9C0A03L,0x5F9C0A03L,0x5F9C0A03L,0x5F9C0A03L};
        union U2 *l_1849 = &l_268;
        int i, j, k;
        for (g_44 = 0; (g_44 > 26); g_44 = safe_add_func_uint8_t_u_u(g_44, 6))
        { 
            uint64_t *l_1715[4][7][5] = {{{&g_1627.f2,&g_79[1][2][0],&g_1685[1].f2,(void*)0,(void*)0},{&g_138.f2,&g_79[2][2][1],&g_79[2][2][1],&g_138.f2,(void*)0},{&g_1685[1].f2,(void*)0,(void*)0,&g_138.f2,&l_1701},{(void*)0,&g_79[2][2][1],(void*)0,&g_79[1][2][0],&g_79[1][2][0]},{&g_79[1][2][0],&g_79[1][2][0],&g_79[1][2][0],&g_138.f2,&g_1685[1].f2},{&g_79[1][2][0],&g_138.f2,&g_79[1][2][0],&g_138.f2,&g_79[1][2][0]},{&g_79[1][2][0],(void*)0,&g_1627.f2,(void*)0,&g_1627.f2}},{{(void*)0,(void*)0,&g_79[1][2][0],&g_79[1][2][0],(void*)0},{&g_1685[1].f2,&g_1474,&g_79[1][2][0],(void*)0,&g_1627.f2},{&g_138.f2,&g_79[1][2][0],(void*)0,(void*)0,&g_79[1][2][0]},{&g_1627.f2,&g_1474,(void*)0,&g_79[3][2][1],&g_1685[1].f2},{&g_79[2][2][1],(void*)0,&g_79[2][2][1],(void*)0,&g_79[1][2][0]},{&l_1701,(void*)0,&g_1685[1].f2,(void*)0,&l_1701},{&g_79[2][2][1],&g_138.f2,(void*)0,&g_79[1][2][0],(void*)0}},{{&g_1627.f2,&g_79[1][2][0],&g_1685[1].f2,(void*)0,(void*)0},{&g_138.f2,&g_79[2][2][1],&g_79[2][2][1],&g_138.f2,(void*)0},{&g_1685[1].f2,(void*)0,(void*)0,&g_138.f2,&l_1701},{(void*)0,&g_79[2][2][1],(void*)0,&g_79[1][2][0],&g_79[1][2][0]},{&g_79[1][2][0],&g_79[1][2][0],&g_79[1][2][0],&g_138.f2,&g_1685[1].f2},{&g_79[1][2][0],&g_138.f2,&g_79[1][2][0],&g_138.f2,&g_79[1][2][0]},{&l_1701,&g_1474,(void*)0,&g_138.f2,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_138.f2},{&g_79[1][2][0],(void*)0,&l_1701,&g_1474,(void*)0},{&g_79[2][2][1],(void*)0,&g_79[1][2][0],&g_79[1][2][0],(void*)0},{(void*)0,(void*)0,&g_1685[1].f2,&g_79[1][2][0],&g_1627.f2},{&g_79[1][2][0],(void*)0,&g_79[1][2][0],&g_79[1][2][0],(void*)0},{(void*)0,&g_1474,&g_1627.f2,&g_1474,(void*)0},{&g_79[1][2][0],&g_79[2][2][1],(void*)0,(void*)0,(void*)0}}};
            int32_t **l_1717 = &g_931;
            uint64_t ** const **l_1724[5];
            uint8_t **l_1728[4];
            int32_t l_1757 = 0L;
            int32_t l_1760 = 1L;
            const int16_t * const l_1779 = &g_177[1].f0;
            const int16_t * const *l_1778[6][4][6] = {{{&l_1779,(void*)0,(void*)0,&l_1779,&l_1779,&l_1779},{&l_1779,(void*)0,&l_1779,(void*)0,&l_1779,&l_1779},{&l_1779,&l_1779,(void*)0,&l_1779,&l_1779,&l_1779},{&l_1779,&l_1779,&l_1779,&l_1779,(void*)0,&l_1779}},{{&l_1779,&l_1779,(void*)0,(void*)0,(void*)0,&l_1779},{&l_1779,&l_1779,(void*)0,&l_1779,&l_1779,(void*)0},{(void*)0,(void*)0,&l_1779,(void*)0,(void*)0,&l_1779},{&l_1779,&l_1779,&l_1779,(void*)0,&l_1779,&l_1779}},{{&l_1779,&l_1779,&l_1779,&l_1779,&l_1779,&l_1779},{(void*)0,&l_1779,&l_1779,&l_1779,(void*)0,&l_1779},{&l_1779,&l_1779,&l_1779,(void*)0,&l_1779,(void*)0},{&l_1779,&l_1779,(void*)0,&l_1779,&l_1779,&l_1779}},{{&l_1779,&l_1779,(void*)0,&l_1779,&l_1779,&l_1779},{&l_1779,(void*)0,&l_1779,&l_1779,&l_1779,&l_1779},{&l_1779,&l_1779,(void*)0,&l_1779,&l_1779,&l_1779},{&l_1779,&l_1779,&l_1779,&l_1779,&l_1779,&l_1779}},{{&l_1779,&l_1779,(void*)0,(void*)0,&l_1779,&l_1779},{(void*)0,&l_1779,&l_1779,&l_1779,&l_1779,&l_1779},{(void*)0,&l_1779,&l_1779,&l_1779,&l_1779,&l_1779},{(void*)0,&l_1779,(void*)0,&l_1779,&l_1779,&l_1779}},{{&l_1779,&l_1779,&l_1779,&l_1779,&l_1779,(void*)0},{&l_1779,(void*)0,&l_1779,&l_1779,&l_1779,&l_1779},{&l_1779,&l_1779,&l_1779,&l_1779,&l_1779,&l_1779},{&l_1779,&l_1779,&l_1779,&l_1779,&l_1779,&l_1779}}};
            const int16_t * const **l_1777 = &l_1778[2][0][1];
            int64_t l_1795 = (-1L);
            uint32_t l_1807 = 4UL;
            uint32_t l_1839 = 0xA35E1EEEL;
            uint8_t l_1846 = 0x56L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1724[i] = &l_1722;
            for (i = 0; i < 4; i++)
                l_1728[i] = &g_743;
            (*g_931) = ((g_1474 ^= ((*g_295) || (--(*g_295)))) && (&g_1010 == &l_1626));
            (*l_1717) = l_1716;
        }
    }
    (*g_931) = 0x7A8A5126L;
    return (*l_1818);
}



static int64_t  func_5(int8_t * p_6, int16_t  p_7, const int8_t * p_8)
{ 
    int32_t *l_1390 = &g_518[4][1];
    int32_t *l_1391 = (void*)0;
    l_1391 = (l_1390 = l_1390);
    return (*g_128);
}



static int8_t * func_9(int8_t * p_10, int32_t  p_11, int8_t * p_12)
{ 
    int16_t l_1258 = 0x8FA2L;
    int32_t l_1262 = 6L;
    int32_t l_1287 = (-5L);
    union U2 l_1290 = {1L};
    int32_t l_1356 = 0L;
    struct S0 **l_1365 = &g_205[0][1];
    struct S0 *** const l_1364 = &l_1365;
    int64_t l_1370 = 1L;
    int32_t *l_1371 = &g_518[4][1];
    int32_t *l_1372 = &g_238.f2;
    int32_t *l_1373 = &g_238.f2;
    int32_t *l_1374 = &g_270.f0;
    int32_t *l_1375 = (void*)0;
    int32_t *l_1376 = &g_270.f0;
    int32_t *l_1377 = &g_238.f0;
    int32_t *l_1378[7][2] = {{&l_1287,&g_518[5][1]},{&g_238.f2,(void*)0},{(void*)0,&g_238.f2},{&g_518[5][1],&g_238.f2},{&g_238.f2,&l_1287},{&g_238.f0,&g_238.f0},{&l_1287,&g_238.f2}};
    int16_t l_1379 = 0x266CL;
    int32_t l_1380 = (-3L);
    uint32_t l_1382 = 0x18EED44EL;
    uint32_t l_1386 = 0x82609DE5L;
    int8_t *l_1389 = &g_1025;
    int i, j;
    for (g_247 = 0; (g_247 <= 52); g_247++)
    { 
        uint16_t l_1259 = 0x65B0L;
        int64_t l_1261 = 0xB13E1B88652D1ADALL;
        struct S0 l_1272 = {0xFF41L,7UL,0L,0xFEL,0UL,5UL,4294967295UL};
        struct S1 l_1275 = {0x204F24D4L,18446744073709551613UL,0xDCA89B7348E00DC5LL};
        int8_t *l_1280 = (void*)0;
        int32_t * const l_1293 = &g_518[0][1];
        int16_t l_1331[3][6][7] = {{{0xC2C5L,0x6AC1L,(-2L),1L,(-6L),0x828EL,0x5D9EL},{(-1L),0xD907L,0xBAF3L,0xA694L,4L,0xA694L,0xBAF3L},{1L,1L,(-1L),0xD52BL,0x828EL,0x46D8L,0x9C31L},{0x601EL,0xE65FL,(-7L),1L,(-1L),0xE502L,(-1L)},{0x46D8L,0x1336L,0x828EL,0x9C31L,0x828EL,0x1336L,0x46D8L},{4L,0xA694L,(-8L),(-7L),4L,(-1L),1L}},{{0x5D9EL,(-2L),0x8984L,1L,(-6L),0x192AL,0x192AL},{0xD907L,0x2018L,(-8L),0x2018L,0xD907L,0x601EL,0xE65FL},{(-1L),0xD52BL,0x828EL,0x46D8L,0x9C31L,0xC1E1L,(-6L)},{0x2018L,0xA259L,(-7L),0xC15DL,(-8L),(-8L),0xC15DL},{(-1L),0x46D8L,(-1L),0xC2C5L,0x6AC1L,(-2L),1L},{0xD907L,0xBB73L,0xBAF3L,0x601EL,0xC15DL,0xE65FL,4L}},{{0x5D9EL,(-1L),(-2L),0x1336L,0x1336L,(-2L),(-1L)},{4L,4L,1L,0xE72FL,0xBB73L,(-8L),(-1L)},{0x46D8L,0x8984L,1L,0x828EL,1L,0xC1E1L,1L},{0x601EL,(-1L),0xE72FL,0xE72FL,(-1L),0x601EL,0xA694L},{1L,1L,0x5D9EL,0x1336L,0xC2C5L,0x192AL,0x6AC1L},{(-1L),0xC15DL,4L,0x601EL,(-7L),(-1L),(-7L)}}};
        uint32_t l_1340 = 18446744073709551615UL;
        int16_t l_1360 = 0L;
        int i, j, k;
        for (g_150 = 0; (g_150 == (-6)); --g_150)
        { 
            int32_t *l_1260[5][7] = {{&g_270.f0,&g_270.f2,&g_62,&g_270.f2,&g_270.f0,&g_62,&g_238.f0},{&g_49,(void*)0,(void*)0,&g_270.f0,&g_270.f0,&g_238.f0,&g_270.f0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_270.f2,&g_270.f0,&g_49},{&g_49,&g_270.f0,&g_270.f2,(void*)0,(void*)0,(void*)0,(void*)0},{&g_270.f0,&g_238.f0,&g_270.f0,&g_270.f0,(void*)0,(void*)0,&g_49}};
            union U3 l_1320 = {0};
            int8_t *l_1326 = &g_238.f1;
            struct S0 ***l_1367 = &l_1365;
            struct S0 ****l_1366 = &l_1367;
            int i, j;
            if ((safe_div_func_int32_t_s_s((l_1262 = (p_11 , (l_1261 |= (safe_mul_func_int16_t_s_s((+(safe_rshift_func_uint16_t_u_s((*g_295), 10))), ((safe_mod_func_uint16_t_u_u((l_1259 = (safe_add_func_int32_t_s_s(((*g_931) = (*g_931)), ((*g_127) >= l_1258)))), p_11)) < g_95[1])))))), 1L)))
            { 
                int64_t l_1276 = (-9L);
                int32_t *l_1278 = &g_270.f0;
                int32_t **l_1294 = &g_931;
                if ((l_1259 & (safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((g_206[1].f3 ^= ((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_1272 , ((safe_rshift_func_uint16_t_u_u(((0xABC47E43FEEAA8B7LL >= 9UL) < g_118[0][0][1]), 1)) <= (l_1275 , (g_118[0][0][0] , p_11)))), l_1276)), l_1276)) || l_1272.f3)), l_1262)) < 0L), (-3L))) || (*p_12))))))
                { 
                    int32_t *l_1277 = &g_270.f2;
                    int32_t **l_1279[1][7][5] = {{{&l_1260[3][0],&l_1260[4][3],&l_1260[4][3],&l_1260[3][3],&g_931},{&l_1260[4][1],&l_1260[4][3],&l_1277,&l_1260[4][3],&l_1260[4][1]},{&l_1278,(void*)0,&l_1278,&l_1260[4][3],&l_1260[3][3]},{&g_68,&l_1278,&g_931,&l_1260[3][3],&l_1260[4][3]},{&l_1277,&l_1278,&l_1277,&g_68,&l_1277},{&l_1277,&l_1277,&l_1260[4][3],&l_1278,&l_1278},{&l_1277,&l_1260[4][3],&l_1278,&l_1260[4][1],&g_931}}};
                    int i, j, k;
                    l_1277 = (void*)0;
                    if (p_11)
                        break;
                    g_68 = l_1278;
                    return l_1280;
                }
                else
                { 
                    int16_t **l_1281 = &g_622[4][0][0];
                    l_1287 |= ((l_1281 != &g_622[4][0][0]) , (safe_div_func_int32_t_s_s(p_11, ((safe_unary_minus_func_int32_t_s((l_1262 , (*g_931)))) && (3UL != ((safe_mod_func_int16_t_s_s(0x2033L, p_11)) != (*g_127)))))));
                    (*l_1278) |= (((safe_mod_func_int64_t_s_s(p_11, (l_1290 , (-2L)))) ^ (p_11 != (p_11 && (*g_295)))) | (safe_mul_func_int16_t_s_s(p_11, (*g_295))));
                    (*g_931) = (*g_931);
                    (*g_972) = (*g_972);
                }
                (*l_1294) = l_1293;
                return p_12;
            }
            else
            { 
                int32_t **l_1295 = (void*)0;
                int32_t **l_1296 = &g_68;
                uint32_t l_1323 = 0UL;
                int16_t *l_1341 = &g_95[1];
                (*l_1296) = l_1260[1][3];
                for (g_163 = 0; (g_163 > (-14)); g_163 = safe_sub_func_int64_t_s_s(g_163, 8))
                { 
                    uint16_t *l_1299 = (void*)0;
                    const uint16_t *l_1300 = &g_177[1].f4;
                    uint64_t *l_1321[4] = {&g_247,&g_247,&g_247,&g_247};
                    const int32_t l_1322[5] = {0xFCEEC6D2L,0xFCEEC6D2L,0xFCEEC6D2L,0xFCEEC6D2L,0xFCEEC6D2L};
                    int i;
                    g_270.f0 = ((*g_931) ^= 1L);
                    (*g_931) = (l_1299 == ((**g_972) , l_1300));
                    (*l_1293) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((p_11 | (safe_div_func_uint32_t_u_u(((((*p_12) && (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((g_79[0][2][0] &= (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((l_1262 = p_11) || (255UL != p_11)), (+((func_24(((safe_lshift_func_uint8_t_u_u(p_11, 0)) <= (l_1320 , 5L)), l_1290, p_11, (*l_1293)) , (*p_12)) || p_11)))), g_897[0][4]))) == 0xEB06C49BD93B9A74LL) ^ l_1322[3]), 0x86L)), 0x84L))) && (*g_931)) && p_11), p_11))), l_1323)) , 0UL), p_11)) <= (*l_1293)), l_1322[3]));
                }
                for (g_62 = (-7); (g_62 != (-24)); --g_62)
                { 
                    (*g_931) ^= (0L <= 0xAD82B57FL);
                    return l_1326;
                }
                (*g_931) = ((((*l_1341) = (((safe_div_func_uint64_t_u_u((((void*)0 == &l_1261) | p_11), ((safe_add_func_int8_t_s_s(l_1331[0][2][3], ((safe_div_func_uint64_t_u_u((((safe_div_func_uint64_t_u_u(g_518[5][1], (safe_sub_func_int32_t_s_s((((*g_295) , ((safe_rshift_func_uint8_t_u_s(((0x1EBD3F585A0DA82BLL & g_296[0][3][0]) != 18446744073709551606UL), l_1340)) ^ 0x30L)) >= (*l_1293)), g_118[0][1][0])))) , (*p_12)) && 3L), p_11)) || p_11))) , p_11))) | p_11) , 0xDCD3L)) ^ p_11) > (*p_12));
                (*l_1293) = 0L;
            }
            for (l_1272.f1 = 0; (l_1272.f1 >= 46); ++l_1272.f1)
            { 
                union U3 l_1354 = {0};
                int32_t l_1355 = 1L;
                uint32_t *l_1357 = &g_206[1].f1;
                int16_t *l_1358 = (void*)0;
                int16_t *l_1359 = &g_95[1];
                (*g_931) = 9L;
                (*g_931) = (safe_mul_func_uint16_t_u_u(p_11, ((*g_128) <= ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(p_11, (((((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((*l_1359) = (l_1354 , (((((*l_1357) = ((p_11 <= ((p_11 && (l_1355 = (*g_295))) != l_1356)) , p_11)) || (*g_931)) == g_518[1][1]) > (*g_295)))), 65535UL)), p_11)) , l_1360) , 0x30C6L) && l_1290.f3) , p_11))) , l_1290.f2), 5)) & l_1356))));
                for (g_44 = (-27); (g_44 < (-19)); g_44 = safe_add_func_uint32_t_u_u(g_44, 8))
                { 
                    int32_t **l_1363 = &g_68;
                    (*l_1363) = l_1293;
                    return p_10;
                }
                l_1355 = l_1355;
            }
            (*l_1366) = l_1364;
            (*l_1293) = (safe_unary_minus_func_uint32_t_u((!l_1370)));
        }
    }
    ++l_1382;
    l_1386++;
    return l_1389;
}



static int8_t * func_13(int32_t  p_14)
{ 
    int64_t l_339 = 0xA485410A05DC376CLL;
    int64_t l_355 = 1L;
    uint8_t *l_370[5][6][3] = {{{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0},{&g_151,&g_151,&g_177[1].f3},{&g_206[1].f3,&g_206[1].f3,&g_206[1].f3},{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0}},{{&g_151,&g_151,&g_177[1].f3},{&g_206[1].f3,&g_206[1].f3,&g_206[1].f3},{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0},{&g_151,&g_151,&g_177[1].f3},{&g_206[1].f3,&g_206[1].f3,&g_206[1].f3}},{{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0},{&g_151,&g_151,&g_177[1].f3},{&g_206[1].f3,&g_206[1].f3,&g_206[1].f3},{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0}},{{&g_151,&g_151,&g_177[1].f3},{&g_206[1].f3,&g_206[1].f3,&g_206[1].f3},{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0},{&g_151,&g_151,&g_177[1].f3},{&g_206[1].f3,&g_206[1].f3,&g_206[1].f3}},{{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0},{&g_151,&g_151,&g_177[1].f3},{&g_206[1].f3,&g_206[1].f3,&g_206[1].f3},{&g_151,&g_177[1].f3,&g_177[1].f3},{(void*)0,&g_206[1].f3,(void*)0}}};
    int32_t l_380 = 0L;
    int16_t l_449 = 0xC419L;
    uint16_t l_470 = 65533UL;
    int32_t l_499[7];
    int64_t l_519 = 0x7C87F85A7FDFB3FALL;
    uint8_t l_520 = 0xB7L;
    int32_t l_524 = 8L;
    uint8_t l_526 = 0x49L;
    int8_t * const ***l_546[1];
    uint8_t l_549 = 0xB7L;
    struct S1 l_553 = {4294967294UL,0UL,5UL};
    uint8_t l_591 = 0x1FL;
    struct S0 **l_615 = &g_205[0][2];
    union U3 l_618 = {0};
    int16_t **l_631 = (void*)0;
    uint32_t *l_642 = (void*)0;
    uint32_t **l_641 = &l_642;
    int8_t ****l_656 = &g_323;
    int16_t l_668 = (-6L);
    uint32_t l_724 = 0x91B2832FL;
    int16_t *l_790[4][6];
    int16_t l_804 = (-2L);
    int16_t l_911 = (-1L);
    int8_t l_921 = 0L;
    uint8_t l_927 = 1UL;
    const union U3 **l_938[2];
    union U2 l_947 = {5L};
    uint32_t l_985[5][3][1] = {{{0xB3B41EE6L},{3UL},{0xB3B41EE6L}},{{3UL},{0xB3B41EE6L},{3UL}},{{0xB3B41EE6L},{3UL},{0xB3B41EE6L}},{{3UL},{0xB3B41EE6L},{3UL}},{{0xB3B41EE6L},{3UL},{0xB3B41EE6L}}};
    int8_t l_1023 = 0L;
    uint32_t l_1041 = 0xE9D6A4CDL;
    int32_t l_1105 = 0x263789FFL;
    int32_t *l_1191 = &l_524;
    uint32_t l_1216 = 0xB38FF111L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_499[i] = 0xDC88F44EL;
    for (i = 0; i < 1; i++)
        l_546[i] = (void*)0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
            l_790[i][j] = &g_95[1];
    }
    for (i = 0; i < 2; i++)
        l_938[i] = &g_936;
    if (l_339)
    { 
        uint8_t l_348[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
        int32_t l_351 = 0x70B6D149L;
        uint8_t *l_352 = &g_177[1].f3;
        int32_t l_356 = (-8L);
        int32_t *l_359 = &l_351;
        int8_t ****l_361 = &g_323;
        union U3 *l_473 = &g_474[1];
        uint8_t l_492 = 0xFFL;
        uint16_t l_500 = 1UL;
        int32_t *l_503 = &l_356;
        int32_t *l_504 = (void*)0;
        int32_t *l_505 = (void*)0;
        int32_t *l_506 = &g_62;
        int32_t *l_507 = &g_238.f0;
        int32_t *l_508 = &g_62;
        int32_t *l_509 = &g_62;
        int32_t *l_510 = &l_499[1];
        int32_t *l_511 = &g_270.f2;
        int32_t *l_512 = &g_62;
        int32_t *l_513 = &l_356;
        int32_t *l_514 = &l_356;
        int32_t *l_515 = &l_356;
        int32_t *l_516 = &g_238.f0;
        int32_t *l_517[1];
        int32_t **l_523 = &l_508;
        int8_t l_525 = (-8L);
        int i;
        for (i = 0; i < 1; i++)
            l_517[i] = &g_270.f2;
        if ((safe_mod_func_uint32_t_u_u((0x974DL ^ (l_356 |= (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(l_348[5], 11)), (((l_339 , (safe_mul_func_int16_t_s_s(((g_151 = ((*l_352) = (l_351 = 253UL))) < 2UL), (((safe_add_func_uint8_t_u_u((0x4AL <= l_348[0]), p_14)) , g_79[0][0][0]) && l_339)))) <= g_206[1].f2) != l_355))), 6)) < 0x6980L) > l_348[0]))), p_14)))
        { 
            int8_t *****l_360 = (void*)0;
            int32_t **l_362 = &l_359;
            uint8_t **l_369 = &l_352;
            for (g_44 = 0; (g_44 >= (-4)); --g_44)
            { 
                l_359 = &g_4;
            }
            l_361 = (void*)0;
            (*l_362) = &g_62;
            (**l_362) &= (((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(0x053EDE2EEAF47915LL, 0xB58FA1B2E6353F31LL)), (safe_add_func_int16_t_s_s((((*l_369) = &g_151) != l_370[1][3][1]), 1UL)))) , ((safe_mod_func_uint32_t_u_u((0xBA59C8C1FC92027ALL >= (safe_div_func_uint64_t_u_u((&l_348[5] != (void*)0), (*g_127)))), g_206[1].f0)) >= p_14)) , 2L);
        }
        else
        { 
            const int32_t l_375[6] = {(-1L),5L,(-1L),(-1L),5L,(-1L)};
            int32_t l_382 = (-1L);
            int8_t *****l_463[4][3] = {{&l_361,&l_361,&l_361},{&l_361,&l_361,&l_361},{&l_361,&l_361,(void*)0},{&l_361,&l_361,&l_361}};
            int32_t l_488 = 0x3FB2FE35L;
            int32_t *l_498[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_498[i] = (void*)0;
            for (g_270.f0 = 0; (g_270.f0 >= 0); g_270.f0 -= 1)
            { 
                uint64_t l_383 = 18446744073709551615UL;
                int8_t ****l_396 = &g_323;
                int32_t l_401 = 0x253639AEL;
                int32_t l_405 = 1L;
                uint32_t *l_416 = &g_206[1].f6;
                int8_t *****l_462 = &l_396;
                if (l_375[1])
                { 
                    if (p_14)
                        break;
                    return (***l_361);
                }
                else
                { 
                    int32_t *l_376 = &l_351;
                    int32_t *l_377 = &g_62;
                    int32_t *l_378 = &l_351;
                    int32_t *l_379 = &l_351;
                    int32_t *l_381[7][3] = {{&l_351,(void*)0,(void*)0},{&g_62,&g_62,&g_238.f0},{(void*)0,(void*)0,(void*)0},{&g_238.f0,&g_238.f2,&g_4},{(void*)0,&g_4,(void*)0},{&g_62,&g_238.f0,&g_4},{&l_351,&l_351,(void*)0}};
                    int8_t *****l_397 = &l_396;
                    uint32_t *l_398 = (void*)0;
                    int i, j;
                    l_383--;
                    g_238.f0 = ((*l_378) = (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x3712527BL, 4UL)), l_383)));
                    l_401 = ((safe_rshift_func_int16_t_s_u((((safe_add_func_int64_t_s_s((g_238.f0 , (-8L)), (p_14 >= (((safe_add_func_int32_t_s_s(((l_380 = (((*l_397) = l_396) == (void*)0)) != (safe_lshift_func_int16_t_s_u((l_383 != (*g_295)), 8))), (*l_378))) , g_247) <= 0x02L)))) , (*l_376)) > 0L), 2)) == p_14);
                    if (p_14)
                        break;
                    (*l_359) |= (l_375[1] , (~((p_14 > (((*l_377) > (safe_rshift_func_uint16_t_u_u(l_383, 9))) || (((l_405 || (safe_div_func_uint8_t_u_u(l_401, g_206[1].f6))) | 0x5330F8EAL) >= 0L))) == g_118[0][0][0])));
                }
                for (g_163 = 4; (g_163 >= 0); g_163 -= 1)
                { 
                    union U2 *l_409[1];
                    union U2 **l_408 = &l_409[0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_409[i] = &g_238;
                    (*l_408) = &g_270;
                    return l_370[2][1][0];
                }
                if (g_4)
                    break;
                for (l_382 = 0; (l_382 <= 5); l_382 += 1)
                { 
                    int32_t *l_410 = &l_405;
                    (*l_410) = ((*l_359) &= p_14);
                }
                for (p_14 = 0; (p_14 >= 0); p_14 -= 1)
                { 
                    uint32_t **l_417 = &l_416;
                    (*l_359) = (g_265 > (safe_unary_minus_func_uint32_t_u(((((*l_359) || ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((*l_417) = l_416) != (void*)0), ((l_380 = (safe_rshift_func_uint8_t_u_u(g_177[1].f2, (safe_add_func_uint8_t_u_u((l_382 = (safe_mod_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((~p_14), l_380)) | p_14) && g_148[0]), 0x56L))), p_14))))) , p_14))), 1UL)) < l_375[1])) == p_14) == (*l_359)))));
                }
                for (l_351 = 0; (l_351 <= 0); l_351 += 1)
                { 
                    uint64_t *l_446 = &g_79[1][2][0];
                    int8_t *l_447 = &g_61;
                    int8_t *****l_464 = &l_361;
                    uint32_t *l_465 = &g_96;
                    int i, j;
                    l_449 = (safe_sub_func_int64_t_s_s((((void*)0 != g_429) >= (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((*l_447) |= (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((l_375[1] <= ((*l_416) = (p_14 == (g_138 , ((((*l_446) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s(g_177[1].f2, 0xE698L)), 0xE69758E9458C0FEELL)), p_14)), 2))) | g_138.f1) , 0x81L))))) , p_14) , 0x61L), l_375[1])), 7L))), (*l_359))) && 2UL), g_448[5][0])) | p_14) == (*g_128))), (*l_359)));
                    if (g_63[0][0][1])
                        continue;
                    l_405 = ((safe_sub_func_int16_t_s_s(4L, (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(p_14, g_63[0][0][0])), ((safe_unary_minus_func_int64_t_s((g_149[l_351][(g_270.f0 + 2)] = 0xCD401BC52D92E522LL))) , (--(*l_416))))), (safe_unary_minus_func_uint64_t_u((((*l_465) = ((l_463[1][0] = l_462) == l_464)) ^ p_14))))))) | l_401);
                    return l_370[1][3][1];
                }
            }
            if (g_238.f0)
            { 
                (*l_359) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_448[5][0], l_470)), g_151));
            }
            else
            { 
                union U3 **l_475 = &l_473;
                int32_t l_491[7][7] = {{1L,(-1L),0x63609C18L,0x63609C18L,(-1L),1L,0x34B5AF1AL},{0xC9872EACL,0xFB132041L,0xC9872EACL,0x9EAC06E5L,0xC9872EACL,0xFB132041L,0xC9872EACL},{1L,0x63609C18L,0x34B5AF1AL,(-1L),(-1L),0x34B5AF1AL,0x63609C18L},{0xFCCA4461L,0xFB132041L,(-1L),0xFB132041L,0xFCCA4461L,0xFB132041L,(-1L)},{(-1L),(-1L),0x34B5AF1AL,0x63609C18L,1L,1L,0x63609C18L},{0xC9872EACL,0x9EAC06E5L,0xC9872EACL,0xFB132041L,0xC9872EACL,0x9EAC06E5L,0xC9872EACL},{(-1L),0x63609C18L,0x63609C18L,(-1L),1L,0x34B5AF1AL,0x34B5AF1AL}};
                int i, j;
lbl_476:
                for (g_44 = 0; (g_44 <= (-29)); g_44--)
                { 
                    return (***l_361);
                }
                (*l_475) = l_473;
                if (g_61)
                    goto lbl_476;
                if ((((safe_rshift_func_int16_t_s_s(((!(safe_add_func_uint32_t_u_u((4L != ((l_382 < ((safe_add_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((((*l_359) , (((*l_475) = l_473) == &g_474[1])) | (l_488 |= g_206[1].f6)), ((((safe_lshift_func_int16_t_s_u(p_14, 11)) != l_491[5][6]) && (*l_359)) | l_492))) != l_491[2][4]), (-1L))) || p_14), p_14)) != l_491[2][0])) || (-6L))), l_355))) & l_382), 3)) & g_177[1].f0) , (*l_359)))
                { 
                    int32_t *l_493 = &l_491[5][6];
                    int32_t l_494 = 0xBB254082L;
                    int8_t *l_495 = &g_61;
                    l_493 = &g_4;
                    l_494 ^= p_14;
                    return l_495;
                }
                else
                { 
                    int32_t *l_496 = (void*)0;
                    int32_t **l_497[2][3] = {{&g_68,&g_68,&l_359},{&g_68,&g_68,&l_359}};
                    int i, j;
                    g_68 = l_496;
                }
            }
            l_500--;
            (*l_359) = 0L;
        }
        l_520--;
        (*l_523) = &l_499[1];
        l_526++;
    }
    else
    { 
        int32_t l_548 = 1L;
        int32_t *l_566 = &g_62;
        int8_t ***l_583 = &g_324[1];
        struct S0 **l_616 = &g_205[0][3];
        int8_t l_643 = 1L;
        union U2 l_700[6] = {{0x09D13723L},{0x09D13723L},{-4L},{0x09D13723L},{0x09D13723L},{-4L}};
        int32_t l_701 = (-10L);
        struct S0 *l_752[6][3][1];
        uint8_t *l_755 = (void*)0;
        const int16_t *l_788 = &g_177[1].f0;
        union U3 *l_793[3][7][2] = {{{&g_474[1],&g_474[2]},{&g_474[1],&l_618},{&l_618,(void*)0},{&l_618,&g_474[1]},{&g_474[3],&l_618},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,&l_618},{&g_474[3],&g_474[1]},{&l_618,(void*)0},{&l_618,&l_618},{&g_474[1],&g_474[2]},{&g_474[1],&l_618},{&l_618,(void*)0}},{{&l_618,&g_474[1]},{&g_474[3],&l_618},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_618},{&g_474[3],&g_474[1]},{&l_618,(void*)0}}};
        union U3 **l_792 = &l_793[0][2][1];
        int32_t *l_802 = &l_499[0];
        int32_t *l_803[4] = {&g_49,&g_49,&g_49,&g_49};
        uint32_t l_805 = 0xFEE81A15L;
        struct S0 ***l_850 = &l_615;
        struct S0 ****l_849 = &l_850;
        const union U3 *l_933 = (void*)0;
        const union U3 **l_932 = &l_933;
        struct S1 l_948 = {0UL,0xFA3E069CC4AA9E42LL,2UL};
        const int32_t *l_1003 = &g_62;
        uint8_t l_1013 = 0UL;
        const int64_t l_1060 = 1L;
        uint32_t *l_1115[1][2][7] = {{{(void*)0,(void*)0,&l_553.f0,&l_948.f0,&l_553.f0,(void*)0,(void*)0},{(void*)0,&l_553.f0,&l_948.f0,&l_553.f0,(void*)0,(void*)0,&l_553.f0}}};
        union U2 l_1138 = {7L};
        uint8_t l_1163 = 255UL;
        uint32_t l_1177[6][2][1] = {{{0x34592A13L},{0x34592A13L}},{{0xD27DB716L},{0x34592A13L}},{{0x34592A13L},{0xD27DB716L}},{{0x34592A13L},{0x34592A13L}},{{0xD27DB716L},{0x34592A13L}},{{0x34592A13L},{0xD27DB716L}}};
        int16_t l_1238 = 6L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_752[i][j][k] = &g_177[0];
            }
        }
        for (l_520 = 27; (l_520 >= 27); l_520 = safe_add_func_uint16_t_u_u(l_520, 9))
        { 
            uint32_t l_533 = 0x9BE570D3L;
            int32_t *l_551 = &l_499[1];
            uint64_t l_576 = 0xA46E0888BDA9FEF2LL;
            int32_t l_589 = 1L;
            int32_t l_590 = 0x0E4AB70DL;
            uint32_t l_649[3];
            int8_t *****l_657 = (void*)0;
            int8_t *****l_658 = &l_656;
            int16_t *l_659 = &g_163;
            uint16_t *l_660 = &l_470;
            int16_t *l_661 = &g_474[1].f2;
            int32_t l_667 = 0x2AB19F10L;
            int32_t * const l_702 = &g_4;
            uint8_t l_720 = 255UL;
            uint8_t l_735[3];
            struct S0 l_744 = {-6L,1UL,-10L,255UL,65533UL,0UL,0x9004585EL};
            int32_t *l_766 = &g_4;
            int i;
            for (i = 0; i < 3; i++)
                l_649[i] = 0x3D1E2D26L;
            for (i = 0; i < 3; i++)
                l_735[i] = 3UL;
            if (p_14)
            { 
                int8_t *l_531 = &g_44;
                int8_t * const *l_545 = &g_42[5];
                int8_t * const **l_544 = &l_545;
                int8_t * const ***l_543 = &l_544;
                if ((p_14 , p_14))
                { 
                    return l_531;
                }
                else
                { 
                    int32_t *l_532[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_532[i][j] = &l_380;
                    }
                    l_533++;
                }
                for (l_524 = 2; (l_524 >= 0); l_524 -= 1)
                { 
                    uint32_t *l_547[3][5];
                    int32_t *l_550 = &g_62;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_547[i][j] = &g_335[1][0][0];
                    }
                    (*l_550) ^= ((g_270 , (0x53L < ((p_14 || ((l_548 = (!(((((safe_rshift_func_uint8_t_u_s(g_296[1][0][1], 4)) | (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_543 != l_546[0]), (((p_14 , 1UL) , p_14) && g_79[1][2][0]))), g_177[1].f1))) && 0xF321F62EL) || l_449) & p_14))) & 5UL)) >= l_549))) > p_14);
                }
                if (p_14)
                    break;
            }
            else
            { 
                uint64_t l_562 = 0UL;
                int8_t *** const l_584 = &g_324[1];
                int32_t *l_585 = &l_499[5];
                int32_t *l_586 = (void*)0;
                int32_t *l_587 = &g_238.f2;
                int32_t *l_588[6] = {&g_238.f2,&g_238.f2,&g_62,&g_238.f2,&g_238.f2,&g_62};
                int i;
                for (g_270.f2 = 0; (g_270.f2 <= 5); g_270.f2 += 1)
                { 
                    int32_t *l_552[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_552[i] = &l_499[0];
                    l_552[3] = l_551;
                    (*l_551) |= (l_553 , g_206[1].f2);
                    p_14 = 9L;
                }
                for (l_553.f0 = (-29); (l_553.f0 < 6); ++l_553.f0)
                { 
                    int8_t *l_556 = (void*)0;
                    return l_556;
                }
                for (g_270.f2 = 0; (g_270.f2 < 22); g_270.f2 = safe_add_func_int8_t_s_s(g_270.f2, 2))
                { 
                    int32_t *l_559 = &g_62;
                    int32_t *l_560 = &g_518[4][1];
                    int32_t *l_561[7] = {&g_270.f2,&g_270.f2,&g_62,&g_270.f2,&g_270.f2,&g_62,&g_270.f2};
                    int32_t **l_565[4][5][6] = {{{&l_559,&l_561[4],&l_559,&l_551,&l_551,&l_559},{&l_551,&l_551,&l_551,(void*)0,(void*)0,&l_561[4]},{&l_559,&l_551,&l_561[4],&g_68,&l_560,&l_551},{&l_559,&l_559,&l_561[4],&l_561[6],&l_551,&l_561[4]},{&l_551,&l_561[6],&l_551,&l_560,&l_561[5],&l_559}},{{&l_560,&l_561[5],&l_559,&g_68,&l_561[1],&l_560},{&l_551,&l_559,&l_561[4],(void*)0,&l_561[4],&l_559},{&l_561[4],&l_561[4],&g_68,(void*)0,&l_560,&g_68},{&l_551,&l_561[4],(void*)0,&l_561[1],&l_560,&l_561[4]},{&l_561[0],&l_561[4],&l_559,&l_559,&l_560,&l_561[0]}},{{&l_560,&l_561[4],&l_561[0],&l_561[6],&l_561[0],&g_68},{&g_68,&l_559,&l_559,&l_561[4],&l_559,&l_551},{&l_561[0],&l_560,&l_560,&l_560,&l_560,&l_561[0]},{&l_561[1],&l_561[0],&l_561[1],&l_559,(void*)0,&l_559},{(void*)0,&l_551,&l_561[0],&l_559,&l_551,(void*)0}},{{(void*)0,&l_560,&l_559,&l_559,&l_560,&g_68},{&l_561[1],(void*)0,&l_551,&l_560,&l_559,&l_561[4]},{&l_561[0],&l_561[4],&l_561[5],&l_561[4],&l_560,&l_559},{&g_68,&l_561[0],&l_551,&l_561[0],&g_68,&l_551},{&l_561[4],&l_559,&l_561[0],(void*)0,&l_560,&l_561[4]}}};
                    int i, j, k;
                    l_562--;
                    l_566 = &l_548;
                    (*l_566) = (((safe_sub_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((8UL | (0xD350L != (((safe_div_func_int32_t_s_s(((*l_560) = (safe_mod_func_uint8_t_u_u((~(l_576++)), g_61))), (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_583 != l_584), g_247)), 6)))) | (((p_14 != p_14) || 0x91E917E4L) && 7L)) < l_499[1]))), 0xDAD3L)) >= g_149[2][0]), p_14)) != 0L) && g_148[0]);
                }
                (*l_551) = (-10L);
                ++l_591;
            }
        }
        l_805--;
    }
    return (***l_656);
}



static int32_t  func_19(const int32_t  p_20)
{ 
    int16_t l_21 = 0x7968L;
    return l_21;
}



static const union U3  func_24(int64_t  p_25, union U2  p_26, uint8_t  p_27, int32_t  p_28)
{ 
    union U2 *l_269 = &g_270;
    int32_t l_290 = (-6L);
    const struct S0 ***l_293 = &g_291[0];
    struct S0 l_294 = {1L,4294967295UL,0x23CF24CAD0B55079LL,0x90L,0x92FFL,1UL,0UL};
    uint16_t *l_297 = (void*)0;
    int32_t *l_298 = &g_49;
    int8_t *l_325[1];
    uint32_t *l_326 = &g_108;
    int32_t l_327 = 1L;
    int32_t *l_328 = &g_62;
    int32_t *l_329 = (void*)0;
    int32_t *l_330 = &g_270.f0;
    int32_t *l_331 = &g_238.f0;
    int32_t *l_332[7] = {&g_49,&l_290,&l_290,&g_49,&l_290,&l_290,&g_49};
    int32_t l_333 = 0L;
    int32_t l_334 = 0L;
    const union U3 l_338[2][2] = {{{0},{0}},{{0},{0}}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_325[i] = &g_44;
    l_269 = &p_26;
    p_26.f0 &= p_27;
    (*l_298) ^= (p_28 ^= (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((+(p_25 <= (g_138 , p_26.f1))) | (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_290 = (((((safe_rshift_func_int8_t_s_u(((((((((safe_div_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s(l_290, (((&g_205[0][2] != ((*l_293) = g_291[0])) & (l_294 , 7UL)) || p_26.f2))) > 0xBEE34228D4045217LL) >= g_238.f1) && p_26.f1) || l_294.f5), 0x8AL)) < 0x1DL) > 8UL) , l_294.f6) != p_27) < p_26.f2) != (-8L)) <= l_294.f4), 3)) || 1UL) < p_26.f3) , g_295) != l_297)), p_26.f3)), 4)), l_294.f5)), l_294.f4))) ^ p_27), p_26.f2)), 0x00L)));
    (*l_328) ^= ((*l_298) = ((*l_298) > (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((*l_298) != (((p_26.f3 >= (safe_add_func_uint16_t_u_u(((*g_295) = (*l_298)), (safe_div_func_int64_t_s_s((p_26.f0 == (((safe_sub_func_int64_t_s_s((((p_27 ^= (safe_mul_func_int8_t_s_s((l_327 = ((((((((*g_128) = (safe_div_func_uint32_t_u_u(((*l_326) = ((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s((l_290 |= (safe_sub_func_uint16_t_u_u(((void*)0 == g_323), p_26.f1))), 6L)), 18446744073709551615UL)) < 4294967287UL), p_26.f1)) , 4294967287UL)), 0x2EBB88A4L))) & g_96) & 247UL) != 0xC001L) < (*l_298)) , 4294967294UL) == 0xB7F18593L)), 0xC5L))) || 0xF5L) <= 0xF8A84BF4C2580819LL), g_206[1].f2)) == p_26.f2) < (*l_298))), g_265))))) & (*l_298)) > p_26.f3)) < 0L), (*l_298))), (*l_298))) & 18446744073709551615UL) , p_27)));
    --g_335[1][0][0];
    return l_338[0][0];
}



static int64_t  func_29(int32_t  p_30)
{ 
    uint64_t l_166 = 0xD0E80A38D96ED306LL;
    int32_t l_168 = (-4L);
    int32_t l_172 = 0xD9DFB2C9L;
    int32_t l_173[3][5] = {{0L,0xC0EF0C6DL,0L,0xC0EF0C6DL,0L},{5L,5L,5L,5L,5L},{0L,0xC0EF0C6DL,0L,0xC0EF0C6DL,0L}};
    uint32_t *l_199[2];
    uint32_t ** const l_198 = &l_199[1];
    int32_t *l_227 = &g_4;
    int32_t *l_246[3][5] = {{&l_172,&l_172,&l_172,&l_172,&l_172},{&l_172,&g_4,&l_172,&g_4,&l_172},{&l_172,&l_172,&l_172,&l_172,&l_172}};
    uint64_t *l_254 = &g_247;
    uint32_t l_263[2];
    int16_t *l_264 = &g_95[1];
    int i, j;
    for (i = 0; i < 2; i++)
        l_199[i] = &g_96;
    for (i = 0; i < 2; i++)
        l_263[i] = 1UL;
    for (p_30 = 0; (p_30 <= (-19)); p_30 = safe_sub_func_int8_t_s_s(p_30, 3))
    { 
        int8_t *l_43 = &g_44;
        int8_t **l_45 = &l_43;
        int32_t *l_169 = &g_4;
        uint32_t ** const l_220 = (void*)0;
        int64_t *l_223[7];
        int32_t l_237[2][3][3] = {{{0L,0L,1L},{0L,1L,1L},{1L,0x0EB87858L,(-1L)}},{{0L,0x0EB87858L,0L},{0L,1L,(-1L)},{0L,0L,1L}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_223[i] = (void*)0;
        if ((0x4B082B0002500428LL != (((0x9BF0BB9AL && ((p_30 && func_38(g_42[2], p_30, ((*l_45) = l_43))) < g_95[1])) && l_166) | 0x7CB4L)))
        { 
            int16_t l_180 = 0x1047L;
            const int32_t *l_203 = &g_49;
            for (l_166 = 0; (l_166 <= 0); l_166 += 1)
            { 
                int32_t *l_170 = &g_62;
                for (g_108 = 0; (g_108 <= 0); g_108 += 1)
                { 
                    int32_t *l_167[6][1] = {{&g_4},{&g_49},{&g_4},{&g_49},{&g_4},{&g_49}};
                    int i, j, k;
                    l_170 = ((g_49 &= (l_168 = g_79[(g_108 + 3)][(g_108 + 1)][l_166])) , l_169);
                }
                for (l_168 = 1; (l_168 >= 0); l_168 -= 1)
                { 
                    int32_t *l_171 = &g_62;
                    int i, j, k;
                    (*l_171) |= g_79[l_168][(l_166 + 2)][l_166];
                    l_172 ^= p_30;
                    if ((*l_169))
                        continue;
                }
            }
            for (l_166 = 0; (l_166 <= 0); l_166 += 1)
            { 
                uint16_t l_174 = 65531UL;
                int16_t *l_179 = (void*)0;
                int32_t l_197 = 0x23E0A804L;
                struct S0 *l_208 = &g_206[0];
                struct S0 **l_207 = &l_208;
                int32_t l_216 = 0x58BF67FCL;
                for (g_44 = 1; (g_44 >= 0); g_44 -= 1)
                { 
                    int i, j, k;
                    g_62 = g_63[l_166][l_166][l_166];
                }
                if (((l_173[0][2] <= l_174) , (((safe_mod_func_int16_t_s_s((g_177[1] , (l_180 = (!(l_169 == l_169)))), 1UL)) != p_30) , p_30)))
                { 
                    int32_t **l_181 = (void*)0;
                    const int32_t *l_182 = &g_49;
                    l_182 = (void*)0;
                }
                else
                { 
                    uint8_t *l_188 = &g_151;
                    const int16_t l_191[2] = {0x9E33L,0x9E33L};
                    uint16_t *l_194 = &l_174;
                    int32_t *l_195 = (void*)0;
                    int32_t *l_196[3];
                    uint32_t **l_201 = &l_199[1];
                    uint32_t ***l_200 = &l_201;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_196[i] = &l_172;
                    l_197 = ((~((g_177[1] , (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((*l_194) |= (((*l_188) = p_30) , (l_173[0][2] < ((safe_mul_func_int8_t_s_s((l_191[1] >= (safe_lshift_func_int16_t_s_u(g_177[1].f5, 14))), 1L)) , 0xBD36F7DAL)))), (-1L))), g_61))) , 8UL)) , 0x5ED675E8L);
                    (*l_200) = l_198;
                }
                if ((p_30 | (safe_unary_minus_func_int64_t_s(p_30))))
                { 
                    const int32_t **l_204 = (void*)0;
                    l_203 = l_203;
                }
                else
                { 
                    if (p_30)
                        break;
                }
                (*l_207) = (g_205[0][2] = &g_177[1]);
                for (l_172 = 0; (l_172 >= 0); l_172 -= 1)
                { 
                    int32_t **l_209 = &l_169;
                    uint64_t *l_214 = &g_79[3][1][0];
                    int32_t *l_215[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_215[i] = &g_62;
                    (*l_209) = &l_172;
                    l_168 = ((g_63[l_166][l_166][l_172] & (((l_197 && ((safe_rshift_func_int16_t_s_s(g_177[1].f5, 13)) | ((l_216 &= (safe_mul_func_int16_t_s_s(((((p_30 || (l_203 != (((*l_214) |= 0xA0D8A4525A2D44B3LL) , (*l_198)))) , l_197) | 0xF3L) , p_30), (-10L)))) || 1UL))) || l_174) | p_30)) , p_30);
                    return l_173[0][2];
                }
            }
        }
        else
        { 
            int32_t *l_217 = &l_168;
            uint32_t **l_218 = (void*)0;
            uint32_t ***l_219 = &l_218;
            int32_t **l_228 = (void*)0;
            int32_t **l_229 = &g_68;
            int32_t **l_230 = &g_68;
            int32_t **l_231 = &l_169;
            (*l_217) &= g_206[1].f5;
            (*l_217) = (((p_30 >= p_30) <= 0L) ^ ((0x0FL || (((*l_219) = l_218) == l_220)) > (safe_div_func_uint16_t_u_u((l_223[4] != &g_150), p_30))));
            (*l_217) = (safe_rshift_func_int16_t_s_u((((-1L) || 0x95L) , (+(((l_173[0][2] >= ((0xC589E3AFAC9E9ED2LL | (((*l_231) = l_227) == &g_49)) <= (g_206[1].f1 ^ g_149[2][0]))) >= p_30) ^ p_30))), 7));
            for (g_150 = 5; (g_150 >= 0); g_150 -= 1)
            { 
                struct S1 l_232 = {0xF3A2D1CAL,18446744073709551608UL,6UL};
                uint32_t *l_235 = &g_206[1].f6;
                int8_t ***l_239 = (void*)0;
                int8_t ***l_240 = &l_45;
                int i;
                g_68 = &g_4;
                for (g_108 = 0; (g_108 <= 5); g_108 += 1)
                { 
                    uint32_t **l_236 = &l_235;
                    l_237[0][2][1] &= ((((((l_232 , (*l_217)) && 0x5A84L) != ((safe_mul_func_uint16_t_u_u(0x33B0L, p_30)) || (((*l_198) == ((*l_236) = l_235)) >= 0UL))) ^ l_232.f1) > p_30) ^ g_149[0][6]);
                    (*l_231) = &l_237[1][1][2];
                    (*l_217) = 0x6835EB3EL;
                    (*l_217) &= (g_238 , (*g_68));
                    return l_232.f0;
                }
                (*l_240) = &g_42[g_150];
                return p_30;
            }
            for (g_96 = (-6); (g_96 <= 21); g_96++)
            { 
                return p_30;
            }
        }
        l_227 = &l_168;
    }
    for (g_96 = (-1); (g_96 != 5); g_96++)
    { 
        int32_t **l_245 = &l_227;
        (*l_245) = (g_68 = &g_49);
    }
    g_247++;
    g_265 |= (safe_mod_func_uint32_t_u_u(((g_62 = ((safe_sub_func_uint64_t_u_u(p_30, ((*l_254) = g_177[1].f4))) | (safe_sub_func_int8_t_s_s(((((g_238.f3 , (((*l_264) ^= ((*l_227) > ((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_263[0], (7UL & g_177[1].f6))), 15)), g_177[1].f5)) <= g_138.f2))) < 0xA819L)) <= g_118[0][0][0]) >= p_30) & p_30), (-1L))))) , p_30), g_238.f1));
    return (*g_128);
}



static int8_t  func_38(int8_t * p_39, uint32_t  p_40, int8_t * p_41)
{ 
    uint32_t l_57 = 0xD69C043CL;
    int32_t l_60[3];
    int64_t l_107 = 2L;
    uint16_t l_110 = 1UL;
    int64_t *l_119 = (void*)0;
    struct S0 l_134[7][6][2] = {{{{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L},{0L,4294967295UL,0x120B4C8DAE2F31F1LL,4UL,0x04F0L,18446744073709551613UL,4294967295UL}},{{0xE04EL,1UL,0x0195D4EB7A0ED4F2LL,251UL,65528UL,18446744073709551615UL,4294967294UL},{0xAE3CL,7UL,0xF4DDFB9F2CFB6CEFLL,249UL,0x7331L,0x1430DB7CL,0x0F10FCC2L}},{{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL},{-1L,0UL,0x9FC186F313AD8628LL,0x0EL,0xDEEFL,7UL,0UL}},{{0L,4294967295UL,0x120B4C8DAE2F31F1LL,4UL,0x04F0L,18446744073709551613UL,4294967295UL},{-1L,0UL,0x9FC186F313AD8628LL,0x0EL,0xDEEFL,7UL,0UL}},{{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL},{0xAE3CL,7UL,0xF4DDFB9F2CFB6CEFLL,249UL,0x7331L,0x1430DB7CL,0x0F10FCC2L}},{{0xE04EL,1UL,0x0195D4EB7A0ED4F2LL,251UL,65528UL,18446744073709551615UL,4294967294UL},{0L,4294967295UL,0x120B4C8DAE2F31F1LL,4UL,0x04F0L,18446744073709551613UL,4294967295UL}}},{{{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L},{1L,0x4E6B69ECL,0xD4FD1129C701984FLL,253UL,9UL,0xA6D0D7E7L,0x7D96564EL}},{{0xDDD5L,0x7FB97F93L,0x7D55B7D1A5100E80LL,0xA5L,65535UL,1UL,0x350AEA43L},{0x8D5CL,0x1AD10CDFL,0x88F8C1251048636CLL,251UL,0x4B89L,1UL,0UL}},{{0x1251L,0x2307333BL,0xD5F1929AE18D8E2ALL,0x35L,0x42E9L,1UL,0x33D0BF8AL},{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL}},{{-1L,4UL,-2L,0xFAL,1UL,0x67BE3AB8L,0x6AB63C8DL},{-1L,4UL,-2L,0xFAL,1UL,0x67BE3AB8L,0x6AB63C8DL}},{{0L,4294967295UL,0x4C086913B2D3918DLL,0xD5L,0x1E91L,18446744073709551612UL,1UL},{0xE04EL,1UL,0x0195D4EB7A0ED4F2LL,251UL,65528UL,18446744073709551615UL,4294967294UL}},{{-7L,0x411E098AL,0x3124D0BBB056BFF1LL,0x99L,0x005EL,0x57605C23L,0x66CE57EEL},{-10L,0UL,5L,255UL,1UL,0x2BC8F806L,0x3831CB3AL}}},{{{2L,0x7792124FL,0xB6BA350D549ECA2FLL,255UL,1UL,1UL,0x132469D7L},{3L,0x527C6EF0L,0x18B1378FC9453CEALL,0x7AL,0x5A1EL,18446744073709551607UL,0x92D8F591L}},{{0xEA5FL,0x5C3A27A7L,-5L,0xE5L,3UL,0UL,0x65B027A9L},{2L,0x7792124FL,0xB6BA350D549ECA2FLL,255UL,1UL,1UL,0x132469D7L}},{{1L,0x4E6B69ECL,0xD4FD1129C701984FLL,253UL,9UL,0xA6D0D7E7L,0x7D96564EL},{0x128FL,0xB6ADA375L,0x8AA76C0FFB38DBA4LL,0UL,0x5B20L,0xDBCDBA4BL,5UL}},{{1L,0x4E6B69ECL,0xD4FD1129C701984FLL,253UL,9UL,0xA6D0D7E7L,0x7D96564EL},{2L,0x7792124FL,0xB6BA350D549ECA2FLL,255UL,1UL,1UL,0x132469D7L}},{{0xEA5FL,0x5C3A27A7L,-5L,0xE5L,3UL,0UL,0x65B027A9L},{3L,0x527C6EF0L,0x18B1378FC9453CEALL,0x7AL,0x5A1EL,18446744073709551607UL,0x92D8F591L}},{{2L,0x7792124FL,0xB6BA350D549ECA2FLL,255UL,1UL,1UL,0x132469D7L},{-10L,0UL,5L,255UL,1UL,0x2BC8F806L,0x3831CB3AL}}},{{{-7L,0x411E098AL,0x3124D0BBB056BFF1LL,0x99L,0x005EL,0x57605C23L,0x66CE57EEL},{0xE04EL,1UL,0x0195D4EB7A0ED4F2LL,251UL,65528UL,18446744073709551615UL,4294967294UL}},{{0L,4294967295UL,0x4C086913B2D3918DLL,0xD5L,0x1E91L,18446744073709551612UL,1UL},{-1L,4UL,-2L,0xFAL,1UL,0x67BE3AB8L,0x6AB63C8DL}},{{-1L,4UL,-2L,0xFAL,1UL,0x67BE3AB8L,0x6AB63C8DL},{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL}},{{0x1251L,0x2307333BL,0xD5F1929AE18D8E2ALL,0x35L,0x42E9L,1UL,0x33D0BF8AL},{0x8D5CL,0x1AD10CDFL,0x88F8C1251048636CLL,251UL,0x4B89L,1UL,0UL}},{{0xDDD5L,0x7FB97F93L,0x7D55B7D1A5100E80LL,0xA5L,65535UL,1UL,0x350AEA43L},{1L,0x4E6B69ECL,0xD4FD1129C701984FLL,253UL,9UL,0xA6D0D7E7L,0x7D96564EL}},{{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L},{0L,4294967295UL,0x120B4C8DAE2F31F1LL,4UL,0x04F0L,18446744073709551613UL,4294967295UL}}},{{{0xE04EL,1UL,0x0195D4EB7A0ED4F2LL,251UL,65528UL,18446744073709551615UL,4294967294UL},{0xAE3CL,7UL,0xF4DDFB9F2CFB6CEFLL,249UL,0x7331L,0x1430DB7CL,0x0F10FCC2L}},{{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL},{-1L,0UL,0x9FC186F313AD8628LL,0x0EL,0xDEEFL,7UL,0UL}},{{0L,4294967295UL,0x120B4C8DAE2F31F1LL,4UL,0x04F0L,18446744073709551613UL,4294967295UL},{-1L,0UL,0x9FC186F313AD8628LL,0x0EL,0xDEEFL,7UL,0UL}},{{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL},{0xAE3CL,7UL,0xF4DDFB9F2CFB6CEFLL,249UL,0x7331L,0x1430DB7CL,0x0F10FCC2L}},{{0xE04EL,1UL,0x0195D4EB7A0ED4F2LL,251UL,65528UL,18446744073709551615UL,4294967294UL},{0L,4294967295UL,0x120B4C8DAE2F31F1LL,4UL,0x04F0L,18446744073709551613UL,4294967295UL}},{{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L},{1L,0x4E6B69ECL,0xD4FD1129C701984FLL,253UL,9UL,0xA6D0D7E7L,0x7D96564EL}}},{{{0xDDD5L,0x7FB97F93L,0x7D55B7D1A5100E80LL,0xA5L,65535UL,1UL,0x350AEA43L},{0x8D5CL,0x1AD10CDFL,0x88F8C1251048636CLL,251UL,0x4B89L,1UL,0UL}},{{0x1251L,0x2307333BL,0xD5F1929AE18D8E2ALL,0x35L,0x42E9L,1UL,0x33D0BF8AL},{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL}},{{-1L,4UL,-2L,0xFAL,1UL,0x67BE3AB8L,0x6AB63C8DL},{-1L,4UL,-2L,0xFAL,1UL,0x67BE3AB8L,0x6AB63C8DL}},{{0L,4294967295UL,0x4C086913B2D3918DLL,0xD5L,0x1E91L,18446744073709551612UL,1UL},{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL}},{{3L,0x527C6EF0L,0x18B1378FC9453CEALL,0x7AL,0x5A1EL,18446744073709551607UL,0x92D8F591L},{-1L,0UL,0x9FC186F313AD8628LL,0x0EL,0xDEEFL,7UL,0UL}},{{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L},{2L,0x7792124FL,0xB6BA350D549ECA2FLL,255UL,1UL,1UL,0x132469D7L}}},{{{0x55DCL,4294967295UL,0x238D5DD7BA2CA006LL,0UL,0x1E1BL,0x7B78FF20L,0x808E4DAEL},{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L}},{{0L,4294967295UL,0x4C086913B2D3918DLL,0xD5L,0x1E91L,18446744073709551612UL,1UL},{0xEA5FL,0x5C3A27A7L,-5L,0xE5L,3UL,0UL,0x65B027A9L}},{{0L,4294967295UL,0x4C086913B2D3918DLL,0xD5L,0x1E91L,18446744073709551612UL,1UL},{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L}},{{0x55DCL,4294967295UL,0x238D5DD7BA2CA006LL,0UL,0x1E1BL,0x7B78FF20L,0x808E4DAEL},{2L,0x7792124FL,0xB6BA350D549ECA2FLL,255UL,1UL,1UL,0x132469D7L}},{{3L,0xE090713BL,0x3A72CA7C10F7CF34LL,2UL,0x277CL,0x11E6948FL,0x1BDD6093L},{-1L,0UL,0x9FC186F313AD8628LL,0x0EL,0xDEEFL,7UL,0UL}},{{3L,0x527C6EF0L,0x18B1378FC9453CEALL,0x7AL,0x5A1EL,18446744073709551607UL,0x92D8F591L},{0xA68DL,4294967295UL,-1L,0xF9L,0xB119L,18446744073709551612UL,2UL}}}};
    uint64_t l_155 = 0x8A5E6A3A859A467DLL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_60[i] = (-1L);
lbl_91:
    for (g_44 = (-13); (g_44 <= 20); g_44 = safe_add_func_int64_t_s_s(g_44, 1))
    { 
        int32_t *l_48 = &g_49;
        int32_t *l_50 = (void*)0;
        int32_t *l_51 = &g_49;
        int32_t l_52 = (-1L);
        int32_t *l_53 = &g_49;
        int32_t l_54[2][7][3] = {{{0x29794902L,0xA324C99FL,0x745C5BB0L},{(-1L),(-1L),(-1L)},{0x29794902L,0x11CCFE98L,0x57606AB8L},{(-1L),0x5CA7DBC8L,1L},{0x29794902L,(-7L),0x29794902L},{(-1L),(-2L),(-7L)},{0x29794902L,0xA324C99FL,0x745C5BB0L}},{{(-1L),(-1L),(-1L)},{0x29794902L,0x11CCFE98L,0x57606AB8L},{(-1L),0x5CA7DBC8L,1L},{0x29794902L,(-7L),0x29794902L},{(-1L),(-2L),(-7L)},{0x29794902L,0xA324C99FL,0x745C5BB0L},{(-1L),(-1L),(-1L)}}};
        int32_t *l_55 = &l_52;
        int32_t *l_56[5][4] = {{&g_4,&g_4,&g_49,&g_4},{&g_4,(void*)0,&g_49,&g_49},{&g_4,&g_4,&g_4,&g_49},{&g_4,(void*)0,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}};
        uint64_t l_64 = 18446744073709551613UL;
        int32_t **l_67[5] = {&l_48,&l_48,&l_48,&l_48,&l_48};
        int i, j, k;
        --l_57;
        if (p_40)
            continue;
        l_64++;
        g_68 = &l_60[2];
        if (p_40)
            break;
    }
    for (g_49 = 0; (g_49 == (-24)); --g_49)
    { 
        int64_t l_71 = 0x2E55E195D318EE11LL;
        int32_t *l_72 = &g_62;
        int32_t *l_73 = &l_60[2];
        int32_t *l_74 = (void*)0;
        int32_t *l_75 = &g_62;
        int32_t *l_76 = &g_62;
        int32_t *l_77 = &g_62;
        int32_t *l_78[4];
        int64_t *l_88 = &l_71;
        int8_t **l_93 = (void*)0;
        uint32_t *l_109 = &g_96;
        int16_t l_129 = (-3L);
        union U3 l_135[6] = {{0},{0},{0},{0},{0},{0}};
        struct S0 l_145 = {0x7262L,0xFFD75F41L,0xF869BC433E80119DLL,1UL,0xD15AL,18446744073709551615UL,9UL};
        int i;
        for (i = 0; i < 4; i++)
            l_78[i] = &g_62;
        ++g_79[1][2][0];
        if ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_60[1] < ((*p_41) = 0L)), 6)), (safe_mod_func_int64_t_s_s(((*l_88) &= (g_62 & 0x8A02582781EE239CLL)), (safe_sub_func_uint8_t_u_u(p_40, (-3L))))))))
        { 
            int32_t **l_92 = &g_68;
            if (l_71)
                goto lbl_91;
            (*l_76) ^= (-5L);
            (*l_92) = l_72;
            if (p_40)
                break;
            (*l_92) = &g_49;
        }
        else
        { 
            int8_t l_94 = 5L;
            for (l_71 = 1; (l_71 <= 5); l_71 += 1)
            { 
                (*l_72) ^= (l_93 != &p_41);
                --g_96;
                if (g_96)
                    goto lbl_91;
            }
            return (*p_41);
        }
        if ((((((&p_39 != (g_79[1][2][0] , &g_42[2])) , p_39) == p_39) == ((((((((*l_109) = (safe_rshift_func_uint8_t_u_s((g_108 = (safe_rshift_func_int16_t_s_u((((((safe_div_func_uint64_t_u_u(((p_40 >= (safe_rshift_func_uint16_t_u_s((l_73 == &g_4), g_63[0][0][0]))) , 0x4EE88CA977D5910FLL), g_63[0][0][1])) < g_63[0][0][0]) ^ 0xA1L) | 1L) , l_107), 7))), 2))) > 0x5E26FEE0L) || g_63[0][1][0]) & p_40) , 65533UL) , 1UL) != 0x4E5F115DL)) > g_49))
        { 
            uint8_t l_111 = 0x33L;
            l_110 = 7L;
            if (l_111)
                break;
        }
        else
        { 
            uint64_t l_112[6][1][1];
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_112[i][j][k] = 18446744073709551614UL;
                }
            }
            l_112[1][0][0] = 0x2D0DC504L;
            l_129 = (((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_117[0][4] == l_119), (safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_s((&l_71 == (g_128 = (g_127 = &g_118[0][0][0]))), l_110)))), 65535UL)), ((g_4 , p_40) || (*g_68)))))), g_49)) < p_40) , p_40);
            return (*p_41);
        }
        (*l_73) = (safe_sub_func_uint64_t_u_u((l_107 < ((l_57 != ((l_134[6][3][1] , (l_135[5] , p_40)) ^ 0x34B2721DL)) ^ (g_44 != g_79[0][0][1]))), 0x18F9F8067CD4424CLL));
        if (((safe_mod_func_int16_t_s_s((g_138 , p_40), (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((l_145 , p_40), 5)) | ((*l_73) , (l_60[0] |= (p_40 || 2UL)))), p_40)), 9)))) & g_79[1][2][0]))
        { 
            for (p_40 = 0; p_40 < 4; p_40 += 1)
            {
                for (g_138.f0 = 0; g_138.f0 < 3; g_138.f0 += 1)
                {
                    for (g_108 = 0; g_108 < 2; g_108 += 1)
                    {
                        g_79[p_40][g_138.f0][g_108] = 0x07CDC40B6075C13ALL;
                    }
                }
            }
        }
        else
        { 
            int32_t l_146 = 0x7A47DF5CL;
            int32_t l_147[6] = {0x1E049028L,0x1E049028L,0xD445000EL,0x1E049028L,0x1E049028L,0xD445000EL};
            uint8_t *l_158 = &l_145.f3;
            int i;
            g_151--;
            l_60[2] |= (safe_unary_minus_func_int32_t_s(l_147[4]));
            --l_155;
            g_163 &= (((void*)0 != &g_68) < (l_147[4] && ((--(*l_158)) != ((*g_68) ^ (safe_mul_func_int8_t_s_s(((*p_41) = (g_150 && (&g_63[0][1][1] != (void*)0))), (*l_75)))))));
            (*l_76) = (safe_rshift_func_uint16_t_u_s(0x0BACL, 0));
        }
    }
    return (*p_41);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_63[i][j][k], "g_63[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_79[i][j][k], "g_79[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_118[i][j][k], "g_118[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_149[i][j], "g_149[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_177[i].f0, "g_177[i].f0", print_hash_value);
        transparent_crc(g_177[i].f1, "g_177[i].f1", print_hash_value);
        transparent_crc(g_177[i].f2, "g_177[i].f2", print_hash_value);
        transparent_crc(g_177[i].f3, "g_177[i].f3", print_hash_value);
        transparent_crc(g_177[i].f4, "g_177[i].f4", print_hash_value);
        transparent_crc(g_177[i].f5, "g_177[i].f5", print_hash_value);
        transparent_crc(g_177[i].f6, "g_177[i].f6", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_206[i].f0, "g_206[i].f0", print_hash_value);
        transparent_crc(g_206[i].f1, "g_206[i].f1", print_hash_value);
        transparent_crc(g_206[i].f2, "g_206[i].f2", print_hash_value);
        transparent_crc(g_206[i].f3, "g_206[i].f3", print_hash_value);
        transparent_crc(g_206[i].f4, "g_206[i].f4", print_hash_value);
        transparent_crc(g_206[i].f5, "g_206[i].f5", print_hash_value);
        transparent_crc(g_206[i].f6, "g_206[i].f6", print_hash_value);

    }
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_270.f2, "g_270.f2", print_hash_value);
    transparent_crc(g_270.f3, "g_270.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_296[i][j][k], "g_296[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_335[i][j][k], "g_335[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_448[i][j], "g_448[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_518[i][j], "g_518[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_897[i][j], "g_897[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1381, "g_1381", print_hash_value);
    transparent_crc(g_1385, "g_1385", print_hash_value);
    transparent_crc(g_1474, "g_1474", print_hash_value);
    transparent_crc(g_1487, "g_1487", print_hash_value);
    transparent_crc(g_1627.f0, "g_1627.f0", print_hash_value);
    transparent_crc(g_1627.f1, "g_1627.f1", print_hash_value);
    transparent_crc(g_1627.f2, "g_1627.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1685[i].f0, "g_1685[i].f0", print_hash_value);
        transparent_crc(g_1685[i].f1, "g_1685[i].f1", print_hash_value);
        transparent_crc(g_1685[i].f2, "g_1685[i].f2", print_hash_value);

    }
    transparent_crc(g_1698, "g_1698", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
