// SPDX-License-Identifier: MIT
// cctest_csmith_c113cc96.c --- cctest case csmith_c113cc96 (csmith seed 3239300246)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc2c7f6eb */
/* @exp_ticks 0x603a */

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

// Options:   -s 3239300246 -o /tmp/csmith_gen_vopy_9dw/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   const int64_t  f1;
   const uint8_t  f2;
   int32_t  f3;
};

union U1 {
   int32_t  f0;
};


static int32_t g_3 = (-3L);
static uint32_t g_10 = 0x8A012E1DL;
static uint32_t g_32[2][4] = {{2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL}};
static int32_t g_46[1][6] = {{0xEE49CE57L,6L,6L,0xEE49CE57L,6L,6L}};
static int32_t g_68 = (-1L);
static int32_t *g_76 = &g_68;
static int32_t **g_75 = &g_76;
static uint32_t g_120 = 0x87569931L;
static uint64_t g_151 = 18446744073709551608UL;
static uint16_t g_170 = 0x478DL;
static int16_t g_178 = 0L;
static struct S0 g_203 = {254UL,6L,0x6CL,0x407F4EC8L};
static union U1 g_314[3] = {{0x97DEE2A0L},{0x97DEE2A0L},{0x97DEE2A0L}};
static union U1 * const g_313 = &g_314[1];
static union U1 *g_343 = (void*)0;
static const union U1 g_346 = {0x0F79D9A9L};
static int64_t g_348 = 0x54257C0BBB8B5C4DLL;
static int8_t g_393 = 0xB5L;
static int32_t g_394 = 0x15347BC1L;
static int16_t * const g_429 = (void*)0;
static int16_t * const *g_428 = &g_429;
static uint16_t g_438 = 65535UL;
static int64_t *g_466 = &g_348;
static int64_t **g_465 = &g_466;
static int64_t *** const g_464[5][7] = {{&g_465,&g_465,&g_465,&g_465,&g_465,&g_465,&g_465},{(void*)0,&g_465,&g_465,&g_465,&g_465,&g_465,&g_465},{&g_465,&g_465,&g_465,&g_465,&g_465,&g_465,&g_465},{(void*)0,&g_465,&g_465,&g_465,&g_465,&g_465,&g_465},{&g_465,&g_465,&g_465,&g_465,&g_465,&g_465,&g_465}};
static uint64_t g_570 = 0xED2F0F0E387EDCF0LL;
static uint8_t *g_597 = &g_203.f0;
static int32_t g_616 = 7L;
static int64_t g_664 = 0x7DB23885C919C2BDLL;
static union U1 **g_668 = &g_343;
static union U1 ***g_667 = &g_668;
static union U1 ****g_666 = &g_667;
static uint64_t *g_671 = &g_570;
static uint64_t **g_670 = &g_671;
static uint64_t ***g_669 = &g_670;
static int32_t g_771 = 4L;
static uint8_t g_820 = 250UL;
static uint16_t g_832 = 0x91ECL;
static int32_t g_833 = (-3L);
static uint32_t g_860 = 1UL;
static uint32_t g_926[3] = {9UL,9UL,9UL};
static struct S0 **g_995 = (void*)0;
static int32_t *g_998 = &g_68;
static int32_t g_1032 = 0x2F1161DCL;
static int64_t g_1036 = 1L;
static uint32_t g_1041 = 5UL;
static uint32_t g_1046[5] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
static struct S0 g_1150 = {0xBAL,0xEF6216AB4BDBF0D7LL,6UL,-1L};
static struct S0 *g_1149[4][6][1] = {{{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150}},{{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150}},{{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150}},{{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150},{&g_1150}}};
static int8_t *g_1184[4][6][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&g_393,&g_393,&g_393},{&g_393,&g_393,(void*)0,&g_393,&g_393,&g_393,(void*)0},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,(void*)0,&g_393,(void*)0,&g_393,&g_393},{&g_393,&g_393,&g_393,(void*)0,(void*)0,&g_393,&g_393},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393}},{{(void*)0,&g_393,&g_393,(void*)0,&g_393,&g_393,(void*)0},{(void*)0,&g_393,(void*)0,&g_393,&g_393,&g_393,&g_393},{&g_393,(void*)0,&g_393,(void*)0,&g_393,&g_393,&g_393},{&g_393,&g_393,(void*)0,&g_393,&g_393,&g_393,(void*)0},{&g_393,&g_393,(void*)0,&g_393,(void*)0,&g_393,&g_393},{&g_393,&g_393,(void*)0,&g_393,(void*)0,&g_393,&g_393}},{{&g_393,&g_393,&g_393,(void*)0,&g_393,&g_393,(void*)0},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,&g_393,(void*)0,&g_393,&g_393,&g_393},{(void*)0,&g_393,(void*)0,&g_393,&g_393,&g_393,&g_393},{(void*)0,(void*)0,(void*)0,(void*)0,&g_393,&g_393,&g_393},{&g_393,&g_393,(void*)0,&g_393,&g_393,&g_393,(void*)0}},{{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,(void*)0,&g_393,(void*)0,&g_393,&g_393},{&g_393,&g_393,&g_393,(void*)0,(void*)0,&g_393,&g_393},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{(void*)0,&g_393,&g_393,(void*)0,&g_393,&g_393,(void*)0},{(void*)0,&g_393,(void*)0,&g_393,&g_393,&g_393,&g_393}}};
static int8_t **g_1183 = &g_1184[2][0][6];
static uint32_t *g_1216 = &g_1046[4];
static uint32_t **g_1215[4][6][3] = {{{&g_1216,&g_1216,&g_1216},{(void*)0,(void*)0,&g_1216},{&g_1216,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1216},{&g_1216,&g_1216,&g_1216},{&g_1216,(void*)0,&g_1216}},{{&g_1216,(void*)0,&g_1216},{&g_1216,(void*)0,&g_1216},{(void*)0,&g_1216,&g_1216},{&g_1216,&g_1216,&g_1216},{&g_1216,(void*)0,&g_1216},{&g_1216,&g_1216,&g_1216}},{{&g_1216,&g_1216,&g_1216},{&g_1216,&g_1216,&g_1216},{&g_1216,&g_1216,&g_1216},{&g_1216,&g_1216,&g_1216},{&g_1216,(void*)0,&g_1216},{&g_1216,&g_1216,(void*)0}},{{&g_1216,&g_1216,&g_1216},{&g_1216,(void*)0,&g_1216},{&g_1216,&g_1216,(void*)0},{&g_1216,(void*)0,&g_1216},{&g_1216,(void*)0,&g_1216},{&g_1216,&g_1216,&g_1216}}};
static int32_t *g_1228[7][5] = {{&g_68,&g_314[1].f0,&g_68,&g_68,&g_314[1].f0},{&g_314[1].f0,&g_68,&g_68,&g_314[1].f0,&g_68},{&g_314[1].f0,&g_314[1].f0,(void*)0,&g_314[1].f0,&g_314[1].f0},{&g_68,&g_314[1].f0,&g_68,&g_68,&g_314[1].f0},{&g_314[1].f0,&g_68,&g_68,&g_314[1].f0,&g_68},{&g_314[1].f0,&g_314[1].f0,(void*)0,&g_314[1].f0,&g_314[1].f0},{&g_68,&g_314[1].f0,&g_68,&g_68,&g_314[1].f0}};
static int16_t g_1280 = 9L;
static uint8_t g_1314 = 0x28L;
static uint32_t *g_1329 = &g_860;
static uint32_t **g_1328 = &g_1329;
static uint32_t ***g_1327[5][7][7] = {{{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328}},{{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,(void*)0,&g_1328},{&g_1328,&g_1328,&g_1328,(void*)0,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328}},{{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328}},{{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328}},{{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328},{&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328,&g_1328}}};
static int8_t g_1367 = 0L;
static int32_t ****g_1384[2] = {(void*)0,(void*)0};
static int32_t *****g_1383[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t g_1395 = 0xB054D5AE820329D2LL;
static int16_t *g_1487 = (void*)0;
static int16_t **g_1486[2] = {&g_1487,&g_1487};
static int16_t *** const g_1485 = &g_1486[0];
static int16_t *** const *g_1484 = &g_1485;
static int16_t *** const **g_1483 = &g_1484;
static uint16_t *g_1790 = &g_170;
static uint16_t **g_1789 = &g_1790;
static uint32_t ***g_1902 = &g_1215[3][2][2];
static struct S0 ***g_1903 = &g_995;
static uint64_t g_1941[2][6] = {{1UL,5UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}};
static int64_t *** const *g_2020 = &g_464[4][6];
static int64_t *** const * const *g_2019 = &g_2020;
static int64_t ***g_2026 = &g_465;
static int64_t ****g_2025[4][6][5] = {{{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026}},{{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026}},{{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026}},{{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026},{&g_2026,(void*)0,&g_2026,(void*)0,&g_2026},{&g_2026,&g_2026,&g_2026,&g_2026,&g_2026}}};
static int64_t *****g_2024 = &g_2025[0][5][3];
static int32_t g_2093 = 0L;
static int32_t g_2116 = 0xC4516985L;
static uint8_t g_2247[5] = {7UL,7UL,7UL,7UL,7UL};
static const uint64_t g_2260[2] = {0xEDDA87D9E4C9B6CBLL,0xEDDA87D9E4C9B6CBLL};
static int32_t g_2328 = (-1L);
static struct S0 g_2415 = {255UL,2L,0xC3L,0L};
static int32_t ** const *g_2569 = (void*)0;
static int32_t *g_2573[4][4][4] = {{{&g_2093,&g_1150.f3,&g_2116,&g_2116},{&g_203.f3,&g_1150.f3,&g_203.f3,(void*)0},{&g_1150.f3,(void*)0,&g_2116,(void*)0},{(void*)0,&g_2116,&g_2093,(void*)0}},{{&g_2093,&g_2093,&g_2093,&g_2093},{(void*)0,(void*)0,&g_2116,&g_203.f3},{&g_1150.f3,&g_2093,&g_203.f3,&g_2415.f3},{&g_203.f3,&g_2415.f3,&g_2116,&g_2415.f3}},{{&g_2093,&g_2093,&g_2116,&g_203.f3},{&g_1150.f3,(void*)0,&g_2415.f3,&g_2093},{&g_2116,&g_2093,(void*)0,(void*)0},{&g_2116,&g_2116,&g_2415.f3,(void*)0}},{{&g_1150.f3,(void*)0,&g_2116,(void*)0},{&g_2093,&g_1150.f3,&g_2116,&g_2415.f3},{(void*)0,(void*)0,(void*)0,&g_2093},{(void*)0,&g_2093,&g_2116,(void*)0}}};
static int32_t **g_2572 = &g_2573[0][1][0];
static int32_t ***g_2571 = &g_2572;
static struct S0 g_2908[4][4] = {{{0x5DL,0L,0xBFL,0x965B7455L},{0x5DL,0L,0xBFL,0x965B7455L},{0x27L,0L,1UL,9L},{0x27L,0L,1UL,9L}},{{0x5DL,0L,0xBFL,0x965B7455L},{0x5DL,0L,0xBFL,0x965B7455L},{0x27L,0L,1UL,9L},{0x27L,0L,1UL,9L}},{{0x5DL,0L,0xBFL,0x965B7455L},{0x5DL,0L,0xBFL,0x965B7455L},{0x27L,0L,1UL,9L},{0x27L,0L,1UL,9L}},{{0x5DL,0L,0xBFL,0x965B7455L},{0x5DL,0L,0xBFL,0x965B7455L},{0x27L,0L,1UL,9L},{0x27L,0L,1UL,9L}}};
static int8_t ***g_2952 = &g_1183;
static struct S0 g_3201 = {0xC4L,0L,1UL,0x173ED3EFL};
static struct S0 g_3219[4] = {{2UL,4L,0UL,-1L},{2UL,4L,0UL,-1L},{2UL,4L,0UL,-1L},{2UL,4L,0UL,-1L}};
static int16_t ***g_3365 = (void*)0;
static int16_t ****g_3364 = &g_3365;
static int16_t *****g_3363 = &g_3364;
static uint32_t g_3389 = 0xE6AD4711L;
static uint32_t ****g_3474[4][3][4] = {{{&g_1902,&g_1902,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_1902},{&g_1902,&g_1902,(void*)0,&g_1902}},{{(void*)0,&g_1902,(void*)0,(void*)0},{&g_1902,&g_1902,&g_1902,&g_1902},{&g_1902,&g_1902,(void*)0,&g_1902}},{{&g_1902,(void*)0,&g_1902,(void*)0},{&g_1902,&g_1902,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_1902}},{{&g_1902,&g_1902,(void*)0,&g_1902},{(void*)0,&g_1902,(void*)0,(void*)0},{&g_1902,&g_1902,&g_1902,&g_1902}}};
static uint32_t g_3549 = 0UL;
static int32_t g_3613 = 0x377D23C5L;
static union U1 *** const *g_3662 = (void*)0;
static union U1 g_3799 = {0x70E56378L};
static int32_t g_3835 = (-1L);
static uint32_t ** const *g_3939[5][6] = {{&g_1215[1][1][0],&g_1215[2][4][1],(void*)0,(void*)0,(void*)0,&g_1215[2][4][1]},{(void*)0,&g_1215[1][1][0],(void*)0,&g_1215[0][4][2],&g_1215[0][4][2],(void*)0},{(void*)0,(void*)0,&g_1215[0][4][2],(void*)0,&g_1215[2][4][1],(void*)0},{&g_1215[1][1][0],(void*)0,&g_1215[1][1][0],(void*)0,&g_1215[0][4][2],&g_1215[0][4][2]},{&g_1215[2][4][1],&g_1215[1][1][0],&g_1215[1][1][0],&g_1215[2][4][1],(void*)0,(void*)0}};
static uint32_t ** const **g_3938 = &g_3939[1][1];
static const struct S0 *g_3970[4] = {&g_3219[0],&g_3219[0],&g_3219[0],&g_3219[0]};
static const struct S0 ** const g_3969 = &g_3970[0];
static const struct S0 ** const *g_3968 = &g_3969;
static const struct S0 ** const **g_3967[6] = {&g_3968,&g_3968,&g_3968,&g_3968,&g_3968,&g_3968};



static int8_t  func_1(void);
static int32_t  func_13(int32_t * p_14, const int32_t * p_15, uint32_t  p_16);
static int32_t * func_17(int32_t * const  p_18, uint64_t  p_19);
static int32_t * func_20(uint32_t  p_21, int32_t * p_22, int32_t * p_23, int32_t  p_24, int16_t  p_25);
static struct S0  func_26(uint32_t  p_27, int32_t * p_28, uint64_t  p_29, int32_t * p_30);
static int32_t * func_33(int32_t * p_34, int32_t  p_35, uint32_t  p_36);
static int32_t * func_37(int16_t  p_38, int32_t * p_39);
static int16_t  func_40(int32_t * p_41, int32_t * p_42);




static int8_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = &g_3;
    int32_t *l_8 = (void*)0;
    int32_t *l_9[1];
    int64_t **l_3688 = (void*)0;
    int64_t l_3695 = 0xE1189B7665A0A468LL;
    uint32_t *l_3701 = &g_1046[4];
    int16_t l_3717[1];
    int32_t l_3736 = 1L;
    int32_t l_3769 = 2L;
    uint8_t **l_3789 = &g_597;
    int32_t ***l_3791[6] = {&g_75,&g_75,&g_75,&g_75,&g_75,&g_75};
    int32_t **** const l_3790 = &l_3791[4];
    int8_t *l_3794 = (void*)0;
    uint32_t *****l_3807 = (void*)0;
    int64_t l_3855 = 0xCE17BE59457308E6LL;
    int8_t l_3856 = 0L;
    const uint32_t *l_3867 = &g_860;
    const uint32_t **l_3866 = &l_3867;
    const uint32_t ***l_3865[1][2][6];
    const uint32_t ****l_3864 = &l_3865[0][1][2];
    union U1 l_3875 = {0x03DEC8D2L};
    uint8_t l_3876 = 248UL;
    int32_t l_3877[3];
    uint32_t l_3884 = 0x372D6E1DL;
    uint16_t * const *l_3894 = (void*)0;
    uint16_t * const **l_3893[6][3][4] = {{{&l_3894,&l_3894,(void*)0,&l_3894},{&l_3894,(void*)0,&l_3894,&l_3894},{&l_3894,&l_3894,&l_3894,&l_3894}},{{&l_3894,&l_3894,(void*)0,(void*)0},{&l_3894,(void*)0,&l_3894,(void*)0},{&l_3894,(void*)0,&l_3894,(void*)0}},{{(void*)0,&l_3894,&l_3894,&l_3894},{&l_3894,&l_3894,&l_3894,&l_3894},{&l_3894,(void*)0,&l_3894,&l_3894}},{{(void*)0,&l_3894,&l_3894,&l_3894},{&l_3894,&l_3894,&l_3894,&l_3894},{&l_3894,&l_3894,(void*)0,&l_3894}},{{&l_3894,(void*)0,&l_3894,&l_3894},{&l_3894,&l_3894,&l_3894,&l_3894},{&l_3894,&l_3894,(void*)0,(void*)0}},{{&l_3894,(void*)0,&l_3894,(void*)0},{&l_3894,(void*)0,&l_3894,(void*)0},{&l_3894,&l_3894,&l_3894,(void*)0}}};
    uint32_t l_3949 = 0xC4BF6BACL;
    int32_t l_3984 = 1L;
    uint64_t l_3994 = 0x34C7EC62CEE3B4ECLL;
    int16_t ****l_4052 = &g_3365;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_9[i] = &g_3;
    for (i = 0; i < 1; i++)
        l_3717[i] = 0x802DL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
                l_3865[i][j][k] = &l_3866;
        }
    }
    for (i = 0; i < 3; i++)
        l_3877[i] = 6L;
    --g_10;
    for (g_10 = 0; (g_10 <= 0); g_10 += 1)
    { 
        int32_t *l_1922 = &g_314[1].f0;
        const uint64_t *l_3705 = &g_2260[1];
        int32_t l_3711 = 0x65D6A712L;
        int32_t l_3712 = (-5L);
        int32_t l_3721 = 7L;
        int32_t l_3722 = (-1L);
        int8_t l_3743 = 0xEAL;
        uint64_t l_3763[3];
        uint64_t l_3767 = 0x919D53624A9A3BAELL;
        int16_t l_3795 = 0x00C1L;
        union U1 *****l_3808 = &g_666;
        uint8_t l_3834 = 0xACL;
        int32_t ***l_3852 = &g_75;
        int32_t *l_3878 = (void*)0;
        uint16_t l_3881[4];
        uint32_t *** const l_3903 = &g_1215[1][1][2];
        int32_t l_3986 = 0x2BC29D9BL;
        uint64_t l_4001[4][1][3] = {{{0xAE17EDABA85B3C0ALL,0xAE17EDABA85B3C0ALL,0xAE17EDABA85B3C0ALL}},{{0xA9D0B18327BBDF42LL,0xA9D0B18327BBDF42LL,0xA9D0B18327BBDF42LL}},{{0xAE17EDABA85B3C0ALL,0xAE17EDABA85B3C0ALL,0xAE17EDABA85B3C0ALL}},{{0xA9D0B18327BBDF42LL,0xA9D0B18327BBDF42LL,0xA9D0B18327BBDF42LL}}};
        union U1 l_4007 = {0xC1B599FDL};
        uint64_t l_4034 = 0x675F38029AFC71C6LL;
        int16_t ****l_4051 = &g_3365;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_3763[i] = 0UL;
        for (i = 0; i < 4; i++)
            l_3881[i] = 0UL;
        for (g_3 = 0; (g_3 <= 0); g_3 += 1)
        { 
            int32_t *l_31 = &g_3;
            uint8_t l_1923 = 0UL;
            uint16_t *l_3696 = &g_832;
            uint16_t *l_3697 = (void*)0;
            uint16_t *l_3698 = &g_438;
            int32_t l_3710 = 0xCBE20A13L;
            uint32_t l_3713[7][5][2] = {{{0xE8F65ADDL,0x4AB25D55L},{0xE8F65ADDL,0xBBAC20DCL},{0x7F5C4E41L,0x3A3ADB98L},{0xBBAC20DCL,1UL},{4294967293UL,0UL}},{{0x3A3ADB98L,0xABB2AF10L},{0xABB2AF10L,0xABB2AF10L},{0x3A3ADB98L,0UL},{4294967293UL,1UL},{0xBBAC20DCL,0x3A3ADB98L}},{{0x7F5C4E41L,0xBBAC20DCL},{0xE8F65ADDL,0x4AB25D55L},{0xE8F65ADDL,0xBBAC20DCL},{0x7F5C4E41L,0x3A3ADB98L},{0xBBAC20DCL,1UL}},{{4294967293UL,0UL},{0x3A3ADB98L,0xABB2AF10L},{0xABB2AF10L,0xABB2AF10L},{0x3A3ADB98L,0UL},{4294967293UL,1UL}},{{0xBBAC20DCL,0x3A3ADB98L},{0x7F5C4E41L,0xBBAC20DCL},{0xE8F65ADDL,0x4AB25D55L},{0xE8F65ADDL,0xBBAC20DCL},{0x7F5C4E41L,0x3A3ADB98L}},{{0xBBAC20DCL,1UL},{4294967293UL,0UL},{0x3A3ADB98L,0xABB2AF10L},{0xABB2AF10L,0xABB2AF10L},{0x3A3ADB98L,0UL}},{{4294967293UL,1UL},{0xBBAC20DCL,0x3A3ADB98L},{0x7F5C4E41L,0xBBAC20DCL},{0xE8F65ADDL,0x4AB25D55L},{0xE8F65ADDL,0xBBAC20DCL}}};
            uint32_t l_3716 = 18446744073709551615UL;
            int32_t l_3718 = (-1L);
            int32_t l_3719 = (-2L);
            int32_t l_3720 = 5L;
            uint16_t l_3723[3];
            struct S0 **l_3768 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_3723[i] = 65534UL;
        }
    }
    (**g_3968) = (*g_3969);
    (*l_2) ^= 0xD3EE3888L;
    return (*l_5);
}



static int32_t  func_13(int32_t * p_14, const int32_t * p_15, uint32_t  p_16)
{ 
    union U1 l_3425[7][2] = {{{0x5667CCA8L},{0x5667CCA8L}},{{0x5667CCA8L},{0x5667CCA8L}},{{0x5667CCA8L},{0x5667CCA8L}},{{0x5667CCA8L},{0x5667CCA8L}},{{0x5667CCA8L},{0x5667CCA8L}},{{0x5667CCA8L},{0x5667CCA8L}},{{0x5667CCA8L},{0x5667CCA8L}}};
    struct S0 l_3426 = {4UL,0x9387FDC8ECE4E0C7LL,1UL,5L};
    const int32_t *l_3456 = &g_46[0][3];
    uint32_t l_3477 = 0x479B71D0L;
    int32_t *l_3479 = &g_46[0][4];
    int32_t l_3487 = 1L;
    int32_t l_3489 = (-6L);
    int32_t l_3490 = 7L;
    int32_t l_3491 = 0x4040697DL;
    int32_t l_3493 = (-1L);
    int32_t l_3494[4] = {0xFE25B4B4L,0xFE25B4B4L,0xFE25B4B4L,0xFE25B4B4L};
    uint64_t **l_3523 = (void*)0;
    uint16_t l_3559[3];
    int32_t * const ***l_3564 = (void*)0;
    int16_t *l_3625[4] = {&g_1280,&g_1280,&g_1280,&g_1280};
    int64_t l_3647 = 0x41BAACA20D0D0034LL;
    int32_t *** const l_3648 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_3559[i] = 0UL;
    return (*l_3456);
}



static int32_t * func_17(int32_t * const  p_18, uint64_t  p_19)
{ 
    uint32_t ***l_2820 = &g_1215[0][2][2];
    const int32_t l_2821 = 0xE0DD9DA5L;
    int32_t ****l_2823 = &g_2571;
    int32_t ****l_2824 = &g_2571;
    int32_t *****l_2825 = &l_2824;
    uint32_t l_2832 = 4294967289UL;
    int32_t *l_2833 = &g_833;
    int8_t l_2842 = 0x96L;
    int8_t l_2873 = 1L;
    int16_t ***l_2894 = (void*)0;
    int16_t ****l_2893 = &l_2894;
    int16_t *****l_2892 = &l_2893;
    union U1 l_2905 = {1L};
    struct S0 *l_2907[7][6][6] = {{{&g_203,&g_203,&g_1150,&g_203,(void*)0,(void*)0},{(void*)0,&g_1150,&g_1150,(void*)0,&g_2415,&g_2908[1][0]},{&g_2908[1][0],&g_203,&g_2908[1][0],&g_1150,&g_1150,&g_2908[1][2]},{(void*)0,&g_203,(void*)0,&g_2908[1][3],&g_1150,&g_2415},{&g_2415,&g_203,(void*)0,&g_203,&g_2415,&g_2908[1][3]},{(void*)0,&g_1150,(void*)0,&g_2908[1][0],(void*)0,(void*)0}},{{(void*)0,&g_203,&g_2415,&g_1150,&g_2908[3][1],(void*)0},{&g_2908[1][3],&g_2415,(void*)0,(void*)0,&g_2415,&g_2908[1][3]},{&g_2908[3][1],&g_1150,(void*)0,&g_1150,(void*)0,&g_2415},{&g_1150,&g_2415,(void*)0,&g_2908[1][0],&g_203,&g_2908[1][2]},{&g_1150,&g_2908[1][0],&g_2908[1][0],&g_1150,&g_2908[1][0],&g_2908[1][0]},{&g_2908[3][1],(void*)0,&g_1150,(void*)0,&g_2908[1][0],(void*)0}},{{&g_2908[1][3],&g_2908[1][0],&g_1150,&g_1150,(void*)0,&g_2908[1][0]},{(void*)0,&g_2908[1][0],&g_203,&g_2908[1][0],&g_2908[1][0],&g_2908[1][3]},{(void*)0,(void*)0,&g_2908[3][1],&g_1150,&g_2415,&g_203},{&g_203,&g_2908[1][0],&g_1150,&g_1150,&g_2908[1][2],&g_2908[3][1]},{&g_2415,&g_203,&g_1150,&g_203,(void*)0,&g_203},{&g_2908[3][1],&g_203,&g_2908[3][1],&g_2908[1][0],&g_203,&g_2908[1][3]}},{{&g_2908[1][0],&g_203,&g_2908[1][3],&g_2908[1][2],&g_2908[1][0],&g_2415},{&g_1150,&g_2908[1][3],(void*)0,&g_2908[1][2],&g_2908[1][0],&g_2908[1][0]},{&g_2908[1][0],(void*)0,(void*)0,&g_2908[1][0],&g_203,&g_2908[1][0]},{&g_2908[3][1],&g_1150,&g_2415,&g_203,(void*)0,&g_1150},{&g_2415,&g_2908[1][2],(void*)0,&g_1150,(void*)0,&g_203},{&g_203,&g_1150,&g_2908[1][0],&g_1150,&g_203,&g_1150}},{{(void*)0,(void*)0,(void*)0,&g_2908[1][0],&g_2908[1][0],&g_2415},{(void*)0,&g_2908[1][3],&g_203,(void*)0,&g_2908[1][0],&g_2415},{&g_1150,&g_203,(void*)0,(void*)0,&g_203,&g_1150},{&g_2908[1][0],&g_203,&g_2908[1][0],(void*)0,(void*)0,&g_203},{&g_203,&g_203,(void*)0,&g_2415,&g_2908[1][2],&g_1150},{&g_203,&g_2908[1][0],&g_2415,(void*)0,&g_2415,&g_2908[1][0]}},{{&g_2908[1][0],(void*)0,(void*)0,(void*)0,&g_2908[1][0],&g_2908[1][0]},{&g_1150,&g_2908[3][1],(void*)0,(void*)0,&g_2415,&g_2415},{(void*)0,&g_2908[3][1],&g_2908[1][3],&g_2908[1][0],&g_2908[1][0],&g_2908[1][3]},{(void*)0,(void*)0,&g_2908[3][1],&g_1150,&g_2415,&g_203},{&g_203,&g_2908[1][0],&g_1150,&g_1150,&g_2908[1][2],&g_2908[3][1]},{&g_2415,&g_203,&g_1150,&g_203,(void*)0,&g_203}},{{&g_2908[3][1],&g_203,&g_2908[3][1],&g_2908[1][0],&g_203,&g_2908[1][3]},{&g_2908[1][0],&g_203,&g_2908[1][3],&g_2908[1][2],&g_2908[1][0],&g_2415},{&g_1150,&g_2908[1][3],(void*)0,&g_2908[1][2],&g_2908[1][0],&g_2908[1][0]},{&g_2908[1][0],(void*)0,(void*)0,&g_2908[1][0],&g_203,&g_2908[1][0]},{&g_2908[3][1],&g_1150,&g_2415,&g_203,(void*)0,&g_1150},{&g_2415,&g_2908[1][2],(void*)0,&g_1150,(void*)0,&g_203}}};
    uint32_t l_2929 = 0x9F8BF8F5L;
    uint16_t * const l_2955 = &g_170;
    int32_t l_2971 = 0x70C95B98L;
    int32_t l_2972 = (-8L);
    int32_t l_2973 = 0x786F84F5L;
    int32_t l_2995 = 0L;
    int8_t l_3148[2][2];
    uint32_t l_3157 = 18446744073709551615UL;
    int32_t l_3164 = 3L;
    int32_t l_3165 = (-1L);
    int32_t l_3166 = 0x16D3B9B5L;
    int32_t l_3167 = 0x511C413BL;
    int32_t l_3168[2][5];
    uint32_t *l_3176[3][6][2] = {{{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]}},{{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]}},{{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]},{&g_926[0],&g_926[0]}}};
    int64_t l_3177 = 0x065200E5974EC2D5LL;
    uint8_t l_3178 = 0xFCL;
    int16_t *l_3209 = &g_1280;
    uint32_t **l_3210 = &g_1216;
    int32_t l_3211 = 0L;
    uint32_t l_3212 = 8UL;
    int64_t *****l_3291 = (void*)0;
    union U1 l_3318 = {-6L};
    uint32_t l_3340 = 0x74077E26L;
    int32_t *l_3395 = (void*)0;
    uint32_t l_3416 = 0xCE66E5A7L;
    uint32_t l_3417[3][1][2];
    int32_t l_3418 = (-2L);
    uint8_t l_3419 = 253UL;
    int32_t *l_3420 = &l_3167;
    int32_t *l_3421 = &g_314[1].f0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_3148[i][j] = (-9L);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_3168[i][j] = 0x0EA5547EL;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_3417[i][j][k] = 4294967295UL;
        }
    }
    (*g_998) &= ((0xD50B0D29L & ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((p_19 & (~((l_2820 != l_2820) , (**g_1789)))) > (p_19 >= l_2821)), 4)), l_2821)) , l_2821)) & p_19);
    if (((+((l_2823 == ((*l_2825) = l_2824)) , 0x5B7AE73923E33702LL)) > (p_19 | (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(6UL)), ((((safe_mod_func_int16_t_s_s((+(0x6792F0472B4578EALL | l_2821)), p_19)) == l_2832) & l_2832) >= l_2832))))))
    { 
        uint16_t l_2834[3];
        int32_t *l_2845 = (void*)0;
        int32_t l_2848 = 0x9F2E41C6L;
        int16_t *l_2850 = &g_1280;
        int8_t *l_2851 = &g_1367;
        uint16_t l_2871[3][7][7] = {{{65528UL,0x4F45L,0xEC02L,0xB525L,0x1DE9L,65529UL,0x7CB2L},{0xA7F8L,0UL,0UL,0xB525L,1UL,0x5608L,0x0318L},{0x7C1EL,2UL,0UL,0UL,2UL,0x7C1EL,0UL},{0xBDC2L,0xB525L,8UL,0xA947L,0x4C2AL,0xA209L,0xB525L},{0x1DE9L,0UL,0x7C1EL,7UL,1UL,1UL,0x1DE9L},{65532UL,0xB525L,3UL,1UL,65531UL,0UL,0xE909L},{0xA7F8L,2UL,0xA209L,0x7CB2L,0xB525L,0xA209L,0x4C2AL}},{{0x4F45L,0UL,0UL,0x3991L,65526UL,0xE909L,0x4C2AL},{0x5608L,0x4F45L,0xE909L,0xAC16L,0x4C2AL,0xAC16L,0xE909L},{65528UL,65528UL,8UL,0x4340L,0x7CB2L,65529UL,0x1DE9L},{65531UL,0xE909L,65528UL,0xB525L,1UL,65532UL,0xB525L},{0x5608L,2UL,0xAC16L,1UL,0x7CB2L,0x5608L,0UL},{0x7CB2L,0x0318L,0xEC02L,0x3991L,0x4C2AL,8UL,0x0318L},{0xBDC2L,0xE909L,0x7C1EL,0xBDC2L,65526UL,0xAC16L,0x7CB2L}},{{65532UL,65531UL,0x7C1EL,0UL,0xB525L,0UL,0UL},{65531UL,0x7CB2L,0xEC02L,0x7CB2L,65531UL,65529UL,0x4F45L},{0xA947L,0UL,0xAC16L,0x4F45L,1UL,0UL,0x4C2AL},{0x7C1EL,0x4C2AL,65528UL,0UL,0x4C2AL,1UL,0UL},{0xA947L,0x4F45L,8UL,0xA7F8L,2UL,0xA209L,0x7CB2L},{65531UL,0UL,0xE909L,0x4340L,1UL,65532UL,65531UL},{65532UL,0x7CB2L,0UL,1UL,0x1DE9L,65532UL,0xE909L}}};
        int64_t l_2872 = 0xA796EC2084574273LL;
        int32_t l_2888 = (-1L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2834[i] = 0x20B6L;
        l_2833 = l_2845;
        (*g_998) = (p_19 == ((((*l_2851) &= (safe_lshift_func_int16_t_s_s(((*l_2850) = ((l_2848 = l_2842) <= (~l_2834[0]))), 9))) , l_2834[0]) | (safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(((safe_add_func_int8_t_s_s(((((safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(0xF8L, 7)), (p_19 == (!(safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_19 || l_2834[1]), (*g_597))), 6UL)))))) || l_2871[2][0][2]), l_2834[0])) && p_19) >= l_2871[0][6][4]), l_2832)) && l_2872) , p_19) > l_2832), (*g_597))) , l_2834[0]), (-6L))) , l_2842) != p_19), l_2873))));
        for (g_1314 = 0; (g_1314 != 8); g_1314++)
        { 
            int32_t *l_2876 = &g_46[0][2];
            return l_2876;
        }
        for (g_2328 = (-8); (g_2328 != (-20)); g_2328 = safe_sub_func_int16_t_s_s(g_2328, 4))
        { 
            int64_t l_2885[6][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
            int16_t ***l_2891[6][5][1] = {{{&g_1486[0]},{&g_1486[0]},{&g_1486[1]},{&g_1486[0]},{&g_1486[0]}},{{&g_1486[0]},{&g_1486[0]},{&g_1486[0]},{&g_1486[1]},{&g_1486[0]}},{{&g_1486[0]},{&g_1486[0]},{&g_1486[0]},{&g_1486[0]},{&g_1486[1]}},{{&g_1486[0]},{&g_1486[0]},{&g_1486[1]},{&g_1486[1]},{&g_1486[0]}},{{&g_1486[1]},{&g_1486[0]},{&g_1486[1]},{&g_1486[1]},{&g_1486[1]}},{{&g_1486[0]},{&g_1486[1]},{&g_1486[0]},{&g_1486[1]},{&g_1486[1]}}};
            int16_t ****l_2890 = &l_2891[4][3][0];
            int16_t *****l_2889 = &l_2890;
            int i, j, k;
            (*g_998) ^= (safe_mod_func_int16_t_s_s(0x6B08L, (safe_add_func_int8_t_s_s(((*l_2851) = (safe_rshift_func_uint16_t_u_s((**g_1789), ((l_2885[0][0] == (safe_rshift_func_uint16_t_u_s(l_2888, (l_2889 == l_2892)))) <= 1L)))), (*g_597)))));
        }
    }
    else
    { 
        struct S0 ****l_2897 = (void*)0;
        int32_t l_2923[7][4] = {{0x6D360210L,(-1L),0x6D360210L,(-1L)},{0x6D360210L,(-1L),0x6D360210L,(-1L)},{0x6D360210L,(-1L),0x6D360210L,(-1L)},{0x6D360210L,(-1L),0x6D360210L,(-1L)},{0x6D360210L,(-1L),0x6D360210L,(-1L)},{0x6D360210L,(-1L),0x6D360210L,(-1L)},{0x6D360210L,(-1L),0x6D360210L,(-1L)}};
        int16_t *l_2931 = &g_1280;
        const struct S0 *l_2956[6][5] = {{&g_203,&g_203,&g_1150,&g_2415,&g_1150},{&g_2908[1][3],&g_2908[1][3],(void*)0,&g_2908[1][3],&g_2908[1][3]},{&g_1150,&g_2415,&g_1150,&g_203,&g_203},{&g_2908[1][3],(void*)0,(void*)0,&g_2908[1][3],(void*)0},{&g_203,&g_2415,&g_2908[1][2],&g_2415,&g_203},{(void*)0,&g_2908[1][3],(void*)0,(void*)0,&g_2908[1][3]}};
        int16_t l_2969 = 0xE6FAL;
        int8_t l_2977 = 0x98L;
        const uint64_t ***l_2991[3];
        const uint64_t ****l_2990 = &l_2991[2];
        union U1 l_3018 = {0x95D1106EL};
        uint32_t ****l_3021 = &l_2820;
        int32_t ***l_3070 = &g_75;
        int32_t ****l_3069 = &l_3070;
        uint32_t l_3089 = 5UL;
        const int64_t **l_3098[5];
        const int32_t *l_3108 = (void*)0;
        const int32_t **l_3107 = &l_3108;
        const int32_t ***l_3106 = &l_3107;
        const int32_t ****l_3105 = &l_3106;
        uint64_t l_3119 = 0xDF6916642A5CC51BLL;
        uint32_t l_3151 = 1UL;
        uint8_t *l_3153[6][2] = {{&g_1314,&g_203.f0},{&g_1314,&g_203.f0},{&g_1314,&g_203.f0},{&g_1314,&g_203.f0},{&g_1314,&g_203.f0},{&g_1314,&g_203.f0}};
        int32_t *l_3154 = &l_2971;
        int i, j;
        for (i = 0; i < 3; i++)
            l_2991[i] = (void*)0;
        for (i = 0; i < 5; i++)
            l_3098[i] = (void*)0;
        if (((((*l_2833) = (safe_add_func_int8_t_s_s(0x86L, (*g_597)))) ^ ((void*)0 != l_2897)) ^ (+0UL)))
        { 
            struct S0 l_2903 = {255UL,0xFF1290CB94991D8CLL,0xF5L,0x8BE01829L};
            int32_t l_2904 = 0xD52D981BL;
            int16_t *l_2930 = &g_1280;
            const int16_t *l_2949[5][6] = {{&g_178,&g_178,&g_178,&g_1280,&g_1280,&g_1280},{&g_1280,&g_1280,&g_1280,&g_1280,&g_1280,&g_1280},{&g_1280,&g_1280,&g_1280,&g_1280,&g_1280,&g_1280},{&g_1280,&g_1280,&g_1280,&g_1280,&g_178,&g_178},{&g_178,&g_1280,(void*)0,&g_1280,&g_178,&g_178}};
            const int16_t **l_2948 = &l_2949[4][3];
            const int16_t ***l_2947 = &l_2948;
            const int16_t ****l_2946 = &l_2947;
            const int16_t *****l_2945 = &l_2946;
            int8_t ***l_2950 = &g_1183;
            int32_t l_2968 = 0L;
            int32_t l_2970[4] = {0x741DAD76L,0x741DAD76L,0x741DAD76L,0x741DAD76L};
            uint32_t l_2974 = 0x17AD2D37L;
            int i, j;
            if ((safe_sub_func_int16_t_s_s((((l_2904 |= (safe_sub_func_int64_t_s_s(0L, (l_2903 , 0x453105A8533A74C6LL)))) < ((*l_2833) , (-4L))) == ((*g_1790) = ((void*)0 != &g_670))), (-1L))))
            { 
                struct S0 *l_2906 = &l_2903;
                struct S0 **l_2909 = (void*)0;
                int8_t *l_2910 = &g_393;
                int32_t l_2919 = (-3L);
                int16_t *l_2922 = &g_178;
                uint16_t l_2926 = 0x240CL;
                const int16_t ****l_2944 = (void*)0;
                const int16_t *****l_2943 = &l_2944;
                int8_t ****l_2951[3][4] = {{&l_2950,&l_2950,&l_2950,&l_2950},{&l_2950,&l_2950,&l_2950,&l_2950},{&l_2950,&l_2950,&l_2950,&l_2950}};
                int32_t *l_2959 = &g_314[1].f0;
                int i, j;
                g_1149[2][2][0] = (l_2907[5][3][0] = (l_2905 , l_2906));
                if ((((*l_2910) = ((void*)0 == (*g_668))) != (((l_2903.f1 , (((safe_sub_func_int64_t_s_s(0xD1FE62F8E4BEF7CELL, p_19)) < (safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((((*l_2833) |= (((*l_2922) = (safe_div_func_uint32_t_u_u((++(*g_1329)), (l_2904 && 4294967292UL)))) && l_2923[4][0])) != 0x18622EC6L) , 0x392AL), p_19)), l_2904))) , 0x8AL)) , (void*)0) != (void*)0)))
                { 
                    int32_t *l_2932[6][3][6] = {{{(void*)0,&g_2328,&g_833,(void*)0,&l_2919,(void*)0},{(void*)0,&g_2328,(void*)0,(void*)0,&g_833,(void*)0},{(void*)0,&g_833,(void*)0,(void*)0,&g_2328,(void*)0}},{{(void*)0,&l_2919,(void*)0,&g_833,&g_2328,(void*)0},{(void*)0,&g_833,&g_833,&g_833,&g_833,(void*)0},{(void*)0,&g_2328,&g_833,(void*)0,&l_2919,(void*)0}},{{(void*)0,&g_2328,(void*)0,(void*)0,&g_833,(void*)0},{(void*)0,&g_833,(void*)0,(void*)0,&g_2328,(void*)0},{(void*)0,&l_2919,(void*)0,&g_833,&g_2328,(void*)0}},{{(void*)0,&g_833,&g_833,&g_833,&g_833,(void*)0},{(void*)0,(void*)0,&g_3,&g_46[0][5],(void*)0,&g_46[0][3]},{&g_771,(void*)0,&g_46[0][5],&g_771,(void*)0,&g_771}},{{&g_771,(void*)0,&g_771,&g_46[0][5],(void*)0,&g_771},{&g_46[0][3],(void*)0,&g_46[0][5],&g_3,(void*)0,&g_46[0][3]},{&g_46[0][5],(void*)0,&g_3,&g_3,(void*)0,&g_46[0][5]}},{{&g_46[0][3],(void*)0,&g_3,&g_46[0][5],(void*)0,&g_46[0][3]},{&g_771,(void*)0,&g_46[0][5],&g_771,(void*)0,&g_771},{&g_771,(void*)0,&g_771,&g_46[0][5],(void*)0,&g_771}}};
                    const struct S0 *l_2933 = &l_2903;
                    const int32_t **l_2937 = (void*)0;
                    const int32_t ***l_2936 = &l_2937;
                    int i, j, k;
                    (*g_75) = func_37(((*l_2922) = ((l_2926 = ((++(**g_1328)) , 0x0AE64BA3L)) , (((*g_1329) ^= (safe_mod_func_int16_t_s_s(l_2929, ((**g_1789) |= (((***g_1484) = l_2930) != (l_2931 = l_2931)))))) | 0x99C7E439L))), l_2932[1][1][4]);
                    (*g_998) = (((*g_313) , l_2933) != ((l_2923[4][0] || (safe_mul_func_uint8_t_u_u(p_19, l_2903.f1))) , l_2907[6][3][2]));
                    (*g_998) = (p_19 != ((void*)0 != l_2936));
                    (*l_2833) = ((-1L) && ((safe_lshift_func_uint16_t_u_s((!(safe_lshift_func_int8_t_s_s(l_2926, 3))), 14)) >= (-2L)));
                }
                else
                { 
                    l_2945 = l_2943;
                }
                if (((g_2952 = (l_2950 = l_2950)) != (p_19 , &g_1183)))
                { 
                    (*g_998) = (safe_sub_func_uint32_t_u_u(((*g_998) & (**g_1328)), (l_2955 != (void*)0)));
                }
                else
                { 
                    const struct S0 **l_2957 = &l_2956[3][3];
                    int32_t *l_2958 = &g_2328;
                    (*l_2957) = l_2956[3][3];
                    (*l_2958) = (((*l_2833) = p_19) >= p_19);
                }
                l_2959 = &l_2919;
            }
            else
            { 
                int32_t l_2960 = 2L;
                int32_t l_2961[6][4][5] = {{{0xEA0AB7FAL,(-8L),0x2733ACE6L,0x63FCDCEEL,0x363A8E10L},{(-6L),1L,0x400DFD6AL,0L,0L},{0x912E081AL,3L,0x912E081AL,(-1L),0x3DE2124DL},{0x400DFD6AL,1L,(-6L),(-1L),2L}},{{0x2733ACE6L,(-8L),0xEA0AB7FAL,0xBC63EF3EL,0x912E081AL},{(-1L),(-1L),(-6L),2L,1L},{0x63FB7F5AL,(-10L),0x912E081AL,(-10L),0x63FB7F5AL},{(-1L),(-1L),0x400DFD6AL,2L,(-2L)}},{{(-9L),1L,0x2733ACE6L,0xBC63EF3EL,0xB10D7A36L},{0L,(-6L),(-1L),(-1L),(-2L)},{(-9L),0xBC63EF3EL,0x63FB7F5AL,(-1L),0x63FB7F5AL},{(-2L),(-2L),(-1L),0L,1L}},{{(-9L),0x47C5F785L,(-9L),0x63FCDCEEL,0x912E081AL},{0L,0xC28501B2L,0L,0x342E7AABL,2L},{(-9L),0x47C5F785L,(-9L),1L,0x3DE2124DL},{(-1L),(-2L),(-2L),(-1L),0L}},{{0x63FB7F5AL,0xBC63EF3EL,(-9L),1L,0x363A8E10L},{(-1L),(-6L),0L,(-6L),(-1L)},{0x2733ACE6L,1L,(-9L),1L,0xEA0AB7FAL},{0x400DFD6AL,(-1L),(-1L),(-1L),(-1L)}},{{0x912E081AL,(-10L),0x63FB7F5AL,1L,0xEA0AB7FAL},{(-6L),(-1L),(-1L),0x342E7AABL,(-1L)},{0xEA0AB7FAL,(-8L),0x2733ACE6L,0x63FCDCEEL,0x363A8E10L},{(-6L),1L,0x400DFD6AL,0L,0L}}};
                int32_t *l_2962 = (void*)0;
                int32_t *l_2963 = &g_771;
                int32_t *l_2964 = &l_2923[6][2];
                int32_t *l_2965 = &g_2328;
                int32_t *l_2966 = (void*)0;
                int32_t *l_2967[7][2][3] = {{{&l_2904,&g_771,&l_2904},{&l_2905.f0,&g_46[0][3],&l_2905.f0}},{{&l_2904,&g_771,&l_2904},{&l_2905.f0,&g_46[0][3],&l_2905.f0}},{{&l_2904,&g_771,&l_2904},{&l_2905.f0,&g_46[0][3],&l_2905.f0}},{{&l_2904,&g_771,&l_2904},{&l_2905.f0,&g_46[0][3],&l_2905.f0}},{{&l_2905.f0,&l_2904,&l_2905.f0},{&g_394,&l_2905.f0,&g_394}},{{&l_2905.f0,&l_2904,&l_2905.f0},{&g_394,&l_2905.f0,&g_394}},{{&l_2905.f0,&l_2904,&l_2905.f0},{&g_394,&l_2905.f0,&g_394}}};
                int i, j, k;
                --l_2974;
            }
            for (g_1041 = 0; (g_1041 <= 2); g_1041 += 1)
            { 
                int32_t l_2982 = 0L;
                uint8_t l_2983 = 0x19L;
                uint32_t *l_2994 = &g_10;
                (*g_998) = ((l_2903 , 0x66704E06B8BCFEBBLL) ^ (*l_2833));
                l_2982 = ((p_19 < (safe_add_func_uint64_t_u_u(0x6161B262C366C6ACLL, (safe_rshift_func_uint16_t_u_s((((l_2903.f0 & (safe_sub_func_uint16_t_u_u((((l_2990 == (void*)0) , (safe_add_func_int16_t_s_s(((*g_1328) != l_2994), (*l_2833)))) , 0x882DL), p_19))) != l_2982) , l_2983), l_2995))))) , (*l_2833));
                l_2982 = l_2903.f0;
                if ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_2903 , p_19), 7)), ((**g_1789) |= p_19))))
                { 
                    int32_t *l_3000[4] = {&g_46[0][3],&g_46[0][3],&g_46[0][3],&g_46[0][3]};
                    int i;
                    return l_3000[2];
                }
                else
                { 
                    int32_t *l_3001 = &g_616;
                    l_2923[4][0] = 1L;
                    return l_3001;
                }
            }
            (*g_998) = (l_2903.f1 , l_2970[2]);
        }
        else
        { 
            union U1 * const l_3004 = &l_2905;
            int16_t **** const *l_3005 = &l_2893;
            int32_t l_3008[6][3][4] = {{{(-1L),(-7L),0L,(-7L)},{(-1L),0xEB6FDB2BL,1L,(-7L)},{1L,(-7L),1L,0xEB6FDB2BL}},{{(-1L),(-7L),0L,(-7L)},{(-1L),0xEB6FDB2BL,1L,(-7L)},{1L,(-7L),1L,0xEB6FDB2BL}},{{(-1L),(-7L),0L,(-7L)},{(-1L),0xEB6FDB2BL,1L,(-7L)},{1L,(-7L),1L,0xEB6FDB2BL}},{{(-1L),(-7L),0L,(-7L)},{(-1L),0xEB6FDB2BL,1L,(-7L)},{1L,(-7L),1L,0xEB6FDB2BL}},{{(-1L),(-7L),0L,(-7L)},{(-1L),0xEB6FDB2BL,1L,(-7L)},{1L,(-7L),1L,0xEB6FDB2BL}},{{(-1L),(-7L),0L,(-7L)},{(-1L),0xEB6FDB2BL,1L,(-7L)},{1L,(-7L),1L,0xEB6FDB2BL}}};
            uint8_t **l_3017 = (void*)0;
            uint8_t ***l_3016 = &l_3017;
            int32_t *l_3022 = &l_2905.f0;
            int i, j, k;
            (*l_2833) = ((((safe_lshift_func_uint8_t_u_s((p_19 > (((void*)0 == l_3004) , (0x4235L ^ ((void*)0 == l_3005)))), (safe_rshift_func_uint16_t_u_s((l_3008[1][2][3] & 0x9CD6A72A0418AB17LL), p_19)))) || l_2923[2][2]) && p_19) > 1UL);
            (*l_3022) |= ((*l_2833) = (safe_add_func_int64_t_s_s(((p_19 | (~((*g_597) &= (safe_lshift_func_int16_t_s_s(l_3008[1][1][3], 1))))) && (safe_sub_func_int8_t_s_s((l_2923[3][0] |= (l_3016 != &l_3017)), ((((l_3018 , (safe_mul_func_int16_t_s_s(((&g_1902 != l_3021) , p_19), p_19))) <= 0xD4BBL) ^ 0x6CL) && (*g_597))))), p_19)));
        }
        for (g_2116 = (-1); (g_2116 == 9); g_2116 = safe_add_func_int64_t_s_s(g_2116, 6))
        { 
            uint64_t l_3025 = 1UL;
            int32_t l_3056 = 0x0502AA24L;
            int16_t ** const *l_3058 = &g_1486[0];
            int16_t ** const **l_3057 = &l_3058;
            uint32_t ***l_3065 = &g_1328;
            const union U1 l_3090 = {-1L};
            uint64_t * const *l_3091 = &g_671;
            const int32_t *****l_3109 = &l_3105;
            int32_t l_3120[3][5][7] = {{{0xEC87CD19L,1L,0xD055A01DL,6L,0L,1L,0L},{0x2A111917L,0x492FB7ADL,0xD5399DF4L,7L,7L,0xD5399DF4L,0x492FB7ADL},{0xEC87CD19L,1L,0xD055A01DL,6L,0L,1L,0L},{0x2A111917L,0x492FB7ADL,0xD5399DF4L,7L,7L,0xD5399DF4L,0x492FB7ADL},{0xEC87CD19L,1L,0xD055A01DL,6L,0L,1L,0L}},{{0x2A111917L,0x492FB7ADL,0xD5399DF4L,7L,7L,0xD5399DF4L,0x492FB7ADL},{0xEC87CD19L,1L,0xD055A01DL,6L,0L,1L,0L},{0x2A111917L,0x492FB7ADL,0xD5399DF4L,7L,7L,0xD5399DF4L,0x492FB7ADL},{0xEC87CD19L,1L,0xD055A01DL,6L,0L,1L,0L},{0x2A111917L,0x492FB7ADL,0xD5399DF4L,7L,7L,0xD5399DF4L,0x492FB7ADL}},{{0xEC87CD19L,1L,0xD055A01DL,6L,0L,1L,0L},{0x2A111917L,0x492FB7ADL,0xD5399DF4L,7L,7L,0xD5399DF4L,0x492FB7ADL},{0xEC87CD19L,1L,0xD055A01DL,6L,0L,1L,0L},{0x2A111917L,0x492FB7ADL,0xD5399DF4L,7L,7L,0xD5399DF4L,0xF440F77AL},{1L,0x312CDB18L,0L,0L,0xEC87CD19L,6L,0xEC499FF3L}}};
            int32_t **l_3121 = &l_2833;
            int8_t *l_3149 = &l_2977;
            int8_t *l_3150[4];
            uint8_t l_3152 = 7UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_3150[i] = &l_2842;
            l_3025 |= (l_2923[2][0] = 0xEAA850E5L);
            for (g_178 = 0; (g_178 >= (-5)); --g_178)
            { 
                const int16_t l_3032 = 0xEF35L;
                int8_t *l_3033 = &l_2873;
                uint16_t *l_3045[7] = {(void*)0,(void*)0,&g_170,(void*)0,(void*)0,&g_170,(void*)0};
                int32_t l_3071[1];
                int32_t **l_3072 = &g_998;
                int32_t *l_3092 = (void*)0;
                int32_t *l_3093 = &g_394;
                int i;
                for (i = 0; i < 1; i++)
                    l_3071[i] = 0x1F59B829L;
            }
        }
        if (((&g_1314 == (g_597 = l_3153[0][1])) , ((*l_3154) |= (*l_2833))))
        { 
            int32_t *l_3155 = (void*)0;
            int32_t *l_3156[2][1][2];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_3156[i][j][k] = &g_771;
                }
            }
            --l_3157;
        }
        else
        { 
            int64_t l_3160 = 0x6F4429C3645CEE31LL;
            int32_t *l_3161 = &g_616;
            int32_t *l_3162[5] = {&l_3018.f0,&l_3018.f0,&l_3018.f0,&l_3018.f0,&l_3018.f0};
            int16_t l_3163 = 0x415EL;
            uint64_t l_3169 = 7UL;
            int i;
            l_3169--;
            return l_3161;
        }
        (*g_998) = (((***l_2825) == (***l_2825)) > (safe_rshift_func_uint16_t_u_u((**g_1789), 10)));
    }
    (*g_998) |= ((&g_1327[2][2][2] != &g_1327[2][4][3]) , (0L ^ (((((**g_1328) & (l_3178++)) && (*g_597)) > (safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((*g_597), p_19)) || p_19), 7))) < p_19)));
    if (((*g_466) ^ (((((*l_3209) = ((safe_lshift_func_int8_t_s_u(p_19, ((((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s(((l_3211 = (safe_mul_func_int8_t_s_s((g_3201 , 0x11L), (((**g_1328) = (safe_div_func_int64_t_s_s(((p_19 , (+(safe_mul_func_int8_t_s_s((((*l_3210) = func_37((safe_sub_func_uint32_t_u_u((((((*l_3209) = (-1L)) != 0x5535L) || p_19) , (**g_1328)), 0x05E853E1L)), &l_3166)) != p_18), 0xD5L)))) <= g_2908[1][0].f1), p_19))) == l_2842)))) == 0x2C3E81DCL), p_19)), p_19)), 0)), 2)), 0x2B11827EL)), p_19)) , p_19) ^ l_3212) != 0x84BE3AD0L))) > p_19)) > p_19) , 0xE54CC18851AB0E72LL) & p_19)))
    { 
        uint32_t l_3213 = 0x31DC53BBL;
        int32_t l_3214 = (-3L);
        struct S0 * const l_3218 = &g_3219[0];
        struct S0 * const *l_3217 = &l_3218;
        struct S0 * const **l_3216 = &l_3217;
        struct S0 * const ***l_3215 = &l_3216;
        uint32_t l_3233 = 0x66DB945DL;
        int32_t *l_3266 = &l_3211;
        int64_t l_3287 = 1L;
        int64_t ** const *l_3290 = &g_465;
        int64_t ** const **l_3289 = &l_3290;
        int64_t ** const ***l_3288 = &l_3289;
        union U1 l_3310 = {0xF21DD9B4L};
        const uint8_t *l_3325 = &g_1150.f2;
        int32_t **l_3331 = (void*)0;
        l_3214 = l_3213;
        if ((((((*l_3215) = (void*)0) == (void*)0) <= (safe_mod_func_int8_t_s_s(l_3213, (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_19, ((*l_3209) = (!((((*g_998) |= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((*g_597) , (0x68L != l_3233)), (**g_1789))), 2)), l_3165))) | 0x458651CEL) && l_3233))))), p_19)) , l_3213) & l_3233)))) , 0xBE94C5B7L))
        { 
            const uint32_t l_3234[3] = {0x92E146B5L,0x92E146B5L,0x92E146B5L};
            int32_t *l_3235 = (void*)0;
            int i;
            (*g_998) = l_3234[1];
            l_3235 = ((*g_75) = &l_3168[1][0]);
        }
        else
        { 
            int8_t l_3262 = 0xC2L;
            uint32_t l_3264 = 0x80C4B18BL;
            int32_t *l_3265 = &g_616;
            int32_t l_3268 = (-10L);
            int32_t l_3269 = 0xDD377266L;
            uint16_t l_3272 = 1UL;
            uint64_t l_3317 = 0xB048707F51E0047BLL;
            uint8_t *l_3327 = &g_3219[0].f0;
            int32_t l_3333 = 3L;
            int32_t l_3335 = 0xA0EC06FAL;
            int16_t l_3336 = 0xB3B7L;
            int32_t l_3337 = (-1L);
            int32_t l_3338 = 0xEA448AFCL;
            int32_t l_3339 = 0x91008CB2L;
            int16_t *****l_3362 = &l_2893;
            uint32_t **l_3383 = &g_1216;
            int8_t *l_3390 = &l_2873;
            uint8_t *l_3391 = (void*)0;
            uint8_t *l_3392 = &g_820;
            if (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(1L, (!p_19))), (*g_597))), (safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(0x2A08L, p_19)) & (safe_sub_func_uint8_t_u_u(p_19, l_3213))), l_3233)), 0x0BD1C0A75F0CD986LL)))) <= l_3213))
            { 
                const uint16_t *l_3252[5];
                const uint16_t **l_3253 = &l_3252[1];
                int32_t l_3270 = 0x631BE9B9L;
                int32_t l_3271[3][5] = {{4L,4L,0x907EF42CL,4L,4L},{(-1L),4L,(-1L),(-1L),4L},{4L,(-1L),(-1L),4L,(-1L)}};
                int32_t ***l_3276 = &g_2572;
                struct S0 *l_3321 = (void*)0;
                int8_t l_3334 = (-3L);
                int i, j;
                for (i = 0; i < 5; i++)
                    l_3252[i] = &g_438;
                if ((((!(((((*l_3253) = l_3252[3]) == l_3209) & (((*g_998) = (safe_mul_func_uint16_t_u_u((((safe_div_func_int16_t_s_s(p_19, (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(246UL, (((**g_465) > (*g_466)) , (&g_1790 != &g_1790)))), 3UL)) , l_3213) , 0xAA3DL))) != l_3262) < 0x0CE1L), 0L))) || 0xEC68C381L)) || p_19)) , p_19) , 1L))
                { 
                    int32_t *l_3267[1][1];
                    int32_t **l_3275[4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_3267[i][j] = &l_3167;
                    }
                    for (i = 0; i < 4; i++)
                        l_3275[i] = &l_3267[0][0];
                    (*g_75) = (l_3266 = l_3265);
                    l_3272++;
                    (*g_75) = p_18;
                }
                else
                { 
                    uint8_t l_3292 = 8UL;
                    uint32_t l_3305 = 0xF81D25EDL;
                    struct S0 **l_3322 = &l_2907[5][3][0];
                    const uint8_t **l_3326 = &l_3325;
                    uint8_t **l_3328 = &g_597;
                    int8_t *l_3329 = &l_3148[0][0];
                    int32_t l_3330 = 0x3EFCB78CL;
                    (*l_3266) = ((void*)0 != l_3276);
                    (*g_998) ^= (safe_rshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_19, p_19)), ((((safe_lshift_func_int16_t_s_s((l_3287 ^ 255UL), 0)) <= (l_3288 != l_3291)) >= (((*l_3265) != p_19) >= p_19)) ^ 0x0673L))) != (**g_1789)) | (*g_597)), l_3292));
                    (*g_998) |= (safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((((l_3271[2][0] <= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_3305, (((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((*g_1216) , (l_3310 , (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((((safe_add_func_uint64_t_u_u(l_3317, (l_3318 , (((safe_rshift_func_uint16_t_u_s(65535UL, p_19)) , (*l_3266)) == 6L)))) && l_3292) , p_19) || 0x29C72051L), 0xA9L)) | p_19), 0x6747L)))), p_19)), p_19)) , p_19) & p_19))), (**g_1789)))) & p_19) > p_19), p_19)), (*l_3265))) ^ p_19), (*l_3266))), p_19));
                    (*l_3322) = l_3321;
                    (*l_3266) = ((*l_3265) = (((*g_998) &= ((((l_3330 |= (((safe_add_func_uint8_t_u_u(0xB2L, (((*l_3326) = l_3325) == ((*l_3328) = l_3327)))) == (*l_3266)) <= (((*l_3329) = p_19) <= 0x49L))) , (((***l_2825) = (**l_2823)) != l_3331)) < p_19) ^ 2L)) , (*g_998)));
                }
                for (l_3270 = 1; (l_3270 >= 0); l_3270 -= 1)
                { 
                    int32_t *l_3332[7] = {&l_3310.f0,&l_3310.f0,&l_3211,&l_3310.f0,&l_3310.f0,&l_3211,&l_3310.f0};
                    int i;
                    l_3340--;
                }
            }
            else
            { 
                int32_t *l_3343 = &l_3269;
                l_3343 = &l_3168[0][0];
                for (g_820 = 0; (g_820 <= 3); g_820 += 1)
                { 
                    const union U1 *l_3356 = &l_3318;
                    (*l_3266) = (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_19, ((*l_3265) = (((!(safe_unary_minus_func_uint32_t_u(p_19))) >= 65529UL) && (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(0x30L, 4)), p_19)))))), ((*g_597) ^= ((*l_3327) &= (safe_sub_func_uint8_t_u_u(((void*)0 != l_3356), p_19))))));
                }
                for (l_3333 = 29; (l_3333 >= (-30)); --l_3333)
                { 
                    int32_t **l_3359 = &g_1228[1][3];
                    uint64_t *l_3376 = &g_1941[1][2];
                    uint64_t *l_3377[4][5] = {{(void*)0,&l_3317,&l_3317,(void*)0,&l_3317},{(void*)0,(void*)0,&g_570,(void*)0,(void*)0},{&l_3317,(void*)0,&l_3317,&l_3317,(void*)0},{(void*)0,&g_151,&g_151,(void*)0,&g_151}};
                    int32_t *l_3378 = &l_3339;
                    int i, j;
                    (*l_3359) = p_18;
                    (*g_998) ^= (safe_rshift_func_int8_t_s_s((((g_3363 = l_3362) == (void*)0) , (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((((g_151 = ((*l_3376) = ((safe_mod_func_uint8_t_u_u((*g_597), ((safe_rshift_func_uint16_t_u_u(65535UL, (safe_mul_func_int8_t_s_s(8L, p_19)))) , ((*l_3266) , (*l_3266))))) & (*l_3343)))) && 18446744073709551611UL) || p_19) >= (*l_3266)), (*g_1790))), 2UL))), 7));
                    return (*l_3359);
                }
            }
            (*l_3266) = ((safe_div_func_int32_t_s_s(1L, (safe_add_func_uint8_t_u_u(((*g_597) ^= 1UL), (l_3383 != (void*)0))))) & ((((*l_3265) ^ ((*l_3392) = (+(safe_mul_func_int8_t_s_s(((*l_3390) ^= (safe_mul_func_int8_t_s_s((*l_3266), ((g_3389 , (*l_3266)) && 3L)))), p_19))))) && 0x2F7C7FC6L) >= p_19));
            (**g_667) = &l_3310;
        }
    }
    else
    { 
        int32_t *l_3393 = &l_3164;
        int32_t *l_3394 = &l_2972;
        return l_3395;
    }
    (*g_75) = func_37(((p_19 ^ ((p_19 , (void*)0) != (*g_1484))) , (safe_mul_func_int16_t_s_s((+(safe_add_func_int32_t_s_s((((*g_597) = (safe_rshift_func_uint8_t_u_u((*g_597), 3))) || (~(((**g_1328) , ((safe_lshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(l_3416, (**g_465))) & 0UL), l_3417[0][0][0])), 12)), 1L)) ^ p_19), 1)) & l_3418)) <= (*g_597)))), 0x996B1A5EL))), l_3419))), &l_3164);
    return l_3421;
}



static int32_t * func_20(uint32_t  p_21, int32_t * p_22, int32_t * p_23, int32_t  p_24, int16_t  p_25)
{ 
    int8_t l_1965 = 0xFDL;
    int32_t l_1966[7][4][1] = {{{0x61C0689BL},{1L},{(-1L)},{1L}},{{0x61C0689BL},{1L},{(-1L)},{1L}},{{0x61C0689BL},{1L},{(-1L)},{1L}},{{0x61C0689BL},{1L},{(-1L)},{1L}},{{0x61C0689BL},{1L},{(-1L)},{1L}},{{0x61C0689BL},{1L},{(-1L)},{1L}},{{0x61C0689BL},{1L},{(-1L)},{1L}}};
    struct S0 l_1968 = {1UL,0xAB2831713B910207LL,0xB1L,0xD4081C29L};
    union U1 ****l_2071 = &g_667;
    union U1 l_2084 = {0x78834775L};
    uint32_t *l_2109 = &g_10;
    int32_t ** const **l_2161 = (void*)0;
    int32_t ** const ***l_2160 = &l_2161;
    int64_t l_2178 = 4L;
    uint16_t l_2195 = 0xC96DL;
    uint32_t l_2225 = 4294967295UL;
    int16_t * const ***l_2236 = (void*)0;
    uint64_t *l_2252 = &g_1395;
    const uint16_t l_2288 = 0x0D3CL;
    int32_t l_2298 = (-1L);
    uint64_t l_2348 = 18446744073709551615UL;
    int16_t l_2358 = 8L;
    uint64_t l_2359[7];
    int32_t **l_2407 = &g_76;
    struct S0 **l_2410 = &g_1149[1][0][0];
    const int32_t *l_2421[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const int32_t **l_2420[3];
    uint32_t l_2426 = 0x980DC22EL;
    uint32_t l_2433 = 0x6DCF6D20L;
    const uint16_t l_2437 = 1UL;
    uint32_t l_2463[3];
    int64_t l_2505[3];
    uint64_t l_2506 = 0x6F7CDE53045BD1E8LL;
    uint32_t l_2543 = 0x71015D1FL;
    uint16_t l_2587 = 65535UL;
    uint32_t l_2710 = 0x1BFB031EL;
    const uint16_t l_2748 = 0xF671L;
    uint32_t l_2752 = 0x1C069C75L;
    int16_t l_2771 = 0x1911L;
    int32_t ***l_2791 = &g_75;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_2359[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_2420[i] = &l_2421[4];
    for (i = 0; i < 3; i++)
        l_2463[i] = 0x3B76B29CL;
    for (i = 0; i < 3; i++)
        l_2505[i] = 0xF125EB47C74CFCB4LL;
    for (g_820 = 0; (g_820 >= 34); ++g_820)
    { 
        uint32_t l_1944 = 18446744073709551615UL;
        int32_t l_1980 = 0x69EED08EL;
        int32_t l_1981 = 0x0F4C9FF7L;
        int32_t l_1982 = 0x863780D7L;
        int32_t l_1983 = 0x682C5A4EL;
        int32_t l_1984 = 0xE1DB4DBDL;
        int16_t l_1988 = 1L;
        struct S0 l_1993[6][1] = {{{0xC3L,0x0E0E3CEC33457209LL,0xF9L,7L}},{{0x7FL,0xE8E036B6A42DA4CBLL,255UL,0L}},{{0xC3L,0x0E0E3CEC33457209LL,0xF9L,7L}},{{0x7FL,0xE8E036B6A42DA4CBLL,255UL,0L}},{{0xC3L,0x0E0E3CEC33457209LL,0xF9L,7L}},{{0x7FL,0xE8E036B6A42DA4CBLL,255UL,0L}}};
        struct S0 ****l_2040 = &g_1903;
        union U1 l_2085 = {4L};
        int64_t *****l_2107 = &g_2025[0][5][3];
        int32_t * const *l_2151 = &g_998;
        int32_t * const **l_2150 = &l_2151;
        int32_t *l_2162 = &g_46[0][3];
        int32_t *l_2163 = &l_1966[4][3][0];
        uint8_t l_2164 = 0UL;
        const uint64_t * const l_2165 = &g_151;
        int i, j;
        for (g_151 = 4; (g_151 != 58); ++g_151)
        { 
            uint8_t l_1932[6][2][6] = {{{0xE8L,255UL,1UL,0xACL,0x7CL,255UL},{0xACL,0x7CL,255UL,0x0AL,0UL,255UL}},{{0xD0L,0x7CL,1UL,1UL,0x7CL,0xD0L},{0x7CL,255UL,0x2AL,0xEAL,0x0AL,1UL}},{{1UL,0x2AL,0UL,249UL,1UL,0xA0L},{1UL,0xEAL,249UL,0xEAL,1UL,0x0AL}},{{0x7CL,0x0AL,1UL,1UL,0xA0L,0xE8L},{0xD0L,1UL,0xA0L,0x0AL,0xE8L,0xE8L}},{{0xACL,1UL,1UL,0xACL,255UL,0x0AL},{0xE8L,1UL,249UL,255UL,0xEAL,0xA0L}},{{249UL,0xD0L,0UL,1UL,0xEAL,1UL},{0x2AL,1UL,0x2AL,255UL,255UL,0xD0L}}};
            int32_t l_1939 = 9L;
            int32_t *****l_1967 = &g_1384[0];
            int32_t l_1969[6][5][6] = {{{6L,0x5E1ABE8FL,4L,4L,0x5E1ABE8FL,6L},{0xB6B0E1B1L,6L,4L,6L,0xB6B0E1B1L,0xB6B0E1B1L},{0x0E033C22L,6L,0x0E033C22L,4L,0xB6B0E1B1L,4L},{4L,0xB6B0E1B1L,4L,0x0E033C22L,0x0E033C22L,4L},{6L,6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L}},{{0x0E033C22L,0xB6B0E1B1L,0x5E1ABE8FL,0x5E1ABE8FL,0xB6B0E1B1L,0x0E033C22L},{6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L,6L},{4L,0x0E033C22L,0x0E033C22L,4L,0xB6B0E1B1L,4L},{4L,0xB6B0E1B1L,4L,0x0E033C22L,0x0E033C22L,4L},{6L,6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L}},{{0x0E033C22L,0xB6B0E1B1L,0x5E1ABE8FL,0x5E1ABE8FL,0xB6B0E1B1L,0x0E033C22L},{6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L,6L},{4L,0x0E033C22L,0x0E033C22L,4L,0xB6B0E1B1L,4L},{4L,0xB6B0E1B1L,4L,0x0E033C22L,0x0E033C22L,4L},{6L,6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L}},{{0x0E033C22L,0xB6B0E1B1L,0x5E1ABE8FL,0x5E1ABE8FL,0xB6B0E1B1L,0x0E033C22L},{6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L,6L},{4L,0x0E033C22L,0x0E033C22L,4L,0xB6B0E1B1L,4L},{4L,0xB6B0E1B1L,4L,0x0E033C22L,0x0E033C22L,4L},{6L,6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L}},{{0x0E033C22L,0xB6B0E1B1L,0x5E1ABE8FL,0x5E1ABE8FL,0xB6B0E1B1L,0x0E033C22L},{6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L,6L},{4L,0x0E033C22L,0x0E033C22L,4L,0xB6B0E1B1L,4L},{4L,0xB6B0E1B1L,4L,0x0E033C22L,0x0E033C22L,4L},{6L,6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L}},{{0x0E033C22L,0xB6B0E1B1L,0x5E1ABE8FL,0x5E1ABE8FL,0xB6B0E1B1L,0x0E033C22L},{6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L,6L},{4L,0x0E033C22L,0x0E033C22L,4L,0xB6B0E1B1L,4L},{4L,0xB6B0E1B1L,4L,0x0E033C22L,0x0E033C22L,4L},{6L,6L,0x0E033C22L,0x5E1ABE8FL,0x0E033C22L,6L}}};
            int32_t *l_1970 = &g_68;
            int32_t *l_1971 = &l_1939;
            int32_t *l_1972 = &g_833;
            int32_t *l_1973 = (void*)0;
            int32_t *l_1974 = &g_833;
            int32_t *l_1975 = &g_46[0][5];
            int32_t *l_1976 = &l_1969[0][0][3];
            int32_t *l_1977 = (void*)0;
            int32_t *l_1978 = &l_1966[3][3][0];
            int32_t *l_1979[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_1985 = 0x3F8C547FL;
            int8_t **l_2016 = &g_1184[3][1][2];
            int64_t ***l_2023 = &g_465;
            int64_t ****l_2022 = &l_2023;
            int64_t *****l_2021 = &l_2022;
            int16_t ***l_2037 = &g_1486[0];
            int16_t ****l_2036 = &l_2037;
            uint16_t l_2056 = 0xE548L;
            uint16_t l_2065 = 0x2E4BL;
            union U1 ****l_2070[2];
            const uint32_t l_2094 = 0x35C2CC3DL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2070[i] = &g_667;
            for (g_394 = 3; (g_394 == 8); g_394++)
            { 
                for (p_25 = 0; (p_25 < (-5)); p_25 = safe_sub_func_uint8_t_u_u(p_25, 1))
                { 
                    int32_t *l_1935 = &g_771;
                    int32_t *l_1936 = &g_46[0][2];
                    int32_t *l_1937 = &g_46[0][5];
                    int32_t *l_1938 = &g_616;
                    int32_t *l_1940[5][2] = {{&l_1939,&g_616},{&g_616,&g_68},{&g_616,&g_68},{&g_616,&g_616},{&l_1939,&l_1939}};
                    int i, j;
                    l_1932[1][1][4]--;
                    --g_1941[0][4];
                    l_1944--;
                    (*g_998) = (safe_div_func_uint64_t_u_u(0x0CDE05F49E352C07LL, (safe_mul_func_uint16_t_u_u(((((**g_1789) && ((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((0x165523DBF0F575DFLL > (p_22 != p_23)), (*l_1935))), (l_1939 , p_24))) || 5UL)) && (*g_597)) | (*p_23)), p_21))));
                }
                for (l_1939 = (-3); (l_1939 != (-12)); l_1939 = safe_sub_func_int32_t_s_s(l_1939, 1))
                { 
                    uint64_t l_1957 = 18446744073709551613UL;
                    union U1 l_1958 = {0xF67F1B76L};
                    (*g_998) = (p_24 > p_24);
                    l_1966[3][2][0] &= ((l_1957 != 0xABL) <= ((((*g_313) = l_1958) , 0xEBF9L) | (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((void*)0 != &g_995) || l_1965), p_24)), l_1944)), (*g_998)))));
                }
                (*g_998) |= ((((p_21 , l_1967) == (void*)0) , l_1968) , 0xE8384627L);
            }
            (*p_22) ^= (*p_23);
            ++l_1985;
            if (l_1988)
                break;
            for (g_178 = 0; (g_178 <= 1); g_178 += 1)
            { 
                int16_t *l_1996 = (void*)0;
                int16_t *l_1997 = (void*)0;
                int16_t *l_1998 = &g_1280;
                int32_t l_2013 = 0xEA1E67E2L;
                uint64_t *l_2030 = (void*)0;
                uint64_t *l_2031 = &g_1395;
                int8_t ** const l_2032 = (void*)0;
                int16_t ****l_2033 = (void*)0;
                uint64_t * const *l_2063 = &g_671;
                uint64_t * const **l_2062 = &l_2063;
                uint64_t * const ***l_2061 = &l_2062;
                uint64_t * const ***l_2064 = &l_2062;
                union U1 l_2083[1] = {{0x8D1F2F80L}};
                int32_t *l_2095 = &l_1969[3][1][3];
                int i, j, k;
                if ((l_1932[g_178][g_178][(g_178 + 2)] != ((g_1941[g_178][g_178] = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_1993[4][0] , l_1966[6][2][0]), 2)), ((*l_1998) ^= ((*l_1970) , (safe_rshift_func_uint8_t_u_s(0x2EL, 3))))))) < ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_1966[3][2][0] , (+(safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_div_func_uint32_t_u_u(((*p_23) , 0x054F5258L), l_1932[g_178][g_178][(g_178 + 2)])) < 1UL))), l_1932[g_178][g_178][(g_178 + 2)])), (**g_1789))))), (*g_1790))), 9)) & 0x7EL))))
                { 
                    (*l_1976) ^= ((*p_22) = ((*l_1972) ^= (safe_div_func_uint8_t_u_u((l_1968.f0 & 0UL), 0xADL))));
                }
                else
                { 
                    (*l_1976) &= l_1993[4][0].f2;
                }
                l_2013 &= (*g_76);
                if ((((*p_23) < (~(~(l_2016 != ((((((*l_1974) &= ((safe_add_func_int32_t_s_s((-1L), (*p_23))) ^ (((g_2019 == (g_2024 = l_2021)) , ((*l_2031) = (((safe_mul_func_uint16_t_u_u((+((*p_22) , p_24)), (*g_1790))) , 0UL) & l_1993[4][0].f2))) == p_24))) > (*g_1329)) <= p_21) || (*g_597)) , l_2032))))) || 7UL))
                { 
                    union U1 l_2034 = {3L};
                    uint16_t l_2035 = 0xC923L;
                    (*l_1978) |= (((*g_466) | (l_2033 == (((l_2034 , l_2035) < p_21) , l_2036))) <= (safe_rshift_func_int8_t_s_u((l_2040 != l_2040), 5)));
                    (*p_22) = (safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((p_24 , (safe_rshift_func_uint8_t_u_s(((((((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((0xDB3BL <= ((((safe_div_func_uint32_t_u_u(l_2056, (safe_lshift_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(g_1941[g_178][g_178], 0xE799L)) < (l_2061 != l_2064)) ^ p_24), 7)))) == p_25) , p_24) | p_24)), 0x81DD90CDDE2BA1CDLL)), 0x35F4L)))) ^ p_21) & 0L) || 0x3A2F2406L) == p_25) | l_2065), 1))), 7)), (**g_1328))), 0x7441L));
                    l_1981 = 0x9D0C5B63L;
                    l_1966[1][1][0] = 0x9D89CF69L;
                }
                else
                { 
                    union U1 *****l_2072 = &l_2071;
                    int32_t l_2092[7] = {7L,0L,7L,7L,0L,7L,7L};
                    int i;
                    (*p_22) = (!((safe_div_func_uint16_t_u_u((~((l_2070[1] != ((*l_2072) = l_2071)) != (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s(l_1932[g_178][g_178][(g_178 + 2)], (safe_add_func_int16_t_s_s((0x55L >= (((((safe_lshift_func_uint8_t_u_u((((l_2085 = (l_2084 = l_2083[0])) , (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(l_2092[5], ((&l_1965 != (void*)0) | (*g_998)))), 1)) > p_25), (-1L)))) || 0xC398B08B8FBAE07ALL), 1)) >= p_25) ^ 0xE3505F38L) > l_2083[0].f0) > g_2093)), 0xDAF6L)))) || g_1941[g_178][g_178]), l_2094)), p_25)))), p_25)) , (-10L)));
                    return p_23;
                }
                (*g_998) = 0xE60D2C52L;
            }
        }
        if ((*g_998))
        { 
            int64_t ** const *l_2106 = (void*)0;
            int64_t ** const ** const l_2105 = &l_2106;
            int64_t ** const ** const *l_2104 = &l_2105;
            int32_t l_2124[2];
            uint16_t l_2131 = 65535UL;
            uint16_t *l_2147 = &g_832;
            const int16_t l_2148 = 0xFF76L;
            int32_t l_2149 = 0x3C79E369L;
            int i;
            for (i = 0; i < 2; i++)
                l_2124[i] = 0x1B73B22AL;
            for (l_1988 = 17; (l_1988 <= (-14)); l_1988 = safe_sub_func_uint8_t_u_u(l_1988, 6))
            { 
                const uint8_t **l_2103 = (void*)0;
                const uint8_t ***l_2102 = &l_2103;
                int32_t *l_2108 = &g_394;
                uint64_t *l_2110 = (void*)0;
                uint64_t *l_2111 = &g_151;
                (*p_22) = ((safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((1L < 0x49L), ((*l_2111) = ((((l_2102 == (void*)0) || ((l_2104 == l_2107) < (((*g_1328) = func_37((p_25 , l_1993[4][0].f2), l_2108)) == l_2109))) > l_1968.f1) ^ 0x1C69C4B1L)))), (*g_1790))) != p_21);
                return p_23;
            }
            for (g_68 = (-20); (g_68 >= 12); g_68 = safe_add_func_uint16_t_u_u(g_68, 4))
            { 
                uint64_t l_2123 = 1UL;
                if ((l_1993[4][0].f0 | (g_2116 > ((((((l_1984 ^= (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((**g_1789) & 5UL) , ((l_1968.f0 > (*p_23)) == ((((*g_466) ^ p_24) >= l_2123) , 0xB4L))), l_2124[1])), (*p_22))), 0xD8L))) && l_2124[1]) , (void*)0) == &g_1790) , 0xCF944FCBL) == p_21))))
                { 
                    int32_t *l_2125 = &g_46[0][3];
                    return l_2125;
                }
                else
                { 
                    uint16_t *l_2130[6][1][7] = {{{&g_832,&g_832,&g_438,&g_832,&g_438,&g_832,&g_832}},{{&g_832,&g_832,&g_438,&g_832,&g_438,&g_832,&g_832}},{{&g_832,&g_832,&g_438,&g_832,&g_438,&g_832,&g_832}},{{&g_832,&g_832,&g_438,&g_832,&g_438,&g_832,&g_832}},{{&g_832,&g_832,&g_438,&g_832,&g_438,&g_832,&g_832}},{{&g_832,&g_832,&g_438,&g_832,&g_438,&g_832,&g_832}}};
                    int i, j, k;
                    (*p_22) &= (safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((l_2130[3][0][4] != (((l_2131 & 0xBBL) || (p_21 < (((void*)0 == (*g_667)) <= (((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((-1L), p_24)), 0xE8L)) < 0x35014F3CL), 0x66L)), 0UL)) == (*g_597)) , p_21)))) , (*g_1789))), p_21)) , p_21), p_21));
                    return (*g_75);
                }
            }
            l_2149 ^= (((safe_div_func_int32_t_s_s((((((*g_1329) & (~((l_1968.f2 | 0x5CE17B37L) >= ((safe_mod_func_int64_t_s_s(((**g_1789) >= ((*l_2147) = ((*g_313) , (((((***g_2026) = (safe_add_func_int64_t_s_s(p_25, l_1984))) != 0x7C866F7BE154AAB1LL) >= p_25) ^ 0xAA81E76EL)))), l_2124[1])) == l_2148)))) != p_25) || (*p_23)) == l_1982), 5L)) , (*g_597)) || l_1968.f2);
        }
        else
        { 
            (*g_998) = (l_1980 = (-3L));
        }
        (*l_2163) = ((*l_2162) = ((l_2150 != &l_2151) >= (safe_add_func_uint8_t_u_u(((***l_2150) = p_25), ((((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*p_22) = ((safe_add_func_uint16_t_u_u(((1L <= (p_25 , ((p_21 , (void*)0) != l_2160))) > (*g_1790)), 0UL)) || (**g_1328))), 0xD1E9F69FL)), p_25)) > l_1944) && (*g_466)) , p_21)))));
        (*l_2162) = (l_2164 || ((**g_669) == l_2165));
    }
    if ((65535UL && (p_21 >= p_24)))
    { 
        const uint32_t l_2166 = 0UL;
        struct S0 l_2169 = {0x47L,0L,0xCCL,0x5C8286BBL};
        int8_t *l_2176 = (void*)0;
        int8_t *l_2177 = &g_1367;
        (*g_75) = ((((p_25 | l_2166) , (safe_mul_func_uint16_t_u_u(((**g_1789) = (l_2169 , (safe_div_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0x4DL, (*g_597))) && ((*g_313) , ((((*l_2177) = (p_21 & p_24)) , (void*)0) == (void*)0))) & p_24), l_2178)))), p_21))) || 0UL) , (void*)0);
    }
    else
    { 
        uint32_t l_2179 = 8UL;
        int32_t l_2182 = 0x90557B0DL;
        int32_t *l_2194 = &g_2093;
        int32_t **l_2193 = &l_2194;
        int32_t l_2201 = 3L;
        uint32_t l_2202 = 0x418DA470L;
        const int64_t l_2217 = 1L;
        union U1 l_2251 = {0L};
        int64_t l_2310 = 0x8B82B3B6EA32EE7FLL;
        int32_t l_2323 = 0xA6E63B8EL;
        int32_t l_2325 = 0L;
        int32_t l_2326 = (-9L);
        int32_t l_2327[4][5] = {{7L,7L,(-4L),7L,7L},{(-10L),2L,(-10L),(-10L),2L},{7L,0x7AC5580DL,0x7AC5580DL,7L,0x7AC5580DL},{2L,2L,0xF4D276ECL,2L,2L}};
        const int64_t **l_2345 = (void*)0;
        int i, j;
        --l_2179;
        (*g_998) &= (l_2182 ^ 1L);
        (*g_998) = ((*p_22) = ((((((*g_1790) = p_21) >= (safe_lshift_func_uint16_t_u_s(0UL, (((safe_sub_func_int16_t_s_s(p_25, ((--(*g_597)) | (((0x2751E0D0E8938900LL != (((safe_lshift_func_uint16_t_u_u(l_2182, (g_832 = (safe_sub_func_uint8_t_u_u((((*l_2193) = &g_2116) == (void*)0), 253UL))))) , p_21) >= l_2182)) & p_25) > 0xCD17L)))) <= l_2179) < p_21)))) && l_2195) < p_21) , l_2182));
lbl_2349:
        for (l_2195 = 6; (l_2195 >= 28); ++l_2195)
        { 
            int32_t l_2216 = 0x1C14CA40L;
            uint32_t *l_2224 = (void*)0;
            int16_t ***l_2232 = &g_1486[0];
            int16_t ****l_2231[3];
            int16_t *****l_2233 = &l_2231[2];
            int16_t * const **l_2235[2][3] = {{&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428}};
            int16_t * const ***l_2234 = &l_2235[1][2];
            uint64_t *l_2237 = &g_1941[0][4];
            uint64_t *l_2238[3][6];
            int32_t l_2265 = 1L;
            int32_t l_2324[4] = {0L,0L,0L,0L};
            uint8_t l_2329 = 255UL;
            const int64_t ***l_2346 = (void*)0;
            const int64_t ***l_2347 = &l_2345;
            int i, j;
            for (i = 0; i < 3; i++)
                l_2231[i] = &l_2232;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 6; j++)
                    l_2238[i][j] = &g_151;
            }
            for (g_1150.f3 = (-20); (g_1150.f3 > 28); g_1150.f3 = safe_add_func_uint64_t_u_u(g_1150.f3, 7))
            { 
                int32_t *l_2200[5][5] = {{&l_2084.f0,&g_46[0][3],&g_46[0][3],&l_2084.f0,&l_2084.f0},{&l_2084.f0,(void*)0,&l_2084.f0,(void*)0,&l_2084.f0},{&l_2084.f0,&l_2084.f0,&g_46[0][3],&g_46[0][3],&l_2084.f0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2084.f0,&g_46[0][3],&g_46[0][3],&l_2084.f0,&l_2084.f0}};
                uint64_t *l_2218 = &g_151;
                uint64_t *l_2219 = (void*)0;
                uint64_t *l_2220 = &g_1941[0][4];
                int i, j;
                l_2202++;
                for (l_2202 = 0; (l_2202 <= 0); l_2202 += 1)
                { 
                    int i, j;
                    (*p_22) |= g_46[l_2202][(l_2202 + 5)];
                    if (p_25)
                        goto lbl_2349;
                }
                (*p_22) = (p_21 & (p_25 ^ ((((*l_2220) = ((*l_2218) = (safe_add_func_int32_t_s_s(((p_24 && (3UL != ((((*g_313) , (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((+(safe_mul_func_uint16_t_u_u(p_21, 65532UL))), p_25)), 1L)), l_2216))) & l_2217) != l_2201))) ^ p_25), l_2216)))) != l_2216) | (*g_597))));
                (*p_22) ^= (safe_unary_minus_func_uint64_t_u(p_24));
                (*p_22) ^= 0x0A4E89F9L;
            }
            if (((((*p_22) &= (l_1966[5][0][0] = (((0x1BCBL & (safe_lshift_func_int8_t_s_u((l_2224 == ((l_2225 && ((safe_sub_func_int8_t_s_s((((g_570 = ((*l_2237) ^= (0x0AC22E5547048819LL || ((!(((*l_2233) = l_2231[0]) != (l_2236 = l_2234))) <= p_21)))) == p_25) , l_2216), p_25)) == l_2216)) , &p_21)), 3))) , p_24) >= (*g_597)))) & (*p_23)) > l_2216))
            { 
                uint8_t l_2239[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_2239[i] = 1UL;
                if ((*p_23))
                    break;
                l_2239[2]++;
            }
            else
            { 
                uint64_t *l_2253 = &g_1395;
                int8_t *l_2264[5] = {&g_393,&g_393,&g_393,&g_393,&g_393};
                int32_t l_2266 = (-1L);
                uint8_t l_2268[3][1][1];
                int32_t l_2299 = 0xC593CD75L;
                uint32_t *l_2300 = &l_2179;
                int32_t *l_2311 = &l_2298;
                int32_t *l_2312 = &g_314[1].f0;
                int32_t *l_2313 = &l_2298;
                int32_t *l_2314 = &g_314[1].f0;
                int32_t *l_2315 = &l_2251.f0;
                int32_t *l_2316 = &g_46[0][5];
                int32_t *l_2317 = &g_68;
                int32_t *l_2318 = (void*)0;
                int32_t *l_2319 = (void*)0;
                int32_t *l_2320 = &l_1966[0][1][0];
                int32_t *l_2321 = &l_2084.f0;
                int32_t *l_2322[1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_2268[i][j][k] = 0x8CL;
                    }
                }
                for (i = 0; i < 1; i++)
                    l_2322[i] = &l_1966[5][3][0];
                if ((safe_lshift_func_int16_t_s_u(((~((*l_2237) = (safe_div_func_uint8_t_u_u(g_2247[4], (((safe_unary_minus_func_int64_t_s(0x6488FA247C74D67DLL)) , (safe_rshift_func_uint16_t_u_u((l_2251 , (((((*g_670) = l_2238[2][1]) == (l_2253 = l_2252)) <= (l_2265 = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_2260[1], (safe_unary_minus_func_int8_t_s(((l_2182 |= (safe_lshift_func_uint16_t_u_s(l_2216, p_25))) , p_25))))) & l_2251.f0), p_24)), (*g_597))))) , p_24)), 1))) , l_2265))))) >= l_2201), p_25)))
                { 
                    int32_t *l_2267[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2267[i] = &g_314[1].f0;
                    l_2251.f0 = l_2266;
                    (*g_75) = l_2267[0];
                    --l_2268[1][0][0];
                    (*g_76) ^= ((safe_lshift_func_uint16_t_u_u(p_25, (l_2216 < p_21))) <= (safe_mod_func_int32_t_s_s((*p_23), (**g_1328))));
                    (*g_998) ^= ((*g_76) = ((safe_rshift_func_uint8_t_u_u(((((((l_2266 = ((safe_lshift_func_int8_t_s_u(((++(*g_671)) || ((*l_2252) = ((**g_670) = ((*g_597) < p_21)))), 0)) & ((safe_div_func_int8_t_s_s(p_21, ((&l_2266 == (p_21 , &l_2266)) && (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_unary_minus_func_uint16_t_u((l_2288 , 0x14C6L))) , 0L) , 0xD0L), 255UL)), 0xBD48L))))) & 65530UL))) || l_2216) == l_2216) | p_25) , 0x2DD6A5F1L) , 247UL), 4)) ^ (*g_1329)));
                }
                else
                { 
                    return p_23;
                }
                (*p_22) |= ((((**g_1328) = 0x81F4DC90L) <= ((((p_25 = l_2265) < (safe_div_func_uint32_t_u_u(((*l_2300) = ((l_2266 |= l_2265) == (safe_mul_func_uint16_t_u_u(p_21, ((l_2299 &= (((((+((((safe_lshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_2179, (0x07A46C010700F154LL | ((**g_465) = (-1L))))), l_2298)) || (*g_597)) >= 0x52BFL) && l_2268[2][0][0])) == l_2202) == l_2265) || (*g_597)) == l_2268[2][0][0])) ^ (*p_23)))))), l_2265))) != l_2216) , 0xDC0A4ABBL)) , 0xF0B41B17L);
                for (l_2179 = 1; (l_2179 > 1); l_2179 = safe_add_func_uint16_t_u_u(l_2179, 5))
                { 
                    int32_t *l_2303 = &g_314[1].f0;
                    return l_2303;
                }
                (*p_22) &= (safe_mod_func_int8_t_s_s(0x38L, (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_2299 = p_25), ((**g_670) && ((p_24 , &l_2217) != l_2238[2][2])))), ((((0xBEB819CB918FB0F6LL > l_2216) , p_21) ^ (**g_1789)) , 5L)))));
                l_2329++;
            }
            (*g_998) = (*p_22);
            (*g_998) |= (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(1L, (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(1L, p_25)), (safe_rshift_func_uint16_t_u_u(((*g_670) == l_2252), (((!((((*l_2347) = l_2345) == (void*)0) | p_24)) <= 0xAE2EL) ^ p_21))))))) && l_2348), 3UL)), 4));
        }
        (*p_22) = ((*g_998) = (!0x6303L));
    }
    for (g_1395 = (-30); (g_1395 < 50); ++g_1395)
    { 
        int32_t *l_2353 = &g_314[1].f0;
        int32_t *l_2354 = &l_1966[3][2][0];
        int32_t *l_2355 = &g_46[0][4];
        int32_t *l_2356 = &g_833;
        int32_t *l_2357[1];
        uint8_t *l_2370 = &g_1150.f0;
        int16_t ****l_2427 = (void*)0;
        struct S0 l_2458[3][1] = {{{0x57L,-1L,0UL,0x3DE580A4L}},{{0x57L,-1L,0UL,0x3DE580A4L}},{{0x57L,-1L,0UL,0x3DE580A4L}}};
        union U1 l_2459 = {0x0BD15490L};
        const uint64_t l_2465 = 18446744073709551615UL;
        union U1 l_2471[2][3][3] = {{{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}}},{{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}}}};
        uint32_t l_2540 = 0xA3C18AA7L;
        uint64_t l_2558 = 0UL;
        int8_t **l_2565 = &g_1184[0][3][6];
        int8_t ***l_2566 = &g_1183;
        int32_t ** const **l_2570 = &g_2569;
        int32_t l_2606 = 0xB8997BD7L;
        uint8_t ***l_2609 = (void*)0;
        const int32_t l_2613 = 0L;
        int32_t ***l_2628 = &g_75;
        struct S0 **l_2723[3][3] = {{&g_1149[3][4][0],&g_1149[1][2][0],&g_1149[3][4][0]},{&g_1149[3][3][0],&g_1149[3][3][0],&g_1149[3][3][0]},{&g_1149[3][4][0],&g_1149[1][2][0],&g_1149[3][4][0]}};
        int32_t **l_2733 = (void*)0;
        uint32_t l_2772 = 0UL;
        int64_t ** const l_2802 = &g_466;
        uint64_t ***l_2811[2][3];
        uint64_t ****l_2812 = &l_2811[0][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2357[i] = &g_68;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_2811[i][j] = &g_670;
        }
        l_2359[3]--;
        if (((*g_998) = (p_21 >= (0x74773F13143C5D14LL != (((((safe_mod_func_int32_t_s_s(((++(*g_597)) > ((~(((*l_2353) = ((safe_lshift_func_uint8_t_u_u(g_1150.f2, 3)) && (((~(((*l_2370) = 255UL) > (1L || (safe_mul_func_uint16_t_u_u((*l_2353), ((((((l_1968 , (void*)0) == (void*)0) > 0x58061263L) > (*g_466)) & l_1965) && p_24)))))) && g_833) ^ 0xF73051E9L))) < 0x70C08C961BB7CF57LL)) ^ 0x43L)), p_24)) || (**g_1328)) > 9UL) ^ 1L) < (*g_1329))))))
        { 
            struct S0 **l_2385 = &g_1149[2][2][0];
            int32_t l_2400 = 0xDB46A246L;
            int32_t ***l_2408 = (void*)0;
            int32_t ***l_2409[3][4][1] = {{{&g_75},{&g_75},{&l_2407},{&g_75}},{{&g_75},{&l_2407},{&g_75},{&g_75}},{{&l_2407},{&g_75},{&g_75},{&l_2407}}};
            const uint32_t l_2464 = 0x53F42384L;
            int i, j, k;
            (*l_2355) = (safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((*g_597)--), (*l_2353))) >= (safe_rshift_func_int16_t_s_s((((*l_2355) >= (((*l_2385) = &l_1968) != &l_1968)) <= ((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((((~((safe_lshift_func_int16_t_s_s(1L, (safe_lshift_func_uint8_t_u_s((~((safe_div_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(l_2400, (((((((*l_2355) , 0x6DL) <= g_1395) , l_2400) < (*p_23)) ^ 65535UL) , p_21))) <= 0xF555FDB0FC1EC118LL), (*l_2353))) ^ (**g_1789))), (*l_2355))))) != (**g_1789))) , p_25) ^ l_2400) != 1L), p_24)), l_2400)) , 0x45L)), 10))), p_24)), l_2400)) | 4L), (*p_23)));
            if ((((safe_mod_func_int16_t_s_s(p_21, p_25)) | ((safe_mod_func_int64_t_s_s((p_21 >= (&l_2353 != (l_2407 = l_2407))), 7L)) >= (((*g_998) = (p_21 , (*p_22))) <= 6L))) ^ p_21))
            { 
                struct S0 ***l_2411[4][1];
                struct S0 * const **l_2412 = (void*)0;
                struct S0 * const l_2414[3][1] = {{&g_2415},{&g_2415},{&g_2415}};
                struct S0 * const *l_2413 = &l_2414[1][0];
                int32_t l_2422 = 0x0988A388L;
                int16_t ** const **l_2428 = (void*)0;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2411[i][j] = &l_2410;
                }
                p_22 = func_37(((p_25 != ((g_995 = l_2410) == (l_2413 = ((*p_22) , l_2410)))) & (((*g_1216) = (safe_lshift_func_uint8_t_u_u(((*g_1329) != (safe_sub_func_int64_t_s_s(((1UL != ((void*)0 == l_2420[1])) ^ (*g_1790)), p_24))), 5))) , l_2422)), p_22);
                if ((safe_unary_minus_func_uint8_t_u(((((0xF1DFE238D1F79171LL < (((*g_998) = ((safe_lshift_func_int16_t_s_u((-2L), (**g_1789))) & (l_2426 && ((((((l_2427 != (l_2428 = (void*)0)) || (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((p_25 && p_25), 5)), p_24))) != p_25) > l_2433) < p_25) >= p_25)))) > p_24)) != (*p_23)) , p_24) , (*g_597)))))
                { 
                    if (l_2422)
                        break;
                    l_2357[0] = p_23;
                }
                else
                { 
                    int16_t l_2434 = (-7L);
                    l_2357[0] = ((*l_2407) = func_37(l_2434, p_22));
                }
                return p_22;
            }
            else
            { 
                int32_t l_2457 = 0xA0DFCC94L;
                for (p_25 = 0; (p_25 <= 0); p_25 += 1)
                { 
                    uint64_t *l_2447 = &l_2359[6];
                    int8_t l_2452 = 0x45L;
                    int32_t ****l_2462 = &l_2409[2][0][0];
                    int i;
                    (*l_2353) = ((*l_2356) = ((((safe_mod_func_uint32_t_u_u(l_2437, (safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((!(safe_div_func_uint64_t_u_u(((p_24 , (((*l_2447)++) && ((safe_div_func_uint64_t_u_u((l_2452 & (((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((l_2457 = p_21), (((((((l_2458[2][0] , l_2459) , (safe_lshift_func_uint16_t_u_u((l_2462 == (*l_2160)), p_24))) != p_24) ^ p_24) != (*g_998)) , &g_669) != &g_669))) > 0xDF6AC3BF1E5EDFC9LL), l_2463[2])) , p_25) < l_2464)), 1UL)) || 1L))) | 0x73L), p_25))), 65535UL)) & l_2465), (*g_597))), (*g_597))))) > 0x55L) | p_24) != 0xDC7E224F4A21B062LL));
                }
            }
            for (l_2459.f0 = 0; (l_2459.f0 <= 2); l_2459.f0 += 1)
            { 
                uint64_t l_2466 = 3UL;
                uint16_t l_2487 = 65527UL;
                uint32_t * const *l_2503 = &g_1216;
                uint32_t * const **l_2502 = &l_2503;
                l_2466++;
                (*l_2407) = ((safe_lshift_func_uint16_t_u_u(((((((((p_24 || ((*g_1329) = (0x4E6AL >= (((*g_313) = l_2471[0][0][2]) , p_24)))) | (safe_rshift_func_int16_t_s_s(l_2466, p_21))) ^ p_25) || p_21) || p_25) , (-1L)) & p_21) >= 0L), (*g_1790))) , p_23);
                for (g_394 = 3; (g_394 >= 0); g_394 -= 1)
                { 
                    uint32_t l_2474 = 0xA267628FL;
                    int i, j, k;
                    l_2474++;
                    if ((*g_998))
                        break;
                    (*l_2356) = ((*p_22) = (safe_mul_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(254UL, 6)), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*l_2355), 8)), (((((*l_2370) |= (*g_597)) != (((**l_2071) != (*g_667)) & (((p_25 ^= (l_2487 , ((0xB5L || 0x4BL) && 0x8C0741467CF2B708LL))) , 0UL) <= 4294967289UL))) | (*l_2354)) >= p_24))))) & 254UL) & (*l_2355)), (-3L))));
                    (*g_998) ^= l_2474;
                    (*l_2354) |= (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((~((safe_lshift_func_uint16_t_u_u(0UL, 4)) & (safe_rshift_func_int8_t_s_s(((l_2459 , 0x2835232A828CB34BLL) | ((+(safe_add_func_uint32_t_u_u((l_2487 || ((safe_mul_func_int8_t_s_s(((void*)0 == l_2502), (0xE38EAFA2L & (*p_23)))) || p_25)), l_2474))) ^ l_2487)), l_2474)))), p_25)), (*g_1790)));
                }
            }
        }
        else
        { 
            int32_t *l_2504[1][2][2];
            uint32_t ***l_2514 = &g_1328;
            uint32_t ***l_2531 = &g_1215[2][3][0];
            uint64_t l_2537 = 0UL;
            const int16_t l_2554 = 0x5B6BL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_2504[i][j][k] = &g_2328;
                }
            }
            l_2504[0][1][1] = (void*)0;
            (*g_75) = l_2357[0];
            ++l_2506;
            if ((safe_div_func_uint8_t_u_u(p_24, (safe_rshift_func_uint16_t_u_s((*g_1790), (*l_2355))))))
            { 
                uint32_t l_2513 = 18446744073709551615UL;
                int16_t l_2515 = (-1L);
                (*l_2354) = l_2513;
                (*l_2354) = ((((*g_1790) = ((void*)0 == l_2514)) , l_2459) , (l_2515 | (safe_rshift_func_uint16_t_u_u(((p_25 & 0xA9L) >= p_25), (**g_1789)))));
            }
            else
            { 
                for (g_348 = 0; (g_348 >= 0); g_348 = safe_add_func_uint8_t_u_u(g_348, 5))
                { 
                    return p_23;
                }
                for (g_170 = 6; (g_170 >= 57); g_170 = safe_add_func_int32_t_s_s(g_170, 8))
                { 
                    uint32_t l_2536 = 4294967286UL;
                    (*l_2407) = (((safe_mul_func_int16_t_s_s((0x48CBL && (((**g_465) && p_24) && (safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((-3L), (~(((void*)0 == l_2531) >= ((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_2536, 0x3377L)), p_25)) >= l_2537))))) || 0x42099F83L), 5)))), (*g_1790))) < (*l_2353)) , (*g_75));
                }
                for (g_394 = 0; (g_394 <= 10); g_394 = safe_add_func_uint32_t_u_u(g_394, 5))
                { 
                    --l_2540;
                    if ((*p_23))
                        break;
                    --l_2543;
                }
                if ((*p_22))
                    break;
            }
            for (l_1965 = 0; (l_1965 <= 1); l_1965 += 1)
            { 
                uint64_t l_2553 = 1UL;
                int32_t ***l_2555 = &g_75;
                int32_t l_2556 = (-1L);
                for (g_833 = 6; (g_833 >= 1); g_833 -= 1)
                { 
                    const struct S0 l_2548 = {255UL,0xD7D7B458DEFB3034LL,4UL,0xFC9EE7B7L};
                    int i;
                    (*l_2354) = ((0UL & (((safe_rshift_func_uint8_t_u_s((l_2548 , p_24), ((p_21 | (safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(0x5AL, (0xEAC0CD4D97DC0550LL ^ l_2553))) < 1UL), l_2554))) > (-2L)))) , l_2555) == l_2555)) < p_25);
                    if ((*p_22))
                        continue;
                }
                if ((*p_23))
                    continue;
                if ((*p_23))
                    break;
                for (g_771 = 0; (g_771 <= 6); g_771 += 1)
                { 
                    int32_t l_2557 = (-3L);
                    int i;
                    (*l_2354) |= 1L;
                    ++l_2558;
                    return p_22;
                }
            }
        }
        if (((safe_lshift_func_uint8_t_u_u((*g_597), (l_2471[0][0][2] , (safe_add_func_int32_t_s_s((((((*l_2566) = l_2565) == &g_1184[1][3][5]) & (*l_2356)) <= (((*l_2570) = ((p_21 , (((safe_sub_func_uint8_t_u_u(((p_25 >= (*g_1790)) <= 0x11FB9D49L), (*g_597))) && p_25) | 65535UL)) , g_2569)) == g_2571)), p_25))))) == p_21))
        { 
            uint16_t *l_2578 = &g_438;
            uint32_t * const *l_2586[7][7][5] = {{{&g_1329,(void*)0,&g_1329,&l_2109,&l_2109},{&l_2109,&l_2109,&g_1329,&l_2109,&l_2109},{&l_2109,&l_2109,&g_1329,(void*)0,&l_2109},{&l_2109,&l_2109,(void*)0,&l_2109,&l_2109},{&l_2109,&l_2109,(void*)0,&l_2109,(void*)0},{&g_1329,&l_2109,&g_1329,&l_2109,(void*)0},{&l_2109,(void*)0,&g_1329,(void*)0,&l_2109}},{{&g_1329,(void*)0,&g_1329,&l_2109,&l_2109},{&l_2109,&l_2109,&g_1329,&l_2109,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&g_1329},{&l_2109,&g_1329,&l_2109,&g_1329,&l_2109},{&g_1329,&g_1329,&l_2109,(void*)0,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109}},{{&l_2109,&g_1329,&l_2109,&g_1329,&g_1329},{&g_1329,&g_1329,&g_1329,&g_1329,(void*)0},{&l_2109,&g_1329,&g_1329,&g_1329,&g_1329},{&l_2109,&g_1329,&l_2109,&g_1329,&l_2109},{&g_1329,&g_1329,&l_2109,(void*)0,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109}},{{&l_2109,&g_1329,&l_2109,&g_1329,&g_1329},{&g_1329,&g_1329,&g_1329,&g_1329,(void*)0},{&l_2109,&g_1329,&g_1329,&g_1329,&g_1329},{&l_2109,&g_1329,&l_2109,&g_1329,&l_2109},{&g_1329,&g_1329,&l_2109,(void*)0,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109}},{{&l_2109,&g_1329,&l_2109,&g_1329,&g_1329},{&g_1329,&g_1329,&g_1329,&g_1329,(void*)0},{&l_2109,&g_1329,&g_1329,&g_1329,&g_1329},{&l_2109,&g_1329,&l_2109,&g_1329,&l_2109},{&g_1329,&g_1329,&l_2109,(void*)0,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109}},{{&l_2109,&g_1329,&l_2109,&g_1329,&g_1329},{&g_1329,&g_1329,&g_1329,&g_1329,(void*)0},{&l_2109,&g_1329,&g_1329,&g_1329,&g_1329},{&l_2109,&g_1329,&l_2109,&g_1329,&l_2109},{&g_1329,&g_1329,&l_2109,(void*)0,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109},{&l_2109,&g_1329,&g_1329,&g_1329,&l_2109}},{{&l_2109,&g_1329,&l_2109,&g_1329,&g_1329},{&g_1329,&g_1329,&g_1329,&g_1329,(void*)0},{&l_2109,&g_1329,&g_1329,&g_1329,&g_1329},{&l_2109,&g_1329,&l_2109,&g_1329,&l_2109},{&g_1329,&g_1329,&l_2109,(void*)0,&l_2109},{&l_2109,(void*)0,(void*)0,&g_1329,&g_1329},{&g_1329,(void*)0,&l_2109,(void*)0,&g_1329}}};
            uint32_t * const **l_2585 = &l_2586[4][2][3];
            uint32_t * const ***l_2584 = &l_2585;
            int32_t l_2604[5][5][4] = {{{0x3BA26E4AL,8L,0L,0x3BA26E4AL},{0x807618E6L,8L,0x370BE055L,0x7FC061C7L},{0x7FC061C7L,0L,0L,0x7FC061C7L},{(-1L),8L,0x96D5ED11L,0x3BA26E4AL},{0x7FC061C7L,8L,0x295EA587L,0x7FC061C7L}},{{0x807618E6L,0L,0x96D5ED11L,0x7FC061C7L},{0x3BA26E4AL,8L,0L,0x3BA26E4AL},{0x807618E6L,8L,0x370BE055L,0x7FC061C7L},{0x7FC061C7L,0L,0L,0x7FC061C7L},{(-1L),8L,0x96D5ED11L,0x3BA26E4AL}},{{0x7FC061C7L,8L,0x295EA587L,0x7FC061C7L},{0x807618E6L,0L,0x96D5ED11L,0x7FC061C7L},{0x3BA26E4AL,8L,0L,0x3BA26E4AL},{0x807618E6L,8L,0x370BE055L,0x7FC061C7L},{0x7FC061C7L,0L,0L,0x7FC061C7L}},{{(-1L),8L,0x96D5ED11L,0x3BA26E4AL},{0x7FC061C7L,8L,0x295EA587L,0x7FC061C7L},{0x807618E6L,0L,0x96D5ED11L,0x7FC061C7L},{0x3BA26E4AL,8L,0L,0x3BA26E4AL},{0x807618E6L,8L,0x370BE055L,0x7FC061C7L}},{{0x7FC061C7L,0L,0L,0x7FC061C7L},{(-1L),8L,0x96D5ED11L,0x3BA26E4AL},{0x7FC061C7L,8L,0x295EA587L,0x7FC061C7L},{0x807618E6L,0L,0x96D5ED11L,0x7FC061C7L},{0x3BA26E4AL,8L,0L,0x3BA26E4AL}}};
            int16_t * const *l_2638 = &g_429;
            struct S0 l_2639[7][5] = {{{0UL,0x4C2B518C58F03CF6LL,1UL,-1L},{0UL,0x4C2B518C58F03CF6LL,1UL,-1L},{0x66L,0x5A72C3D097FA5158LL,0xF3L,0xEA3C53EFL},{0xD8L,0xD573599C4F0BA4DDLL,0UL,1L},{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL}},{{1UL,1L,255UL,0x5DA5234EL},{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL},{1UL,0x8556C3A1417B6570LL,250UL,3L},{1UL,0x8556C3A1417B6570LL,250UL,3L},{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL}},{{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL},{0x86L,0x253738848D1648C8LL,1UL,0xC8FABA48L},{1UL,1L,255UL,0x5DA5234EL},{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL},{1UL,0x8556C3A1417B6570LL,250UL,3L}},{{0xD8L,0xD573599C4F0BA4DDLL,0UL,1L},{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL},{0x66L,0x5A72C3D097FA5158LL,0xF3L,0xEA3C53EFL},{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL},{0xD8L,0xD573599C4F0BA4DDLL,0UL,1L}},{{1UL,1L,255UL,0x5DA5234EL},{0UL,0x4C2B518C58F03CF6LL,1UL,-1L},{0x86L,0x253738848D1648C8LL,1UL,0xC8FABA48L},{1UL,0x8556C3A1417B6570LL,250UL,3L},{0UL,0x4C2B518C58F03CF6LL,1UL,-1L}},{{0xD8L,0xD573599C4F0BA4DDLL,0UL,1L},{0x86L,0x253738848D1648C8LL,1UL,0xC8FABA48L},{0x86L,0x253738848D1648C8LL,1UL,0xC8FABA48L},{0xD8L,0xD573599C4F0BA4DDLL,0UL,1L},{1UL,0x8556C3A1417B6570LL,250UL,3L}},{{0x78L,0xDDBD76BBE7C61D8FLL,0xFBL,0x8E7DBE5DL},{0xD8L,0xD573599C4F0BA4DDLL,0UL,1L},{0x66L,0x5A72C3D097FA5158LL,0xF3L,0xEA3C53EFL},{0UL,0x4C2B518C58F03CF6LL,1UL,-1L},{0UL,0x4C2B518C58F03CF6LL,1UL,-1L}}};
            int8_t *l_2651 = &l_1965;
            int i, j, k;
            for (g_860 = 0; (g_860 >= 31); g_860 = safe_add_func_uint32_t_u_u(g_860, 2))
            { 
                uint16_t **l_2579 = &l_2578;
                uint64_t l_2582 = 18446744073709551613UL;
                if ((((((*g_1789) = (*g_1789)) != ((*l_2579) = l_2578)) ^ 65535UL) < ((p_25 <= ((*l_2353) ^ (safe_add_func_uint16_t_u_u((((l_2582 != (safe_unary_minus_func_int64_t_s(((l_2584 != &g_1327[1][4][0]) , p_24)))) <= (-1L)) < p_25), 0xCFB0L)))) < 0xBE4BC186L)))
                { 
                    uint64_t l_2590 = 3UL;
                    int32_t **** const *l_2605 = &g_1384[1];
                    (*l_2356) &= ((((l_2587 != ((safe_rshift_func_int8_t_s_u(p_24, 0)) != (((l_2590 < (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((((*l_2355) , (((*p_22) = (!((**g_669) != (void*)0))) | (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((&p_23 != &l_2357[0]) >= (*g_1790)) | 0xC8035FECL) < 0UL), l_2590)), 2)))) & l_2604[1][1][2]), 3)) < l_2582) || l_2582), p_21)) , l_2605) == &g_1384[1]), 0x0575B494L)) <= 0L), 4))) < 8L) > l_2606))) != l_2604[1][1][2]) , 0x88F56A75L) <= l_2604[1][1][2]);
                }
                else
                { 
                    int8_t *l_2610 = &g_393;
                    (*g_998) &= (-3L);
                    p_22 = (p_24 , func_37((safe_mod_func_int8_t_s_s(((*l_2610) |= (((*p_23) != ((*g_597) , ((void*)0 != l_2609))) <= p_21)), ((safe_mod_func_int8_t_s_s(p_25, 0x93L)) , l_2613))), p_23));
                    return p_22;
                }
                for (g_570 = 0; (g_570 <= 1); g_570 += 1)
                { 
                    int32_t ****l_2629 = &l_2628;
                    uint64_t *l_2630 = &g_1941[0][4];
                    int i, j;
                    (*g_75) = p_22;
                    (*g_998) ^= (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((((g_32[g_570][g_570] < (**g_1789)) > ((*l_2355) = (safe_add_func_uint16_t_u_u(((**l_2579) ^= (safe_sub_func_uint8_t_u_u((((*l_2630) |= ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(9L, ((safe_lshift_func_int8_t_s_s((*l_2353), (((*l_2629) = l_2628) == (void*)0))) , 0UL))), p_24)) || p_21)) >= 18446744073709551615UL), l_2604[1][2][0]))), 0xFA20L)))) , 0x28L), 1UL)), 0));
                }
                for (l_1968.f0 = 0; (l_1968.f0 > 38); l_1968.f0++)
                { 
                    int8_t *l_2637 = &g_393;
                    (*g_998) ^= (safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((((((*l_2637) = ((&p_24 == (*g_2572)) >= p_24)) , (l_2638 == (l_2639[1][3] , ((*g_1485) = (*g_1485))))) <= (((**g_1789) ^ 0xEAC1L) == 7L)) && (-6L)), 0xA6L)) || (-1L)), p_24));
                }
            }
            (*l_2354) = (((((*g_597) = (((**g_1789) = ((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((*l_2651) &= (safe_add_func_int32_t_s_s((p_21 , ((0x1CL >= ((safe_div_func_uint32_t_u_u((**g_1328), (*p_23))) >= (((l_2604[1][3][2] = ((~p_24) , (safe_mul_func_uint16_t_u_u(((0x451FEA95D8F6D015LL || 0x5EFA70122687A14CLL) & 1L), p_24)))) > (*p_22)) ^ 0xAD954066AA2C4D42LL))) || p_25)), l_2639[1][3].f3))), 0L)) <= (**g_465)), p_24)) && (*g_1790))) ^ 0x835DL)) >= p_24) < 0UL) & p_21);
        }
        else
        { 
            const int32_t *l_2654 = &g_314[1].f0;
            struct S0 l_2667 = {0xB4L,0L,7UL,-1L};
            int64_t * const *l_2682 = &g_466;
            int32_t l_2683[2];
            int i;
            for (i = 0; i < 2; i++)
                l_2683[i] = 0xDE326A5FL;
            if ((*p_23))
                break;
            for (g_393 = 0; (g_393 == (-28)); --g_393)
            { 
                uint64_t l_2665[3];
                int8_t l_2679 = (-7L);
                int32_t l_2680[5];
                int64_t ***l_2692 = &g_465;
                int32_t ***l_2700 = &g_2572;
                int i;
                for (i = 0; i < 3; i++)
                    l_2665[i] = 0xA3D54E31ABA89B51LL;
                for (i = 0; i < 5; i++)
                    l_2680[i] = 3L;
                for (g_1041 = 0; (g_1041 <= 0); g_1041 += 1)
                { 
                    int i;
                    l_2654 = (l_2421[(g_1041 + 1)] = func_37(p_25, ((*l_2407) = p_22)));
                }
                if ((p_24 , (((((p_24 , (safe_sub_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((p_25 | ((void*)0 == &g_2025[0][5][3])), ((*g_466) |= (-1L)))), (((safe_div_func_uint8_t_u_u(((*l_2654) && 0x324FD013L), l_2665[0])) || 0x899B08FF499715AFLL) & 18446744073709551606UL))), (*l_2354))) || p_24) >= 0xC7C67BB5L) <= (*p_22)), p_21))) < 0L) < (-1L)) == 0x3E4455B0DE157F5ALL) && p_25)))
                { 
                    int16_t *l_2666 = &g_1280;
                    const int64_t *l_2671 = &g_348;
                    const int64_t **l_2670[5];
                    const int64_t ***l_2672 = (void*)0;
                    const int64_t ***l_2673 = &l_2670[2];
                    const int32_t ***l_2674 = &l_2420[1];
                    int32_t l_2681 = 0xDDC16E30L;
                    int8_t l_2684 = (-10L);
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2670[i] = &l_2671;
                    (*g_75) = func_37(((*l_2666) = 1L), (l_2667 , p_23));
                    (*l_2355) = ((l_2684 = ((*g_998) &= ((((((safe_sub_func_int32_t_s_s(((((*l_2673) = l_2670[2]) == ((((*p_22) = (l_2680[3] = ((l_2674 != l_2674) != ((**g_1328) = (((*l_2370) |= (0L != (safe_lshift_func_uint16_t_u_s((**g_1789), 2)))) & (((**g_1789) || ((safe_mul_func_int16_t_s_s((((*l_2654) , (**g_1328)) != p_25), l_2679)) | (*g_466))) | (*g_597))))))) , l_2681) , l_2682)) & (*p_23)), p_25)) && l_2679) , 0x578343A9A534AF3ELL) > (-7L)) & p_25) || l_2683[0]))) != 2UL);
                }
                else
                { 
                    int64_t l_2687[4] = {(-4L),(-4L),(-4L),(-4L)};
                    int32_t *l_2693[6] = {&l_2683[0],&l_2683[0],&l_2459.f0,&l_2683[0],&l_2683[0],&l_2459.f0};
                    int i;
                    (*g_998) = (((((safe_rshift_func_int8_t_s_s((*l_2654), 0)) ^ ((p_21 & l_2687[3]) > ((safe_mul_func_int16_t_s_s((p_25 <= (safe_lshift_func_int8_t_s_u(((**g_669) == &l_2558), 3))), 2UL)) | p_24))) < 0L) , l_2692) == (**g_2019));
                    l_2693[4] = p_22;
                }
                (*l_2353) = (safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(3L, (l_2700 != (g_2571 = &g_2572)))), ((safe_lshift_func_uint16_t_u_s((*g_1790), 6)) == p_24))) , (l_2710 = (safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_2665[0] || (~p_25)), p_24)), 0xE87EL)) || 3L), l_2679)))) | p_25) >= l_2680[3]), (*g_1790)));
                if ((*p_23))
                { 
                    (*l_2353) = (*p_23);
                }
                else
                { 
                    uint32_t l_2724 = 0x00FE3A83L;
                    (*g_998) = ((safe_sub_func_int64_t_s_s(p_24, 0x0BEE5BCE9F4DF749LL)) == (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((((0L & (safe_sub_func_uint8_t_u_u(((*g_597) = 255UL), (5UL > p_21)))) , (++(*l_2370))) , (safe_div_func_int64_t_s_s((l_2723[0][2] != (void*)0), l_2680[3]))), p_25)) || p_24), p_21)));
                    l_2680[1] |= ((*l_2654) < 1UL);
                    ++l_2724;
                    if ((*p_22))
                        continue;
                }
                for (g_178 = 4; (g_178 >= 0); g_178 -= 1)
                { 
                    int32_t *l_2727 = &g_2328;
                    (*l_2354) = 0x72D141EBL;
                    return l_2727;
                }
            }
            for (g_2328 = 0; (g_2328 <= 6); g_2328 += 1)
            { 
                struct S0 l_2732 = {0xDCL,0x1A778EED29153EAELL,255UL,0L};
                uint32_t *l_2735 = &l_2426;
                union U1 l_2783 = {0L};
            }
        }
        (*l_2354) = ((*l_2353) = (((*g_998) = ((*l_2355) &= (((safe_sub_func_uint64_t_u_u(((~(p_24 == (safe_mod_func_uint32_t_u_u(((**g_1789) ^ (+((l_2802 == (void*)0) <= (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((*g_597) = ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((&g_670 != ((*l_2812) = ((**l_2410) , ((*g_998) , l_2811[1][2])))) > 1L), (*l_2353))) != p_21), p_21)) && p_21)), p_21)), 0L))))), (*p_22))))) | (*l_2353)), 7L)) > p_24) < 0x1F832A2EL))) || (*p_22)));
        for (g_860 = 0; (g_860 != 34); g_860 = safe_add_func_int8_t_s_s(g_860, 1))
        { 
            (*g_668) = (void*)0;
            (*l_2353) &= 0xB76AB42EL;
        }
    }
    return (**l_2791);
}



static struct S0  func_26(uint32_t  p_27, int32_t * p_28, uint64_t  p_29, int32_t * p_30)
{ 
    int32_t *l_43 = &g_3;
    struct S0 l_1788 = {0UL,0L,0x71L,0xE80650BAL};
    int32_t l_1797 = 0x604D586DL;
    int32_t l_1798 = (-1L);
    int32_t l_1802 = 0x0940352DL;
    int32_t l_1804 = (-10L);
    int32_t l_1805[7] = {0x4452F045L,0x4452F045L,0x338E727FL,0x4452F045L,0x4452F045L,0x338E727FL,0x4452F045L};
    int32_t l_1827 = 1L;
    int8_t l_1866 = 0xC6L;
    int8_t l_1872 = (-5L);
    uint16_t l_1873 = 65535UL;
    union U1 *l_1895 = &g_314[1];
    uint32_t ***l_1900 = &g_1215[2][4][1];
    const int32_t l_1907 = 0x2B843414L;
    uint16_t **l_1908 = &g_1790;
    int8_t l_1911 = 9L;
    struct S0 **l_1917 = &g_1149[3][3][0];
    struct S0 l_1921 = {5UL,1L,255UL,0xA90CC33EL};
    int i;
    for (p_29 = 0; (p_29 <= 1); p_29 += 1)
    { 
        uint8_t l_58[6][5][6] = {{{1UL,0x5BL,0x03L,0x21L,252UL,0xDFL},{1UL,0x06L,0x49L,0x15L,0xC8L,1UL},{1UL,0x5AL,250UL,0x1EL,249UL,0UL},{0xF6L,2UL,0x8AL,1UL,0x74L,0xA2L},{0x06L,255UL,0x74L,0UL,8UL,0xBBL}},{{0x99L,0UL,0x1DL,0UL,250UL,1UL},{1UL,0xF6L,0xC8L,0x5AL,2UL,249UL},{0x6FL,0UL,1UL,0xD6L,0x06L,1UL},{0x92L,1UL,0x07L,1UL,0x92L,1UL},{0x5AL,0xF1L,2UL,0x0DL,0xF6L,0x99L}},{{0UL,0x7EL,0x6FL,0xF1L,255UL,0x99L},{0x09L,2UL,2UL,1UL,0x47L,1UL},{255UL,1UL,0x07L,0x13L,0x93L,1UL},{0xDDL,1UL,1UL,1UL,8UL,249UL},{255UL,0x09L,0xC8L,0x47L,0x13L,1UL}},{{0x3AL,9UL,0x1DL,8UL,246UL,0xBBL},{6UL,0xA2L,0x0DL,1UL,255UL,0x6FL},{0xCBL,255UL,1UL,0x5BL,1UL,1UL},{249UL,0x0DL,252UL,3UL,1UL,0xD2L},{252UL,0x47L,0xF6L,0x49L,1UL,1UL}},{{0x47L,255UL,0x10L,246UL,1UL,0xA2L},{0xD6L,0xE4L,255UL,1UL,0UL,2UL},{0x0DL,0xDDL,1UL,2UL,0x1DL,0x1DL},{2UL,254UL,254UL,2UL,6UL,255UL},{0x5BL,0xBBL,249UL,0x06L,0x09L,0x03L}},{{0xDAL,5UL,0x99L,0x8AL,0x09L,246UL},{0x93L,0xBBL,0UL,0x6FL,6UL,255UL},{249UL,254UL,0x21L,0xCBL,0x1DL,0x93L},{0x7EL,0xDDL,0x5BL,1UL,0UL,0x15L},{0x10L,0xE4L,2UL,0x60L,1UL,1UL}}};
        int32_t l_1799 = 0x9D55C430L;
        int32_t l_1800 = 0x58DE72EFL;
        int32_t l_1801 = 0x4AEAC33BL;
        int32_t l_1803[4][5][1] = {{{0L},{(-1L)},{0L},{(-1L)},{0L}},{{(-1L)},{0L},{(-1L)},{0L},{(-1L)}},{{0L},{(-1L)},{0L},{(-1L)},{0L}},{{(-1L)},{0L},{(-1L)},{0L},{(-1L)}}};
        uint8_t *l_1812 = &l_58[0][0][2];
        union U1 l_1861 = {0xD9B1109FL};
        uint64_t *l_1871 = &g_1395;
        struct S0 **l_1876[1];
        struct S0 * const *l_1878 = &g_1149[3][3][0];
        int32_t ***l_1886 = (void*)0;
        int32_t ****l_1885[7][5][1] = {{{&l_1886},{&l_1886},{(void*)0},{&l_1886},{&l_1886}},{{(void*)0},{&l_1886},{&l_1886},{(void*)0},{&l_1886}},{{&l_1886},{(void*)0},{&l_1886},{&l_1886},{(void*)0}},{{&l_1886},{&l_1886},{(void*)0},{&l_1886},{&l_1886}},{{(void*)0},{&l_1886},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{&l_1886},{(void*)0}},{{&l_1886},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        uint32_t ****l_1901 = &l_1900;
        struct S0 ****l_1904 = (void*)0;
        struct S0 ***l_1905 = (void*)0;
        uint64_t *l_1906 = &g_570;
        uint16_t **l_1909 = &g_1790;
        int32_t *l_1910[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1876[i] = &g_1149[1][2][0];
        for (p_27 = 0; (p_27 <= 1); p_27 += 1)
        { 
            int32_t *l_45 = &g_3;
            int32_t **l_44 = &l_45;
            uint16_t *l_1787[3];
            uint16_t * const *l_1786 = &l_1787[2];
            int32_t l_1793 = 0x9A02F7EEL;
            int32_t *l_1794 = &g_314[1].f0;
            int32_t l_1795 = 0L;
            int32_t *l_1796[4][2] = {{&g_616,(void*)0},{(void*)0,&g_616},{(void*)0,(void*)0},{&g_616,(void*)0}};
            int8_t l_1806 = 0x11L;
            uint16_t l_1807 = 65527UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1787[i] = &g_438;
            (*g_75) = func_33(p_28, ((g_32[p_29][p_27] , func_37((((((func_40(l_43, ((*l_44) = p_28)) <= (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_add_func_int64_t_s_s((l_58[5][3][3] > (safe_mul_func_int8_t_s_s(((*l_43) || 255UL), g_3))), 0xB8A80AA4B6D8D46DLL)) <= p_29) > g_3), 11)), p_29)) , 3L), g_10))) <= 0xC653L) , 0UL) , g_32[1][1]) == 9L), &g_3)) == (void*)0), (*l_43));
            (*g_75) = func_37((safe_mul_func_int16_t_s_s((0x97B72E8DL ^ 0xD80C4F8AL), (safe_add_func_int8_t_s_s(((l_1786 == (l_1788 , g_1789)) <= ((**l_1786) &= (*g_1790))), (safe_sub_func_uint64_t_u_u(((**l_44) , 0UL), p_29)))))), p_28);
            l_1807++;
        }
        for (g_170 = 0; (g_170 <= 1); g_170 += 1)
        { 
            uint8_t *l_1810 = (void*)0;
            uint8_t **l_1811 = (void*)0;
            int32_t l_1813 = 0xF94E153EL;
            int32_t l_1828 = 0xEB3A8164L;
            int32_t l_1829[4][7] = {{4L,0x185DC30BL,0x185DC30BL,4L,0x185DC30BL,0x185DC30BL,4L},{0x185DC30BL,4L,0x185DC30BL,0x185DC30BL,4L,0x185DC30BL,0x185DC30BL},{4L,4L,6L,4L,4L,6L,4L},{4L,0x185DC30BL,0x185DC30BL,4L,0x185DC30BL,0x185DC30BL,4L}};
            uint8_t l_1830[5];
            int64_t *l_1855 = (void*)0;
            int64_t ***l_1880 = &g_465;
            uint32_t *l_1883 = &g_1046[4];
            int i, j;
            for (i = 0; i < 5; i++)
                l_1830[i] = 254UL;
            l_1813 ^= (l_1810 != (l_1812 = &l_58[3][4][3]));
            for (l_1798 = 0; (l_1798 <= 2); l_1798 += 1)
            { 
                int32_t l_1814 = 0x953E5BC7L;
                int32_t l_1825 = 0x2AE8D470L;
                int32_t l_1826[4][1][1] = {{{0xF4143E93L}},{{7L}},{{0xF4143E93L}},{{7L}}};
                uint64_t l_1884 = 0x3D52C2379F1587EBLL;
                int i, j, k;
                if (l_1814)
                { 
                    uint32_t l_1815 = 18446744073709551614UL;
                    int32_t *l_1816 = (void*)0;
                    int32_t l_1817 = (-7L);
                    int32_t *l_1818 = &g_616;
                    int32_t *l_1819 = &l_1797;
                    int32_t *l_1820 = &l_1801;
                    int32_t *l_1821 = &l_1800;
                    int32_t *l_1822 = &l_1805[6];
                    int32_t *l_1823 = &l_1797;
                    int32_t *l_1824[3];
                    uint16_t *l_1856 = &g_438;
                    int8_t *l_1857[7];
                    int64_t *l_1858 = &g_1036;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1824[i] = &l_1800;
                    for (i = 0; i < 7; i++)
                        l_1857[i] = (void*)0;
                    if (l_1815)
                        break;
                    if ((*g_998))
                        continue;
                    l_1830[1]++;
                    (*l_1821) ^= (safe_div_func_int32_t_s_s((*p_28), l_1813));
                    (*l_1819) ^= ((((*l_1858) &= ((safe_mod_func_uint8_t_u_u(255UL, (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(((*l_1822) ^= (((safe_lshift_func_int8_t_s_u((-5L), p_29)) == 0x3703L) , (((l_1801 = (safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((*l_43) > ((safe_sub_func_uint16_t_u_u(((*l_1856) = (((((-1L) > (((((((*l_1821) ^= (safe_lshift_func_uint8_t_u_s(p_27, (*l_1818)))) <= (**g_75)) , l_1855) == (void*)0) | l_58[0][0][5]) & 0x4628L)) && (*p_28)) > (*l_43)) < (*g_1790))), 6L)) < p_27)), 4)), (*p_28))) > (*g_466)), 1))) > (-1L)) ^ 0x4EL))), l_1828)) <= p_29), 14)), 15)))) > (**g_1328))) & l_1830[1]) > (-1L));
                }
                else
                { 
                    int16_t *l_1867 = &g_178;
                    struct S0 ***l_1877 = &l_1876[0];
                    int32_t l_1879 = (-10L);
                    (*g_998) = ((safe_add_func_uint8_t_u_u((p_27 , ((*g_597) = (l_1861 , (((*g_466) | (safe_div_func_int16_t_s_s(((*l_1867) = (safe_rshift_func_uint16_t_u_s(l_1866, 5))), (~(l_1829[1][2] = (l_1829[1][2] <= ((safe_sub_func_uint16_t_u_u((((**g_669) = (void*)0) != (l_1871 = &p_29)), (**g_1789))) == l_1872))))))) , l_1873)))), p_29)) < 0x79F3889DL);
                    p_28 = func_37(((l_1799 ^= ((((((safe_lshift_func_uint16_t_u_u((((*l_1877) = l_1876[0]) != l_1878), 2)) < l_1879) < (l_1880 == &g_465)) , ((safe_lshift_func_int8_t_s_u(((**g_465) & (((l_1883 != p_30) ^ (*l_43)) | 65535UL)), 1)) && (**g_1328))) | l_1884) || 0x1869DA70L)) || l_1826[0][0][0]), p_30);
                }
            }
        }
        l_1911 |= (((l_1885[6][0][0] = l_1885[6][0][0]) == (void*)0) > ((*g_998) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u((((l_1801 = (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((p_29 , (((*g_668) = l_1895) == (((safe_mul_func_uint16_t_u_u(0x1AA3L, ((((((((*l_1906) = ((l_1905 = (g_1903 = ((((g_1902 = ((*l_1901) = ((safe_sub_func_int16_t_s_s((p_27 | (l_1788 , p_29)), (*l_43))) , l_1900))) == &g_1215[2][4][1]) , 0x77L) , (void*)0))) != &g_995)) <= l_1907) , (*l_43)) , l_1908) != l_1909) && p_29) & 1UL))) == p_27) , l_1895))), 12)), p_27))) | p_27) < 1L), (*l_43))), 4))));
        return l_1788;
    }
    for (g_1032 = 0; (g_1032 != (-6)); g_1032 = safe_sub_func_uint32_t_u_u(g_1032, 6))
    { 
        union U1 **l_1914 = &g_343;
        int32_t l_1920 = 0xAA857303L;
        if ((*l_43))
            break;
        (**g_75) = ((((&l_1895 == ((**g_666) = l_1914)) <= (safe_add_func_uint8_t_u_u(((p_27 || ((void*)0 == l_1917)) != (safe_lshift_func_int8_t_s_s((l_1920 , l_1920), 1))), 0x26L))) , p_27) != (*g_466));
    }
    return l_1921;
}



static int32_t * func_33(int32_t * p_34, int32_t  p_35, uint32_t  p_36)
{ 
    uint8_t l_1410 = 0UL;
    int32_t l_1412[5] = {0x5DC1DD34L,0x5DC1DD34L,0x5DC1DD34L,0x5DC1DD34L,0x5DC1DD34L};
    int32_t l_1413 = 0xAFDBFD3AL;
    int64_t ***l_1437[1];
    uint32_t ***l_1443 = &g_1328;
    int32_t l_1459 = 0x0EF686A5L;
    const int32_t *l_1490 = (void*)0;
    const int32_t **l_1489 = &l_1490;
    const int32_t ***l_1488 = &l_1489;
    int16_t l_1500 = 0xD34EL;
    uint8_t l_1518 = 0x0AL;
    const uint64_t ** const l_1525 = (void*)0;
    int8_t l_1567 = 0x3AL;
    uint16_t l_1620 = 0xC30CL;
    uint64_t l_1630 = 3UL;
    union U1 ***l_1654 = (void*)0;
    int16_t l_1677[3];
    const struct S0 *l_1710 = &g_203;
    const struct S0 **l_1709 = &l_1710;
    uint32_t l_1771 = 0x295A6A95L;
    int32_t *l_1774 = &g_203.f3;
    int32_t l_1775 = 0xE1A74F34L;
    int32_t *l_1776 = (void*)0;
    int32_t *l_1777[5] = {&g_394,&g_394,&g_394,&g_394,&g_394};
    uint64_t l_1778 = 1UL;
    int32_t *l_1779 = &l_1775;
    int32_t *l_1780 = &l_1412[4];
    int32_t *l_1781 = &g_616;
    int i;
    for (i = 0; i < 1; i++)
        l_1437[i] = &g_465;
    for (i = 0; i < 3; i++)
        l_1677[i] = 0xF8F3L;
    for (g_1367 = (-19); (g_1367 <= (-3)); g_1367 = safe_add_func_int32_t_s_s(g_1367, 2))
    { 
        union U1 ****l_1403 = &g_667;
        uint64_t *l_1411 = &g_1395;
        int32_t *l_1438[5] = {&g_46[0][3],&g_46[0][3],&g_46[0][3],&g_46[0][3],&g_46[0][3]};
        uint32_t l_1439 = 0x917CD7BDL;
        int i;
        (*g_75) = &p_35;
        for (g_1036 = 0; (g_1036 <= (-9)); g_1036 = safe_sub_func_int64_t_s_s(g_1036, 2))
        { 
            uint32_t l_1405 = 0x378C11D8L;
            int32_t l_1415 = 0x87D44DBAL;
            union U1 l_1436 = {1L};
            for (g_820 = 0; (g_820 <= 0); g_820 += 1)
            { 
                uint8_t *l_1404[6][2][1] = {{{&g_203.f0},{(void*)0}},{{&g_203.f0},{&g_1150.f0}},{{&g_1150.f0},{&g_203.f0}},{{(void*)0},{&g_203.f0}},{{&g_1150.f0},{&g_1150.f0}},{{&g_203.f0},{(void*)0}}};
                int32_t l_1414[6] = {1L,1L,(-10L),1L,1L,(-10L)};
                int i, j, k;
                (*g_75) = &p_35;
                (*g_76) |= (p_36 & (safe_sub_func_uint16_t_u_u((((((void*)0 != l_1403) == (l_1413 &= (((l_1405 ^= (*g_597)) || (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((l_1410 | 0x1FL) >= (l_1412[4] = ((l_1411 != (void*)0) & l_1410))), l_1405)), 3))) ^ 1L))) & l_1414[0]) > 7UL), g_46[0][1])));
                for (g_393 = 0; (g_393 >= 0); g_393 -= 1)
                { 
                    int32_t *l_1418 = &l_1415;
                    (*g_998) ^= (((*g_597)++) <= 0x4AL);
                    l_1418 = &p_35;
                    (*g_75) = (void*)0;
                }
                for (g_203.f3 = 0; (g_203.f3 >= 0); g_203.f3 -= 1)
                { 
                    int16_t *l_1419 = &g_178;
                    int32_t l_1426 = 0x25F24119L;
                    uint16_t *l_1427 = &g_438;
                    int i, j, k;
                    g_46[g_820][(g_820 + 1)] |= (g_926[0] && ((*l_1419) = p_36));
                    (*g_998) = (((*l_1427) = ((0xFDL >= ((0xCCL == ((safe_div_func_int32_t_s_s((g_1215[(g_820 + 1)][g_820][(g_203.f3 + 2)] == &g_1216), 1UL)) >= 255UL)) && (safe_mul_func_int8_t_s_s((g_46[g_820][(g_820 + 1)] |= (((**g_1328) , (void*)0) == (void*)0)), l_1426)))) > p_36)) < 65527UL);
                    if ((*p_34))
                        continue;
                    (*g_998) = (*p_34);
                    l_1412[4] = ((*g_597) > (((safe_rshift_func_int16_t_s_u(1L, (p_36 & (safe_mul_func_uint8_t_u_u(0x71L, ((((((-7L) == (((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*p_34), ((l_1436 , 0x02038D705B8737A9LL) & p_35))), 7)) , 0x60727F49C0419B84LL) ^ l_1436.f0) == (-2L)) < g_46[g_820][(g_820 + 2)])) , (-2L)) , l_1437[0]) != (void*)0) == l_1410)))))) >= p_35) && p_35));
                }
            }
        }
        l_1439--;
    }
    if ((*p_34))
    { 
        int32_t *l_1442 = &g_46[0][3];
        uint32_t ***l_1444 = (void*)0;
        uint32_t ****l_1445 = &g_1327[1][4][0];
        int32_t ** const *l_1505[5][7][6] = {{{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75}},{{&g_75,(void*)0,&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75}},{{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0,&g_75,(void*)0},{&g_75,(void*)0,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75,(void*)0,&g_75}},{{&g_75,(void*)0,&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75,(void*)0,(void*)0},{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0,&g_75,(void*)0}},{{&g_75,(void*)0,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75,(void*)0,&g_75},{&g_75,(void*)0,&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75,(void*)0,(void*)0},{(void*)0,&g_75,&g_75,&g_75,&g_75,&g_75}}};
        struct S0 l_1517 = {2UL,0xCCABD864AB861E41LL,1UL,1L};
        int32_t **l_1645[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1645[i] = (void*)0;
        (*g_75) = l_1442;
        (*l_1442) |= (l_1413 >= (l_1443 == ((*l_1445) = l_1444)));
        if ((safe_rshift_func_int8_t_s_s(((*l_1442) & (0xD81CL | (((safe_sub_func_uint64_t_u_u((**g_670), ((safe_add_func_int64_t_s_s((~(safe_mod_func_int64_t_s_s(l_1412[0], 0xBF2D71119301B135LL))), 18446744073709551615UL)) && ((((*p_34) || p_35) , 1L) , (*l_1442))))) || g_46[0][3]) < p_35))), p_36)))
        { 
            int16_t *l_1475 = (void*)0;
            int32_t l_1476[1][7];
            int16_t **l_1482 = &l_1475;
            int16_t ***l_1481 = &l_1482;
            int16_t *** const *l_1480 = &l_1481;
            int16_t *** const **l_1479 = &l_1480;
            uint64_t *l_1499[6][4][7] = {{{&g_151,&g_1395,(void*)0,&g_1395,&g_1395,&g_151,(void*)0},{&g_151,(void*)0,&g_1395,&g_151,&g_151,&g_151,&g_151},{&g_1395,&g_1395,&g_151,&g_1395,(void*)0,(void*)0,&g_1395},{&g_1395,(void*)0,(void*)0,&g_1395,(void*)0,&g_1395,(void*)0}},{{&g_1395,&g_151,(void*)0,&g_151,&g_151,&g_1395,&g_1395},{&g_151,(void*)0,&g_151,&g_1395,&g_1395,(void*)0,&g_1395},{&g_151,(void*)0,&g_151,&g_1395,&g_1395,(void*)0,&g_151},{&g_151,&g_151,&g_1395,(void*)0,(void*)0,&g_151,&g_1395}},{{&g_151,&g_151,&g_1395,&g_1395,&g_1395,&g_151,&g_151},{&g_1395,&g_1395,&g_151,&g_151,&g_151,&g_1395,&g_151},{&g_1395,&g_1395,&g_1395,&g_1395,(void*)0,&g_1395,(void*)0},{&g_151,&g_1395,&g_1395,&g_151,&g_151,(void*)0,&g_1395}},{{&g_151,&g_151,&g_1395,&g_1395,&g_1395,&g_1395,&g_151},{&g_1395,&g_1395,&g_151,&g_1395,(void*)0,&g_151,&g_1395},{&g_1395,&g_1395,&g_1395,&g_1395,&g_1395,&g_1395,(void*)0},{&g_1395,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_1395}},{{&g_1395,&g_1395,&g_151,&g_151,&g_1395,&g_1395,&g_151},{&g_1395,&g_1395,&g_1395,(void*)0,&g_1395,&g_1395,&g_1395},{(void*)0,&g_1395,&g_151,&g_1395,&g_151,&g_151,&g_1395},{&g_151,(void*)0,&g_151,(void*)0,&g_151,&g_1395,(void*)0}},{{(void*)0,&g_1395,&g_1395,&g_151,(void*)0,&g_151,&g_1395},{&g_1395,&g_1395,(void*)0,&g_151,(void*)0,&g_1395,&g_151},{&g_1395,&g_151,&g_151,(void*)0,&g_1395,(void*)0,&g_1395},{(void*)0,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1476[i][j] = (-1L);
            }
            (*l_1442) = (safe_mod_func_int32_t_s_s((((safe_div_func_int8_t_s_s(p_35, p_36)) && l_1459) != (safe_sub_func_int16_t_s_s(((*l_1442) , (safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(((*g_1329) != (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((g_178 = ((((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((***g_669) ^= (safe_mul_func_int16_t_s_s(0xC183L, g_1150.f2))), (**g_465))), 5)) >= 7UL) , (void*)0) != (void*)0)) | 0x9C73L), p_35)), 4))))), p_35))), l_1413))), 0xC962BDD0L));
            (*g_998) |= (((g_1314 = (((**g_1328) = l_1476[0][2]) , ((*g_597) ^= (safe_mul_func_int8_t_s_s((l_1476[0][6] <= l_1412[4]), (0x2677E374L > 1UL)))))) ^ l_1413) , 0xF32140F2L);
            g_1483 = l_1479;
            l_1412[3] = ((l_1488 != (void*)0) & (0x00DBL >= (safe_div_func_uint32_t_u_u(((***l_1443) = ((l_1459 ^= (safe_unary_minus_func_uint64_t_u(((*g_671) = (((*g_76) = (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((safe_unary_minus_func_int16_t_s(((*l_1442) < (*g_597)))) || 0xA57AB005L) & p_36) == p_35), l_1476[0][3])), (-10L)))) & (**g_1328)))))) | l_1500)), 1L))));
        }
        else
        { 
            int32_t ***l_1506[1];
            union U1 l_1531 = {0x535C2407L};
            int64_t **l_1586 = &g_466;
            uint32_t l_1602 = 0x3BC61DCFL;
            union U1 * const *l_1614[2];
            int32_t l_1615 = 0xA1BD6924L;
            int8_t *l_1629 = &g_1367;
            int i;
            for (i = 0; i < 1; i++)
                l_1506[i] = &g_75;
            for (i = 0; i < 2; i++)
                l_1614[i] = &g_313;
            (*g_998) &= (((safe_div_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u((l_1505[2][1][5] != l_1506[0]), (safe_sub_func_uint32_t_u_u(((((((*g_76) , ((**g_1328) = (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((***g_669) | ((((((p_35 < ((safe_div_func_int8_t_s_s((l_1517 , p_35), p_36)) ^ 18446744073709551615UL)) < (**g_1328)) == p_36) ^ p_36) & p_35) ^ 0UL)), 2)), 0xC339L)), l_1518)))) > p_35) & g_203.f1) ^ (*g_597)) , 0x7DAB00BDL), p_36)))) ^ (*g_597)), 0x0DAEE7713E3D49A6LL)) ^ (*p_34)) <= p_36);
            if (((--(*g_1329)) <= (safe_sub_func_int32_t_s_s((p_35 <= (((((((*g_669) = (*g_669)) != ((((0x7F521580610505B1LL == (safe_rshift_func_int16_t_s_s(0xF5D0L, 11))) && 0xF02C33F7B41DAF1CLL) || 0x99F69A44L) , l_1525)) != (*l_1442)) < 0x1CL) >= p_36) & 0x2A1F8C695EC4573DLL)), 0xC36DBD16L))))
            { 
                int32_t l_1530[7];
                const int32_t l_1535 = 0xC522EB05L;
                int32_t l_1536 = 0L;
                uint32_t ** const l_1542[1] = {&g_1329};
                int64_t **l_1583 = &g_466;
                struct S0 **l_1587 = &g_1149[0][1][0];
                int16_t *l_1588 = &g_1280;
                int16_t *l_1589[1];
                uint32_t ****l_1611 = &l_1443;
                const uint8_t **l_1613 = (void*)0;
                uint64_t l_1617 = 0x385D2B4D912296C1LL;
                int8_t *l_1628[6];
                int64_t ** const *l_1632 = &g_465;
                int64_t ** const ** const l_1631 = &l_1632;
                int i;
                for (i = 0; i < 7; i++)
                    l_1530[i] = 0xBAAC6C21L;
                for (i = 0; i < 1; i++)
                    l_1589[i] = &g_178;
                for (i = 0; i < 6; i++)
                    l_1628[i] = (void*)0;
                if (((*g_597) , (safe_div_func_uint64_t_u_u(((***g_669) = ((safe_div_func_int64_t_s_s((l_1536 = (((l_1530[4] |= 0L) & ((l_1531 , (p_36 || (+((safe_sub_func_uint16_t_u_u(0x7D5CL, 3UL)) < (((0x4043L >= l_1535) < (*p_34)) != l_1535))))) & p_35)) | 1UL)), l_1535)) , p_36)), p_36))))
                { 
                    uint8_t l_1537 = 255UL;
                    l_1537--;
                }
                else
                { 
                    uint64_t ** const *l_1546 = &g_670;
                    uint64_t ** const **l_1545 = &l_1546;
                    uint8_t l_1548 = 0xD6L;
                    struct S0 ***l_1549 = (void*)0;
                    struct S0 ****l_1550 = (void*)0;
                    struct S0 ***l_1552 = &g_995;
                    struct S0 ****l_1551 = &l_1552;
                    int8_t *l_1568 = &g_393;
                    (*g_998) &= (safe_lshift_func_int16_t_s_u(((p_36 <= ((((l_1542[0] == (*l_1443)) , ((safe_rshift_func_uint16_t_u_s(0x5041L, 9)) != ((l_1536 = (((**g_670) , (l_1545 == (((((*l_1442) ^= (((~0xC329L) , l_1548) , 0xD111F85CL)) != p_35) <= p_36) , (void*)0))) & p_35)) < p_36))) , 0xEA28EEAB0CAEE468LL) && 1UL)) == 0xA12E47F2L), p_35));
                    (*l_1551) = (l_1549 = &g_995);
                    (*l_1442) ^= (l_1535 ^ (((((safe_rshift_func_int8_t_s_s(((&g_1184[2][0][6] == ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((((*g_597) >= (0xCCD4E66FL & (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((g_832 &= (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_1567, ((*l_1568) = p_35))), (safe_rshift_func_int8_t_s_s((((((**g_1328) <= (*p_34)) > p_36) <= p_36) == p_35), 0))))), p_35)) == 0xE6L), 0)))) != (-1L)) >= 250UL), p_35)) , g_1150.f0), 65532UL)) , (void*)0)) , 0xB3L), 3)) < l_1548) < (*p_34)) | 0x49EEL) && p_36));
                }
                if (((l_1459 = (!(((safe_sub_func_int8_t_s_s((!((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_1412[0] |= ((*l_1588) = ((l_1583 != ((++(*g_1329)) , l_1586)) == ((void*)0 == l_1587)))), ((safe_lshift_func_int16_t_s_u((-1L), 4)) < ((((((**g_75) |= ((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((p_36 | ((safe_div_func_uint64_t_u_u(0xFD89BC1115EB173BLL, l_1536)) == l_1602)), 4)), 2)), g_616)) && l_1536), (-1L))) >= p_36)) || p_36) >= 0x57L) != 0xE39C4C9653B42A9ELL) > (*g_466))))), (*g_597))), 11)) & 0xD9L) | l_1530[6]), (*p_34))) && g_771)), (*g_597))) ^ (**g_465)) || p_35))) <= (*p_34)))
                { 
                    uint8_t **l_1612 = &g_597;
                    int32_t l_1616 = (-2L);
                    uint16_t *l_1641[6];
                    union U1 l_1642 = {-1L};
                    int32_t ***l_1646 = &l_1645[0];
                    int32_t * const *l_1648[3];
                    int32_t * const **l_1647 = &l_1648[1];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1641[i] = &l_1620;
                    for (i = 0; i < 3; i++)
                        l_1648[i] = (void*)0;
                    (*g_998) ^= ((((safe_add_func_int8_t_s_s((((*g_76) = (((*l_1588) |= ((((((safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((*g_671), (p_36 ^ ((l_1459 ^= p_36) == ((void*)0 != l_1611))))), 1UL)) > (&p_36 != &p_36)) , l_1612) != l_1613) , l_1614[1]) == (void*)0)) > 0xE28AL)) != l_1615), p_36)) < (*p_34)) <= (-9L)) | 5L);
                    ++l_1617;
                    ++l_1620;
                    (**l_1488) = func_37((((((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((((*g_1183) = l_1628[3]) == l_1629), (l_1630 | ((**g_465) = (l_1631 == (void*)0))))) >= ((*g_597) && (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_1367 = p_36), l_1616)), l_1530[4])), 0xC4L)))) != l_1616), p_35)))) != 0x21C3L) , (*g_671)) <= p_35) | p_35), &l_1530[4]);
                    (*l_1442) = (((safe_rshift_func_uint16_t_u_s((l_1536 = ((***l_1488) , 0xD77DL)), (l_1616 = ((((**l_1587) , ((l_1642 , (safe_mod_func_int32_t_s_s((((*l_1646) = l_1645[0]) == ((*l_1647) = (void*)0)), (*l_1490)))) | (*g_466))) , 0L) > l_1616)))) & p_36) | (***g_669));
                }
                else
                { 
                    int32_t *l_1649[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1649[i] = &g_314[1].f0;
                    return l_1649[1];
                }
                return (*g_75);
            }
            else
            { 
                (*l_1442) = (*p_34);
                for (g_393 = 17; (g_393 < 26); g_393 = safe_add_func_int64_t_s_s(g_393, 3))
                { 
                    return (*g_75);
                }
            }
        }
    }
    else
    { 
        uint16_t l_1652[2];
        int32_t *l_1653 = &g_3;
        struct S0 l_1676 = {0x52L,-1L,0x46L,0x96B7E3E6L};
        int64_t l_1724 = 6L;
        int32_t l_1732 = 0x0277D278L;
        int32_t l_1733 = 0x59DFD4D7L;
        int32_t l_1734 = (-1L);
        int32_t l_1735 = (-6L);
        int32_t l_1736 = 0x1D38BDA4L;
        int32_t l_1737 = 0L;
        int32_t l_1738 = 0x8CA16BD6L;
        int i;
        for (i = 0; i < 2; i++)
            l_1652[i] = 0x160CL;
lbl_1725:
        (*g_75) = func_37(l_1652[0], l_1653);
        for (g_178 = 0; (g_178 >= 0); g_178 -= 1)
        { 
            union U1 ***l_1655 = (void*)0;
            int16_t *l_1668 = (void*)0;
            int16_t *l_1669 = &g_1280;
            int32_t * const l_1681 = &g_833;
            int i;
            if (((l_1654 != l_1655) | (safe_sub_func_uint8_t_u_u(l_1652[(g_178 + 1)], (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s((((*l_1669) = (safe_sub_func_int64_t_s_s((p_35 < ((l_1652[(g_178 + 1)] , (safe_add_func_int64_t_s_s((4294967295UL | 0x21106E11L), p_35))) , l_1652[(g_178 + 1)])), 0L))) , (-6L)), 1UL)), 0x0EF00588L)), (*g_597)))))))
            { 
                for (g_170 = 0; (g_170 <= 0); g_170 += 1)
                { 
                    int i, j;
                    if (g_46[g_178][g_178])
                        break;
                    (*l_1489) = &g_46[g_178][(g_178 + 4)];
                    if (g_46[g_170][(g_170 + 3)])
                        break;
                }
                if ((*p_34))
                    continue;
                if ((**g_75))
                    continue;
                for (g_438 = 0; (g_438 >= 12); g_438++)
                { 
                    int64_t l_1674 = (-1L);
                    uint16_t *l_1675 = &l_1620;
                    int32_t *l_1680[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1680[i] = &g_46[0][3];
                    (*g_998) = (safe_add_func_uint16_t_u_u((((*l_1653) | l_1674) , ((*l_1675) = g_1036)), (l_1674 , ((l_1674 ^ (l_1676 , (((((*p_34) , l_1677[0]) > 0xC448CC6B23FCC484LL) > p_35) > p_35))) == (*g_597)))));
                    (*g_998) = (g_1150.f3 | ((*g_597) <= 255UL));
                    return l_1680[0];
                }
            }
            else
            { 
                struct S0 * const *l_1684 = &g_1149[1][4][0];
                struct S0 * const **l_1683 = &l_1684;
                struct S0 * const ***l_1685 = &l_1683;
                int32_t *l_1686 = &l_1413;
                if ((*p_34))
                    break;
                (*l_1489) = &p_35;
                for (g_1395 = 0; (g_1395 <= 0); g_1395 += 1)
                { 
                    int32_t **l_1682 = &g_998;
                    int i;
                    if (g_1046[(g_178 + 1)])
                        break;
                    (*l_1489) = &p_35;
                    if ((*p_34))
                        continue;
                    (*l_1682) = l_1681;
                }
                (*l_1685) = l_1683;
                (*l_1489) = func_37((0xA85716D5L && p_35), l_1686);
            }
        }
        for (p_36 = 17; (p_36 > 53); p_36++)
        { 
            uint16_t *l_1693 = &l_1652[1];
            uint16_t *l_1696 = &g_832;
            int32_t l_1715 = 0xEC09A853L;
            int32_t l_1731[5] = {1L,1L,1L,1L,1L};
            uint32_t l_1749 = 0x9E88F142L;
            int i;
            if (((safe_unary_minus_func_int32_t_s((*p_34))) <= (safe_add_func_uint16_t_u_u((!(((((*l_1696) = (--(*l_1693))) || (safe_lshift_func_int8_t_s_u((((safe_add_func_int64_t_s_s((((((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((void*)0 == l_1709), ((+(safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(l_1715)), ((p_35 & (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(248UL, ((l_1724 <= 0xCCL) ^ 0x186FL))) != 0x270B8E4988CC79E3LL), l_1715)) < l_1715), 0x96L)) > g_820), 13))) ^ (**g_670))))) >= l_1715))) && p_35), 0UL)) , (*g_597)) , 2L) == p_36) == (*g_76)), 0xE22DL)), p_36)) , 18446744073709551615UL) ^ (*g_466)) & 0x013CL) <= 4294967293UL), (-7L))) == p_36) < 0x5CEEL), (*g_597)))) || (*p_34)) != (-1L))), p_36))))
            { 
                int32_t *l_1726 = (void*)0;
                int32_t *l_1727 = &g_46[0][3];
                int32_t l_1728[2][3] = {{0xF1BDD0EAL,0xF1BDD0EAL,0L},{0xF1BDD0EAL,0xF1BDD0EAL,0L}};
                int32_t *l_1729 = (void*)0;
                int32_t *l_1730[1];
                uint32_t l_1739 = 6UL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1730[i] = &g_46[0][3];
                for (g_664 = 1; (g_664 >= 0); g_664 -= 1)
                { 
                    int i;
                    l_1412[4] = (p_35 <= 0x3AL);
                    (**l_1488) = ((*l_1710) , ((*g_75) = &p_35));
                    l_1412[0] |= (**g_75);
                    if ((*p_34))
                        continue;
                    if (g_348)
                        goto lbl_1725;
                }
                (*g_75) = &p_35;
                if ((*p_34))
                    break;
                --l_1739;
            }
            else
            { 
                int8_t l_1742 = 1L;
                int32_t l_1743 = 0x7E4ED2D6L;
                int32_t *l_1744 = (void*)0;
                int32_t l_1745 = 0x29211FF4L;
                int32_t *l_1746 = &l_1412[2];
                int32_t *l_1747 = &g_833;
                int32_t *l_1748[6][2][6] = {{{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0},{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0}},{{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0},{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0}},{{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0},{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0}},{{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0},{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0}},{{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0},{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0}},{{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0},{&l_1736,&l_1736,(void*)0,&l_1736,&l_1736,(void*)0}}};
                int i, j, k;
                --l_1749;
            }
        }
    }
    (*l_1489) = &p_35;
    l_1778 ^= ((((safe_rshift_func_uint8_t_u_s(((**l_1489) >= (safe_div_func_uint32_t_u_u(p_36, (+((l_1775 = ((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((0xF3826541L && (l_1459 = (l_1413 = (safe_add_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((((safe_div_func_uint8_t_u_u(((*g_597) , 0UL), ((((safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_1771 = 0xE74AF985L), ((l_1412[1] = (((*l_1774) = (safe_sub_func_int8_t_s_s(((0L == (***l_1488)) , 0xCAL), p_35))) , 8L)) , (*p_34)))), p_35)) < 0x9EL) && 0xF3BABE04F3D64190LL) ^ (*g_998)))) <= 18446744073709551615UL) || p_35), 0xD4F7E53DC9AA6363LL)) , (-1L)), (*l_1490)))))), p_35)), (***l_1488))) >= 0x8940FC6462AF5795LL)) && g_46[0][3]))))), (**l_1489))) < (*l_1490)) | p_36) , (***l_1488));
    return l_1781;
}



static int32_t * func_37(int16_t  p_38, int32_t * p_39)
{ 
    int32_t *l_63 = &g_46[0][3];
    int32_t l_78 = 0xF678D197L;
    int32_t l_81 = (-1L);
    int32_t l_84 = 8L;
    int32_t l_91 = 6L;
    int32_t l_92 = (-8L);
    int32_t l_93 = 0xD1A43B2DL;
    int32_t l_94[4];
    int16_t * const l_207 = &g_178;
    int16_t l_259 = 0xAFA9L;
    int16_t l_272 = 0x7652L;
    struct S0 *l_367[2];
    uint32_t l_382 = 18446744073709551615UL;
    uint32_t l_408 = 0x41F1FB9AL;
    int8_t l_451 = 1L;
    uint64_t *l_478 = (void*)0;
    uint64_t l_487 = 0xC26437566EFB920FLL;
    union U1 *l_497 = &g_314[1];
    union U1 **l_525[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    union U1 ***l_524 = &l_525[1];
    uint32_t l_575 = 0xF6A7C823L;
    int32_t l_632 = (-5L);
    int16_t **l_650 = (void*)0;
    int16_t ** const *l_649 = &l_650;
    const int64_t **l_686[1];
    struct S0 *l_867 = &g_203;
    uint32_t l_897 = 0x4112F215L;
    uint16_t l_939 = 0x8ECEL;
    const int32_t l_942 = (-8L);
    uint8_t l_1072 = 0x03L;
    int8_t l_1094 = 0xDFL;
    uint64_t l_1096 = 18446744073709551615UL;
    int16_t l_1156 = 6L;
    int32_t l_1157 = 0x25FF3DE1L;
    uint16_t l_1158 = 0UL;
    uint32_t *l_1162[1];
    uint32_t **l_1161 = &l_1162[0];
    const int32_t l_1173 = 0x27A7237EL;
    uint32_t l_1250 = 1UL;
    int64_t **l_1276 = (void*)0;
    uint32_t * const l_1296 = &l_1250;
    uint32_t * const *l_1295 = &l_1296;
    int64_t ***l_1363 = &l_1276;
    int64_t ****l_1362 = &l_1363;
    uint16_t l_1392 = 0xCAB7L;
    int i;
    for (i = 0; i < 4; i++)
        l_94[i] = (-4L);
    for (i = 0; i < 2; i++)
        l_367[i] = &g_203;
    for (i = 0; i < 1; i++)
        l_686[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1162[i] = &g_1041;
    return p_39;
}



static int16_t  func_40(int32_t * p_41, int32_t * p_42)
{ 
    uint64_t l_49 = 0xFFFF9752EE8B7203LL;
    for (g_46[0][3] = 27; (g_46[0][3] != (-14)); --g_46[0][3])
    { 
        return g_3;
    }
    g_46[0][3] ^= (g_3 != g_32[0][2]);
    return l_49;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_46[i][j], "g_46[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_314[i].f0, "g_314[i].f0", print_hash_value);

    }
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_860, "g_860", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_926[i], "g_926[i]", print_hash_value);

    }
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1046[i], "g_1046[i]", print_hash_value);

    }
    transparent_crc(g_1150.f0, "g_1150.f0", print_hash_value);
    transparent_crc(g_1150.f1, "g_1150.f1", print_hash_value);
    transparent_crc(g_1150.f2, "g_1150.f2", print_hash_value);
    transparent_crc(g_1150.f3, "g_1150.f3", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    transparent_crc(g_1314, "g_1314", print_hash_value);
    transparent_crc(g_1367, "g_1367", print_hash_value);
    transparent_crc(g_1395, "g_1395", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1941[i][j], "g_1941[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2093, "g_2093", print_hash_value);
    transparent_crc(g_2116, "g_2116", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2247[i], "g_2247[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2260[i], "g_2260[i]", print_hash_value);

    }
    transparent_crc(g_2328, "g_2328", print_hash_value);
    transparent_crc(g_2415.f0, "g_2415.f0", print_hash_value);
    transparent_crc(g_2415.f1, "g_2415.f1", print_hash_value);
    transparent_crc(g_2415.f2, "g_2415.f2", print_hash_value);
    transparent_crc(g_2415.f3, "g_2415.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2908[i][j].f0, "g_2908[i][j].f0", print_hash_value);
            transparent_crc(g_2908[i][j].f1, "g_2908[i][j].f1", print_hash_value);
            transparent_crc(g_2908[i][j].f2, "g_2908[i][j].f2", print_hash_value);
            transparent_crc(g_2908[i][j].f3, "g_2908[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_3201.f0, "g_3201.f0", print_hash_value);
    transparent_crc(g_3201.f1, "g_3201.f1", print_hash_value);
    transparent_crc(g_3201.f2, "g_3201.f2", print_hash_value);
    transparent_crc(g_3201.f3, "g_3201.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3219[i].f0, "g_3219[i].f0", print_hash_value);
        transparent_crc(g_3219[i].f1, "g_3219[i].f1", print_hash_value);
        transparent_crc(g_3219[i].f2, "g_3219[i].f2", print_hash_value);
        transparent_crc(g_3219[i].f3, "g_3219[i].f3", print_hash_value);

    }
    transparent_crc(g_3389, "g_3389", print_hash_value);
    transparent_crc(g_3549, "g_3549", print_hash_value);
    transparent_crc(g_3613, "g_3613", print_hash_value);
    transparent_crc(g_3799.f0, "g_3799.f0", print_hash_value);
    transparent_crc(g_3835, "g_3835", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
