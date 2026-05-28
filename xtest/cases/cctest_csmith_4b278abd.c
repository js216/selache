// SPDX-License-Identifier: MIT
// cctest_csmith_4b278abd.c --- cctest case csmith_4b278abd (csmith seed 1260882621)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbad02ee */
/* @exp_ticks 0x3f5f */

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

// Options:   -s 1260882621 -o /tmp/csmith_gen_05g4vs0_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   const int8_t  f1;
   int64_t  f2;
   uint16_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint8_t  f0;
   int8_t  f1;
   const uint16_t  f2;
   int32_t  f3;
   uint16_t  f4;
   const struct S0  f5;
};
#pragma pack(pop)

struct S2 {
   uint64_t  f0;
   struct S1  f1;
   int16_t  f2;
   uint16_t  f3;
};

union U3 {
   int16_t  f0;
   int8_t  f1;
   int16_t  f2;
};

union U4 {
   uint32_t  f0;
   uint64_t  f1;
   int16_t  f2;
   uint8_t  f3;
};


static int32_t g_2[1] = {0xAEB59008L};
static int32_t g_6 = 1L;
static int32_t g_7[3] = {(-1L),(-1L),(-1L)};
static int32_t g_8 = 0L;
static int32_t g_9[2][2][5] = {{{(-4L),0xE0CD9796L,0x968CB667L,0xDFFBE584L,0xDFFBE584L},{1L,0xE0CD9796L,1L,6L,0xE0CD9796L}},{{0xDFFBE584L,0L,6L,0xDFFBE584L,6L},{0xDFFBE584L,0xDFFBE584L,0x968CB667L,0xE0CD9796L,(-4L)}}};
static uint8_t g_11 = 1UL;
static union U3 g_49 = {0x1144L};
static struct S0 g_72 = {0xA1B12C121480219ELL,0xC3L,0x263C45F469F5ED80LL,0x979DL};
static int32_t g_73 = 5L;
static int8_t g_74 = 0xB6L;
static int16_t g_86 = 0x1B60L;
static uint32_t g_96 = 0xD5BE42EEL;
static uint64_t g_188 = 0xE11BCF49901D41C1LL;
static struct S1 g_203 = {248UL,1L,0x69E8L,-5L,0x4BA7L,{-1L,0x34L,0x86FE4CD9D4D48139LL,0xAC89L}};
static struct S2 g_247 = {0x15A87531F4ECE1DELL,{0UL,0x52L,0x7419L,0xDA72D44CL,1UL,{4L,0x34L,0x815C885CAF21F3CBLL,0x744FL}},-8L,0xB046L};
static union U4 g_251 = {5UL};
static int16_t g_340 = 1L;



static struct S1  func_1(void);
static int64_t  func_33(uint8_t  p_34, union U4  p_35, int64_t  p_36);
static struct S2  func_37(int32_t  p_38);
static int32_t  func_43(int32_t  p_44);




static struct S1  func_1(void)
{ 
    struct S1 l_14 = {0x5DL,0xC7L,65535UL,0x90E69CD1L,0xCD95L,{-1L,0x5FL,1L,1UL}};
    int32_t l_15 = 0x1E758769L;
    int32_t l_19 = 0x64F89C89L;
    int32_t l_20 = (-10L);
    int32_t l_23[2][2][5];
    int16_t l_24 = 0x7F0DL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
                l_23[i][j][k] = 0x8918CB0BL;
        }
    }
    for (g_2[0] = 2; (g_2[0] == 25); g_2[0] = safe_add_func_int16_t_s_s(g_2[0], 4))
    { 
        union U3 l_5[1] = {{0xD39CL}};
        int32_t l_10[5][3][1] = {{{(-6L)},{(-6L)},{0x42C512DCL}},{{(-6L)},{(-6L)},{0x42C512DCL}},{{(-6L)},{(-6L)},{0x42C512DCL}},{{(-6L)},{(-6L)},{0x42C512DCL}},{{(-6L)},{(-6L)},{0x42C512DCL}}};
        int32_t l_379 = 1L;
        int i, j, k;
        for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
        { 
            for (g_7[0] = 0; (g_7[0] >= 0); g_7[0] -= 1)
            { 
                ++g_11;
            }
            g_7[0] |= 0x51C8B9BAL;
            for (g_11 = 0; (g_11 <= 0); g_11 += 1)
            { 
                return l_14;
            }
        }
        l_15 = l_14.f1;
        if ((safe_lshift_func_int16_t_s_u(0x0F18L, (0x0E26A25AL | g_2[0]))))
        { 
            int8_t l_18 = 0xFDL;
            int32_t l_21[4];
            int32_t l_22 = (-1L);
            uint64_t l_25 = 0UL;
            int i;
            for (i = 0; i < 4; i++)
                l_21[i] = (-9L);
            l_25++;
            for (l_22 = 1; (l_22 >= 0); l_22 -= 1)
            { 
                int32_t l_50 = 1L;
                int32_t l_380 = (-7L);
                int i;
                g_7[l_22] = (18446744073709551608UL > (((safe_rshift_func_int16_t_s_u((((l_379 |= (!((safe_lshift_func_int8_t_s_s(g_11, (((func_33(((func_37((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(func_43((safe_mul_func_int8_t_s_s((l_50 = ((safe_mod_func_int32_t_s_s((g_49 , l_10[3][0][0]), l_50)) && g_7[2])), l_25))), l_15)) < g_72.f1), 5))) , g_74) && g_72.f2), g_251, g_247.f1.f3) != 0xCB74FC86CB785FBDLL) | l_10[3][0][0]) , g_188))) , (-1L)))) , g_9[1][0][0]) != g_203.f5.f0), 10)) & g_2[0]) ^ g_247.f1.f3));
                l_15 &= (l_380 | 0xA861F50DL);
                g_7[l_22] = ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((0xC954L & (g_86 = (1UL & (l_50 == (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_247.f2 | g_73), l_379)), g_203.f5.f1)))))), g_247.f0)), 0x26L)) | 0x321DL);
            }
        }
        else
        { 
            int64_t l_389 = (-6L);
            if (l_389)
                break;
        }
    }
    g_7[0] |= l_14.f5.f0;
    return g_203;
}



static int64_t  func_33(uint8_t  p_34, union U4  p_35, int64_t  p_36)
{ 
    uint64_t l_252 = 18446744073709551608UL;
    int32_t l_289 = 2L;
    int32_t l_290 = 0xF4D41489L;
    int32_t l_292 = 0xF89C2A5CL;
    int32_t l_294[2];
    int8_t l_355[3];
    const uint32_t l_366 = 4UL;
    int i;
    for (i = 0; i < 2; i++)
        l_294[i] = 0x2FE3639EL;
    for (i = 0; i < 3; i++)
        l_355[i] = 0xEEL;
    if ((g_203.f3 >= (((0xEC5B960CL == p_35.f0) <= (l_252 = 0x42ADL)) && p_35.f2)))
    { 
        uint8_t l_260 = 252UL;
        int32_t l_288 = 0L;
        int32_t l_291 = 0L;
        int32_t l_293 = 1L;
        int32_t l_295 = 0xC534AEA6L;
        int32_t l_296 = 0x4447B229L;
        int32_t l_297[3];
        uint32_t l_298 = 18446744073709551610UL;
        int i;
        for (i = 0; i < 3; i++)
            l_297[i] = 1L;
        for (g_49.f1 = 0; (g_49.f1 > (-3)); g_49.f1 = safe_sub_func_int16_t_s_s(g_49.f1, 7))
        { 
            uint16_t l_257 = 0UL;
            int16_t l_261 = 1L;
            int32_t l_274[4][2];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_274[i][j] = 1L;
            }
            if (((safe_div_func_int64_t_s_s(l_257, l_252)) && (((((safe_rshift_func_uint16_t_u_s(l_260, 10)) != (l_261 = p_35.f2)) > 0x1986E9DE6DB097B4LL) | g_203.f5.f2) ^ l_252)))
            { 
                if (p_35.f2)
                    break;
                return l_252;
            }
            else
            { 
                int64_t l_275 = 0x078B6D9E19FCC667LL;
                int32_t l_276 = (-1L);
                int32_t l_277 = 0xA1B0B828L;
                int32_t l_278 = (-5L);
                int32_t l_279 = (-10L);
                int32_t l_280 = (-9L);
                uint64_t l_281 = 0UL;
                l_275 &= ((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(((~0x5D527B39L) || (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(248UL, (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((l_274[2][0] > 7L))), l_261)))), 4))), g_247.f1.f5.f2)) & 0xC97CL), p_35.f3)) & (-1L));
                ++l_281;
            }
        }
        for (g_49.f1 = 21; (g_49.f1 == (-22)); --g_49.f1)
        { 
            for (g_203.f4 = 0; (g_203.f4 <= 27); g_203.f4++)
            { 
                return g_247.f1.f5.f3;
            }
        }
        l_298--;
    }
    else
    { 
        int16_t l_301 = 8L;
        uint16_t l_316 = 1UL;
        union U3 l_378 = {-5L};
lbl_367:
        l_301 = g_203.f5.f0;
        l_316 ^= (p_36 & (l_289 = ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((((g_247.f2 | ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((1L & (safe_add_func_int16_t_s_s(l_292, l_301))), l_290)) <= g_73), 1L)), 7UL)), 1UL)) != 0UL)) == 18446744073709551615UL) , 0x5146581DE73E263CLL), 0x64DC45FFFDE4E165LL)), g_247.f2)) , 7L)));
        for (g_247.f2 = 0; (g_247.f2 <= 2); g_247.f2 += 1)
        { 
            int32_t l_339 = 4L;
            int i;
            if ((safe_lshift_func_int8_t_s_s((((p_35.f1 = (safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_7[g_247.f2], (safe_mod_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((g_340 = (safe_div_func_int32_t_s_s((l_339 = (g_6 = ((g_7[g_247.f2] < (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((p_34 >= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((l_292 |= l_252), 5)), g_7[g_247.f2]))), 0)), p_34)) || p_36) && 0x20415C69L)) <= p_35.f2))), l_301))) | 4294967295UL), 5L)) | g_203.f2), 0x79L)) | p_36) | p_35.f2), p_35.f3)))), 13))) | l_316) < 1L), g_188)))
            { 
                uint32_t l_354[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_354[i] = 18446744073709551606UL;
                l_355[2] |= (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((-1L), (!((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(1L, (l_354[0] , (p_35.f3 > p_35.f2)))) < 0xC9904DF4L), g_247.f1.f4)) & l_354[1]), l_289)) <= 0xABL)))) & 5L), 12)), p_36));
                g_7[g_247.f2] = (0xAB962ED9L != (safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(l_316, ((g_203.f5.f2 >= (safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((9L && g_73), l_366)) == l_354[0]), g_247.f1.f5.f3)) <= p_36), g_247.f1.f4))) & p_35.f1))) & g_74), 7)));
                if (g_247.f1.f0)
                    continue;
            }
            else
            { 
                l_292 = g_203.f0;
                if (g_49.f1)
                    goto lbl_367;
                l_339 = g_251.f2;
            }
            l_290 ^= ((safe_lshift_func_int8_t_s_s((((safe_add_func_int64_t_s_s(p_35.f0, (safe_mul_func_int8_t_s_s(0L, (safe_mul_func_int16_t_s_s(0x8262L, ((safe_mul_func_uint8_t_u_u((l_378 , g_247.f1.f1), g_203.f3)) , p_36))))))) >= g_9[1][0][4]) <= g_203.f5.f2), l_294[1])) == 0xA1L);
        }
    }
    return g_203.f0;
}



static struct S2  func_37(int32_t  p_38)
{ 
    int32_t l_211 = 0x5594B541L;
    int32_t l_212 = (-10L);
    int32_t l_214 = 0xF2D8B73BL;
    struct S2 l_250 = {4UL,{249UL,-4L,0xE089L,0x25B4D96CL,65535UL,{-1L,0xCDL,-1L,1UL}},-6L,0UL};
    for (g_6 = 0; (g_6 != 15); ++g_6)
    { 
        int32_t l_209 = 0xAC475FA8L;
        int32_t l_213[3];
        uint32_t l_215 = 0xFAC58A1BL;
        struct S2 l_241 = {18446744073709551615UL,{0x64L,0L,0x81FCL,0x0E664CF5L,65535UL,{0xB2B27AC2C4E39F24LL,-8L,0x36BB701C6AC34F89LL,0xEB01L}},0x85A2L,1UL};
        int i;
        for (i = 0; i < 3; i++)
            l_213[i] = 0xAF875AC5L;
        if (g_96)
        { 
            uint8_t l_199 = 0x2FL;
            int32_t l_200 = (-2L);
            struct S1 l_206 = {0x5CL,6L,65535UL,0xEB1B7E53L,9UL,{7L,0xD7L,-1L,0UL}};
            if (((g_96--) , ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((l_200 = l_199), g_6)), ((p_38 , p_38) ^ l_199))) <= 0xC6952951L)))
            { 
                uint32_t l_210 = 18446744073709551611UL;
                g_7[0] &= (safe_sub_func_int64_t_s_s((-5L), p_38));
                l_210 = (g_203 , (((safe_rshift_func_int8_t_s_s((((p_38 <= (g_72.f3 &= (l_206 , ((safe_add_func_int32_t_s_s((-5L), l_209)) | 0x05L)))) == g_72.f2) | p_38), 4)) < g_203.f5.f1) > g_203.f2));
            }
            else
            { 
                l_215--;
            }
        }
        else
        { 
            uint8_t l_229 = 0UL;
            int32_t l_230 = (-1L);
            struct S0 l_235 = {0x46BD8380ACD65F59LL,0x45L,0xE7B68137329BCD8DLL,0xF1B2L};
            for (g_203.f3 = 24; (g_203.f3 != (-23)); --g_203.f3)
            { 
                int16_t l_220 = 0x4284L;
                l_220 = l_212;
            }
            for (l_212 = 0; (l_212 == 9); l_212 = safe_add_func_uint8_t_u_u(l_212, 2))
            { 
                uint8_t l_225 = 1UL;
                int32_t l_226 = 0x283C7005L;
                struct S0 l_240 = {-7L,1L,1L,0UL};
                l_213[1] = (((safe_mul_func_int16_t_s_s((l_226 |= (l_225 != (l_211 &= (g_203.f5.f0 > p_38)))), (l_214 &= ((safe_mod_func_uint16_t_u_u((((g_72.f2 > 0x0178F1F4L) | 1L) < l_229), 65531UL)) || 0xC64479F0L)))) > p_38) ^ p_38);
                l_230 = p_38;
                l_230 = ((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((l_225 >= (l_235 , ((safe_lshift_func_int8_t_s_s((g_49.f1 = ((safe_div_func_uint8_t_u_u(((p_38 && ((((l_240 , l_241) , 0x5C7476B03F70A1B2LL) || l_240.f3) > p_38)) , l_211), l_235.f3)) && l_235.f1)), g_203.f1)) >= l_212))), 0L)) > 0xF081FC442DDCB824LL), 4294967289UL)) | g_203.f4);
            }
        }
        g_7[0] = (safe_sub_func_int8_t_s_s((l_213[1] = 0x05L), (safe_unary_minus_func_uint8_t_u((safe_div_func_uint8_t_u_u(((g_247 , ((((safe_mul_func_int16_t_s_s((-2L), l_212)) <= l_214) || 3L) <= l_211)) & 1L), p_38))))));
    }
    return l_250;
}



static int32_t  func_43(int32_t  p_44)
{ 
    uint32_t l_60 = 1UL;
    int32_t l_61 = 0x84459954L;
    int32_t l_102 = 9L;
    int32_t l_103 = 0xF5CE3371L;
    int32_t l_104 = (-1L);
    int32_t l_105 = (-2L);
    int32_t l_106 = (-1L);
    uint64_t l_146 = 18446744073709551613UL;
    int32_t l_164 = 0x104541D1L;
    uint8_t l_165 = 0x02L;
    int64_t l_169[3][4] = {{(-1L),(-1L),0x7E322D52091D0556LL,(-1L)},{(-1L),(-1L),0x7E322D52091D0556LL,(-1L)},{0x7E322D52091D0556LL,(-1L),0x7E322D52091D0556LL,0x7E322D52091D0556LL}};
    int32_t l_173 = 0xC644E423L;
    int32_t l_178 = 0xBD1EA290L;
    int32_t l_182[2][4];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_182[i][j] = (-3L);
    }
    for (g_49.f0 = 0; (g_49.f0 == 14); g_49.f0 = safe_add_func_uint8_t_u_u(g_49.f0, 1))
    { 
        int8_t l_57[1];
        int i;
        for (i = 0; i < 1; i++)
            l_57[i] = 0L;
        l_61 = (safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((p_44 < ((l_57[0] < (safe_add_func_uint8_t_u_u(((g_49.f0 <= g_9[1][0][0]) < 0xB36276A26825732ELL), 0xE9L))) & g_7[0])) <= g_7[0]) | 65535UL), l_57[0])), l_60));
    }
    for (p_44 = 13; (p_44 != 22); p_44 = safe_add_func_uint64_t_u_u(p_44, 3))
    { 
        int64_t l_64 = 1L;
        const struct S0 l_71 = {0xD6BBCA57EF93BB08LL,0xA7L,0xD71D57AD53B93098LL,0xC8CFL};
        int32_t l_75 = 0xCFB6DD93L;
        int32_t l_83[2];
        int i;
        for (i = 0; i < 2; i++)
            l_83[i] = 0x557241B9L;
        if (l_64)
            break;
        for (l_64 = 0; (l_64 == 6); l_64++)
        { 
            g_7[2] &= (((1UL >= (g_49 , l_64)) && (((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(p_44, 14)), p_44)) > g_49.f1) || 0x6FL)) || 3UL);
        }
        for (g_49.f0 = 0; (g_49.f0 <= 1); g_49.f0 += 1)
        { 
            int8_t l_82 = 3L;
            uint8_t l_84 = 0x61L;
            int32_t l_97 = (-6L);
            uint32_t l_145 = 0x2A8A950BL;
            if ((l_71 , (g_72 , ((l_75 = (((g_74 = (g_73 = 0x3F5E9E64L)) >= ((((g_11 <= 0xEA6EL) && l_61) < 0UL) , l_64)) < 0x7028L)) == l_71.f3))))
            { 
                int32_t l_85 = 0L;
                l_83[0] = (safe_mul_func_int8_t_s_s(((g_9[1][1][2] = ((safe_div_func_int8_t_s_s(p_44, (safe_lshift_func_uint8_t_u_u(g_9[1][0][0], 5)))) ^ 4294967288UL)) , (l_75 = l_82)), 1L));
                l_75 = (p_44 || l_84);
                l_85 &= g_6;
            }
            else
            { 
                g_6 &= 0x4D7AA0E7L;
                l_83[0] = (p_44 <= ((g_86 ^= 255UL) >= (l_82 || (p_44 && (-1L)))));
            }
            if (p_44)
            { 
                union U4 l_87 = {0x4880774EL};
                int32_t l_98 = (-2L);
                l_83[1] &= (l_87 , p_44);
                l_98 ^= ((l_97 = ((safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(p_44, 9UL)), l_61)) <= (safe_rshift_func_uint8_t_u_u((g_96 = l_61), 3))), p_44)) <= g_72.f0)) & g_49.f2);
                l_98 = ((g_72.f0 = (l_61 = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s(0x8C4F2CD8C2604F26LL)), 2)))) ^ l_84);
            }
            else
            { 
                uint8_t l_107[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_107[i] = 0xDBL;
                g_73 = 0L;
                l_107[2]--;
                if (g_49.f1)
                    goto lbl_150;
            }
            for (l_75 = 0; (l_75 <= 1); l_75 += 1)
            { 
                int i, j, k;
                l_106 |= ((g_72.f3 &= (g_9[l_75][l_75][(g_49.f0 + 2)] | ((((((((l_83[l_75] > (safe_add_func_int32_t_s_s(1L, (safe_rshift_func_uint8_t_u_s(g_86, p_44))))) , g_9[l_75][l_75][(g_49.f0 + 2)]) , p_44) && 0L) ^ g_2[0]) != g_11) , l_104) & 0UL))) && 0x6882L);
                if (g_9[l_75][l_75][(g_49.f0 + 2)])
                    continue;
                if (p_44)
                    continue;
            }
            for (l_61 = 1; (l_61 >= 0); l_61 -= 1)
            { 
                int32_t l_144 = 0xDEFB49F9L;
                uint32_t l_147 = 0x075EA316L;
                int i, j, k;
                g_73 &= ((-8L) != (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((l_75 &= (((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((0x1BL ^ (l_103 = (((safe_lshift_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u(((((l_144 = (safe_div_func_int8_t_s_s(g_9[g_49.f0][g_49.f0][(l_61 + 1)], (l_83[1] ^= (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_71.f1, g_9[1][0][0])), 0x7B429FF7L)), g_96)), 7)) >= 0xC8L) || p_44), p_44)))))) != 0UL) >= l_145) & p_44), p_44)) > 0x1E5EC640611769B0LL) < p_44) && 18446744073709551612UL), p_44)) , p_44) < g_72.f1))), 9)), g_96)) , l_146) != g_7[0])) | p_44), g_9[g_49.f0][g_49.f0][(l_61 + 1)])), g_9[0][0][1])) ^ g_9[g_49.f0][g_49.f0][(l_61 + 1)]), g_72.f2)), 3)));
                l_147++;
                if (p_44)
                    continue;
            }
        }
    }
    if ((0x8842L != p_44))
    { 
lbl_150:
        l_106 = l_104;
        g_7[1] = (((((safe_div_func_uint64_t_u_u((~(safe_mul_func_uint8_t_u_u((18446744073709551614UL <= (safe_rshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((~(g_6 &= (+(((0x4017L && (g_72.f2 > (((p_44 > (-1L)) <= g_8) && p_44))) & 0xBEL) >= p_44)))), p_44)), l_164)) ^ l_165) , g_72.f2), 2))), 253UL))), 18446744073709551606UL)) , l_106) != p_44) <= p_44) >= 65528UL);
    }
    else
    { 
        int64_t l_166 = 0x6DED90B57F07C662LL;
        int32_t l_167 = 0xC157CCD4L;
        int32_t l_168 = 0xECFE5F79L;
        int32_t l_170 = 1L;
        int32_t l_171 = 0x824DB70BL;
        int32_t l_172 = 0xD4E62ACFL;
        int32_t l_174 = 0x597859A0L;
        int32_t l_175 = 7L;
        int32_t l_176 = 0xC24FB951L;
        int32_t l_177 = 1L;
        int32_t l_179 = (-4L);
        int32_t l_180 = (-5L);
        int32_t l_181 = (-5L);
        int32_t l_183 = 0xF2265D7BL;
        int32_t l_184 = 1L;
        int32_t l_185 = (-10L);
        int32_t l_186 = 1L;
        int32_t l_187[3][5][1] = {{{0xD6D4BB3AL},{1L},{0L},{0x019188B8L},{0L}},{{1L},{0xD6D4BB3AL},{0xD6D4BB3AL},{1L},{0L}},{{0x019188B8L},{0L},{1L},{0xD6D4BB3AL},{0xD6D4BB3AL}}};
        int i, j, k;
        --g_188;
    }
    return l_105;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_203.f4, "g_203.f4", print_hash_value);
    transparent_crc(g_203.f5.f0, "g_203.f5.f0", print_hash_value);
    transparent_crc(g_203.f5.f1, "g_203.f5.f1", print_hash_value);
    transparent_crc(g_203.f5.f2, "g_203.f5.f2", print_hash_value);
    transparent_crc(g_203.f5.f3, "g_203.f5.f3", print_hash_value);
    transparent_crc(g_247.f0, "g_247.f0", print_hash_value);
    transparent_crc(g_247.f1.f0, "g_247.f1.f0", print_hash_value);
    transparent_crc(g_247.f1.f1, "g_247.f1.f1", print_hash_value);
    transparent_crc(g_247.f1.f2, "g_247.f1.f2", print_hash_value);
    transparent_crc(g_247.f1.f3, "g_247.f1.f3", print_hash_value);
    transparent_crc(g_247.f1.f4, "g_247.f1.f4", print_hash_value);
    transparent_crc(g_247.f1.f5.f0, "g_247.f1.f5.f0", print_hash_value);
    transparent_crc(g_247.f1.f5.f1, "g_247.f1.f5.f1", print_hash_value);
    transparent_crc(g_247.f1.f5.f2, "g_247.f1.f5.f2", print_hash_value);
    transparent_crc(g_247.f1.f5.f3, "g_247.f1.f5.f3", print_hash_value);
    transparent_crc(g_247.f2, "g_247.f2", print_hash_value);
    transparent_crc(g_247.f3, "g_247.f3", print_hash_value);
    transparent_crc(g_251.f0, "g_251.f0", print_hash_value);
    transparent_crc(g_251.f2, "g_251.f2", print_hash_value);
    transparent_crc(g_251.f3, "g_251.f3", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
