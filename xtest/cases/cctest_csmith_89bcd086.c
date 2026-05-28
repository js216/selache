// SPDX-License-Identifier: MIT
// cctest_csmith_89bcd086.c --- cctest case csmith_89bcd086 (csmith seed 2310852742)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x680aec9e */
/* @exp_ticks 0x44f4 */

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

// Options:   -s 2310852742 -o /tmp/csmith_gen_v0_e51zg/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int64_t  f0;
   uint64_t  f1;
   int16_t  f2;
   const uint32_t  f3;
};

union U1 {
   uint64_t  f0;
};

union U2 {
   int32_t  f0;
};

union U3 {
   struct S0  f0;
};

union U4 {
   int8_t  f0;
   const int32_t  f1;
   uint32_t  f2;
   const int8_t  f3;
};

union U6 {
   int64_t  f0;
   int32_t  f1;
};

union U7 {
   int64_t  f0;
   const int32_t  f1;
   uint8_t  f2;
};


static int8_t g_19[4] = {0xF0L,0xF0L,0xF0L,0xF0L};
static uint32_t g_27 = 3UL;
static union U3 g_28 = {{3L,1UL,0xEAB3L,0UL}};
static uint16_t g_40 = 65532UL;
static uint32_t g_73 = 0x2E0EE4D5L;
static int8_t g_74 = 0L;
static uint32_t g_75[3][2][3] = {{{0UL,1UL,4294967295UL},{1UL,0UL,0UL}},{{4294967295UL,0UL,0x6AB79911L},{4UL,1UL,0x81D84CB4L}},{{4294967295UL,4294967295UL,0x81D84CB4L},{1UL,4UL,0x6AB79911L}}};
static int64_t g_91 = 1L;
static union U1 g_94 = {2UL};
static uint32_t g_95[2][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
static union U4 g_103 = {0x05L};
static union U3 g_116 = {{0x76A600E36C3AAFF4LL,1UL,0x3CFCL,0x172592CBL}};
static int32_t g_123 = (-1L);
static uint64_t g_137 = 0UL;
static int32_t g_139 = 0xF5884595L;
static int32_t g_142 = 8L;
static uint16_t g_144 = 1UL;
static int16_t g_154[2][3][1] = {{{(-3L)},{0x8B96L},{(-3L)}},{{0x8B96L},{(-3L)},{0x8B96L}}};
static uint32_t g_155[1] = {0x7E3BC08CL};
static int32_t g_165 = 0x737C935DL;
static int16_t g_174 = 1L;
static int64_t g_176 = (-5L);
static uint16_t g_177 = 0x7BC3L;
static int32_t g_223 = 0x675B375AL;
static union U6 g_292 = {4L};
static int8_t g_295[3][1] = {{0x82L},{0x82L},{0x82L}};
static uint16_t g_296 = 0x8F2EL;
static union U7 g_304 = {0x6A75C1B21CF6594ALL};



static union U4  func_1(void);
static uint8_t  func_5(uint8_t  p_6, union U3  p_7, int64_t  p_8, union U3  p_9);
static uint16_t  func_15(int64_t  p_16, union U3  p_17, struct S0  p_18);
static union U3  func_20(uint32_t  p_21, uint32_t  p_22, const int32_t  p_23, int64_t  p_24);




static union U4  func_1(void)
{ 
    uint8_t l_2 = 0x4DL;
    struct S0 l_42 = {0L,0x8000858698962600LL,-10L,1UL};
    uint32_t l_115 = 0xFA8C4D3BL;
    uint8_t l_117[4][3][1] = {{{254UL},{254UL},{0xC4L}},{{254UL},{254UL},{0xC4L}},{{0xC4L},{0xC4L},{0x96L}},{{0xC4L},{0xC4L},{0x96L}}};
    const union U7 l_286 = {-8L};
    int i, j, k;
    --l_2;
    if ((func_5(((~(safe_sub_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(l_2, (func_15(g_19[3], func_20(g_19[3], l_2, l_2, g_19[2]), l_42) > 0x3341L))) ^ 0x897626F057967921LL) && l_42.f0), 1L))) , l_115), g_116, l_117[2][1][0], g_116) ^ g_94.f0))
    { 
        union U3 l_289 = {{0x29F7BD2AB77A9950LL,0x416FC91E7AC14F02LL,1L,0x30011547L}};
        int32_t l_290 = 0x499E8921L;
        const int64_t l_291 = 0xEA170A1CF68CDDB1LL;
        int32_t l_293 = (-1L);
        l_293 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u((g_116.f0.f3 < (safe_mod_func_uint64_t_u_u((((((((safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((l_286 , (g_75[1][0][1] , (((safe_sub_func_uint32_t_u_u((l_290 |= ((l_289 , l_286.f1) <= 65532UL)), l_291)) , g_292) , l_2))) == l_289.f0.f3), 0xB12FL)), l_117[2][1][0])) <= 0x0778F2E3794E6F43LL) <= 0xD062L) & (-1L)) | g_95[1][0]) && l_286.f0) | l_289.f0.f1), l_291))), 0x4CL)) > g_94.f0) <= g_177), 5)), 6));
    }
    else
    { 
        int32_t l_294 = 0x2C02139CL;
        g_296++;
        g_223 |= ((~(safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((g_304 , (l_294 & (safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(l_294, (g_19[3] && 0xAAL))), l_2)))), l_294)), l_42.f1))) > l_294);
    }
    return g_103;
}



static uint8_t  func_5(uint8_t  p_6, union U3  p_7, int64_t  p_8, union U3  p_9)
{ 
    int32_t l_129 = 0x449CDFC8L;
    int32_t l_135[1][2];
    int32_t l_136 = 0x8510E35AL;
    int32_t l_138 = 0x20E1B1DCL;
    uint32_t l_175 = 4294967295UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_135[i][j] = 0xE28E030EL;
    }
    for (g_40 = 0; (g_40 <= 1); g_40 += 1)
    { 
        int32_t l_122 = 0x1400369CL;
        int32_t l_140 = 0xDA10ACF0L;
        int32_t l_143 = 0x3066D203L;
        struct S0 l_151 = {0xC7D5C23E70AEA978LL,18446744073709551609UL,-8L,0xB9E11489L};
        uint64_t l_152 = 2UL;
        union U1 l_205 = {0x09826EB6F187A65DLL};
        uint32_t l_248 = 0x17229113L;
        for (p_6 = 0; (p_6 <= 1); p_6 += 1)
        { 
            int32_t l_124 = 0x6E4DE629L;
            int32_t l_141 = 0x69A9DDE9L;
            int i, j;
            if (((g_95[g_40][(p_6 + 2)] , (safe_sub_func_uint16_t_u_u((0xE8A9L | (g_95[p_6][(g_40 + 2)] && 0x12L)), g_19[(g_40 + 1)]))) < g_74))
            { 
                g_123 = (safe_rshift_func_uint16_t_u_s((l_122 = p_7.f0.f1), 9));
                if (l_122)
                    continue;
            }
            else
            { 
                l_124 = (-9L);
            }
            if ((g_139 = (l_138 = ((p_7.f0.f0 != (g_116.f0.f2 = 0x06AAL)) | (safe_rshift_func_uint16_t_u_s((g_137 |= (l_136 = (safe_add_func_uint64_t_u_u(l_129, (safe_unary_minus_func_int16_t_s((safe_div_func_int8_t_s_s((((l_135[0][1] ^= (safe_sub_func_int8_t_s_s(((l_124 , 18446744073709551615UL) != 0x6E0413CF271EE0ECLL), p_7.f0.f2))) == l_122) <= 0x2231240225571F9CLL), g_40)))))))), p_9.f0.f3))))))
            { 
                l_140 = 0L;
            }
            else
            { 
                uint32_t l_153[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_153[i] = 7UL;
                ++g_144;
                g_154[1][2][0] = (((safe_div_func_uint16_t_u_u((((((l_124 = (((255UL != ((p_9.f0.f1 = (l_138 <= (safe_rshift_func_uint8_t_u_u((l_151 , (p_7.f0.f0 , g_103.f3)), p_7.f0.f0)))) , g_95[p_6][(g_40 + 2)])) <= p_6) < p_7.f0.f1)) , g_74) >= l_151.f2) & 0L) | g_95[g_40][(p_6 + 2)]), l_152)) <= l_153[0]) || p_7.f0.f0);
                g_155[0]--;
            }
            for (g_142 = 0; (g_142 <= 1); g_142 += 1)
            { 
                int i, j, k;
                return g_75[(g_40 + 1)][p_6][g_40];
            }
        }
        for (g_103.f2 = 0; (g_103.f2 <= 3); g_103.f2 += 1)
        { 
            int32_t l_158 = 0x0F894422L;
            int i, j;
            l_158 = g_95[g_40][(g_40 + 1)];
            if (g_19[g_103.f2])
                continue;
        }
        if (((safe_div_func_int32_t_s_s((g_174 = (safe_sub_func_uint32_t_u_u(0x5F7C52E3L, ((g_165 = (safe_lshift_func_uint8_t_u_u(l_152, 7))) , ((p_7.f0.f2 = (g_154[1][1][0] |= ((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((p_6++), (l_143 & ((p_7.f0.f2 && p_7.f0.f0) < 0x1412115AF14B1F07LL)))), 0xD37E9AE4E8F995CBLL)), 0x88A73A985D356E4DLL)) ^ p_7.f0.f1))) < l_135[0][1]))))), l_175)) | 0L))
        { 
            g_177--;
        }
        else
        { 
            int32_t l_188 = (-1L);
            union U1 l_192 = {0x2D907B652E5DFB39LL};
            int32_t l_206 = (-3L);
            union U3 l_207 = {{5L,18446744073709551615UL,0L,0xB64CFAA4L}};
            union U7 l_222[3][2] = {{{-9L},{-9L}},{{-9L},{-9L}},{{-9L},{-9L}}};
            int32_t l_258[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_258[i] = 0x8471FBBCL;
            if ((((18446744073709551615UL & (p_8 = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((-1L) < (g_94 , (safe_add_func_int64_t_s_s((((((safe_mul_func_int16_t_s_s((l_135[0][1] = g_103.f1), g_27)) >= p_9.f0.f3) || p_8) ^ 0x6EDFL) | g_139), g_74)))), l_188)), p_9.f0.f2)))) > 1L) && 1L))
            { 
                int8_t l_196 = 0xD4L;
                int32_t l_208 = 0x1BA63EE4L;
                const struct S0 l_211 = {0x1B8EB1A2BFF11E01LL,0UL,0x3376L,4294967295UL};
                int i;
                l_196 |= (safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((l_192 , (0xE062718EDF5E4C99LL != (safe_mod_func_int64_t_s_s(0xE52F0D76A68AF11ELL, (~(1L | 0xB9D00B73EB7B0691LL)))))), l_122))));
                l_208 = (safe_add_func_uint32_t_u_u((0xDDL == (safe_sub_func_uint8_t_u_u(g_75[0][1][0], ((((l_206 = ((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_205 , g_91), (-9L))) ^ g_142), p_7.f0.f1)) == (-1L))) , l_207) , g_95[1][2]) <= l_196)))), g_27));
                g_223 = (safe_lshift_func_uint8_t_u_u((l_211 , (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u(((l_211.f3 > (1L ^ ((safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s((g_19[(g_40 + 1)] = (safe_add_func_int8_t_s_s((l_222[0][1] , g_91), 0xD2L))), p_7.f0.f1)), p_6)) & p_9.f0.f2))) >= p_9.f0.f3), p_9.f0.f1)) > p_7.f0.f3) | g_154[0][2][0]), 0))), g_116.f0.f0));
            }
            else
            { 
                int64_t l_234 = 0xA32D8287281CC889LL;
                int32_t l_235 = (-10L);
                l_143 = (((g_74 = (safe_lshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((l_140 = l_207.f0.f1) ^ ((safe_add_func_int8_t_s_s((p_6 <= (l_234 = 0xEEL)), p_9.f0.f1)) >= 0x7D318FB5AA6BA308LL)), 1L)), 10)), p_7.f0.f0)) ^ l_138) || 0xF4L), 9))) > g_177) <= l_235);
                if (l_151.f1)
                    break;
                g_223 = ((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((g_75[2][0][0] , p_9.f0.f3) > ((safe_lshift_func_uint16_t_u_s(65533UL, 3)) <= (((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(((l_222[0][1].f1 >= l_248) == p_7.f0.f3), g_28.f0.f2)) , g_75[2][0][0]) >= g_177), g_73)), l_129)) >= l_207.f0.f1) != g_95[1][0]))), 2)) , p_7.f0.f2) & p_7.f0.f1), g_139)) >= 0x09L);
            }
            for (p_8 = 0; (p_8 >= 0); p_8 -= 1)
            { 
                int i, j;
                g_223 = ((safe_add_func_int8_t_s_s((((safe_unary_minus_func_uint16_t_u((l_138 ^= (g_155[p_8] & ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_155[p_8], (((((g_176 |= 0x01008DDBD3AB86DCLL) && g_95[g_40][(p_8 + 3)]) || p_7.f0.f2) > p_9.f0.f2) , g_28.f0.f3))), 7)), 5)) , l_143))))) < 0x0C82DC3FL) && l_129), p_7.f0.f2)) , g_28.f0.f1);
                l_258[0] |= (-10L);
                if (g_155[p_8])
                    continue;
            }
        }
        for (g_27 = 0; (g_27 <= 1); g_27 += 1)
        { 
            uint32_t l_268 = 0xD4D54530L;
            for (p_7.f0.f1 = 0; (p_7.f0.f1 <= 1); p_7.f0.f1 += 1)
            { 
                int64_t l_267 = 0L;
                g_223 = (((0L ^ g_19[3]) < p_8) < ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_267, l_268)), p_9.f0.f2)), p_9.f0.f2)) && l_138), g_74)) >= 6L));
                if (p_9.f0.f2)
                    break;
                return p_7.f0.f0;
            }
            g_223 &= ((((((((safe_add_func_int64_t_s_s(((~1UL) || g_137), l_151.f1)) && (((g_75[2][0][0] >= g_103.f2) != 0xCCL) > 0x86839DCDL)) , p_9.f0.f2) == g_144) , 0xE6DAE2C0L) , 0UL) & 9L) <= 0x3942L);
            return p_7.f0.f1;
        }
    }
    return l_135[0][1];
}



static uint16_t  func_15(int64_t  p_16, union U3  p_17, struct S0  p_18)
{ 
    uint32_t l_53 = 0UL;
    union U7 l_54[5] = {{-3L},{-3L},{-3L},{-3L},{-3L}};
    int32_t l_56[5][5][5] = {{{0x165AAE70L,0x7F794FC7L,0x7F794FC7L,0x165AAE70L,0x141BD8E7L},{0xC07E7F6FL,0x88A3D85AL,7L,7L,0x88A3D85AL},{0x141BD8E7L,0x7F794FC7L,0xE16D714EL,0x2D45AB60L,0x2D45AB60L},{1L,0x3D9D76C1L,1L,7L,(-1L)},{0L,0x165AAE70L,0x2D45AB60L,0x165AAE70L,0L}},{{1L,0xC07E7F6FL,0x3D9D76C1L,0x88A3D85AL,0x3D9D76C1L},{0x141BD8E7L,0x141BD8E7L,0x2D45AB60L,0L,0L},{0xC07E7F6FL,1L,1L,0xC07E7F6FL,0x3D9D76C1L},{0x165AAE70L,0L,0xE16D714EL,0xE16D714EL,0L},{0x3D9D76C1L,1L,7L,(-1L),(-1L)}},{{0x7F794FC7L,0x141BD8E7L,0x7F794FC7L,0xE16D714EL,0x2D45AB60L},{0x88A3D85AL,0xC07E7F6FL,(-1L),0xC07E7F6FL,0x88A3D85AL},{0x7F794FC7L,0x165AAE70L,0x141BD8E7L,0L,0x141BD8E7L},{0x3D9D76C1L,0x3D9D76C1L,(-1L),0x88A3D85AL,0L},{0x165AAE70L,0x7F794FC7L,0x7F794FC7L,0x165AAE70L,0x141BD8E7L}},{{0xC07E7F6FL,0x88A3D85AL,7L,7L,0x88A3D85AL},{0x141BD8E7L,0x7F794FC7L,0xE16D714EL,0x2D45AB60L,0x2D45AB60L},{1L,0x3D9D76C1L,1L,7L,(-1L)},{0L,0x165AAE70L,0x2D45AB60L,0x165AAE70L,0L},{1L,0xC07E7F6FL,0x3D9D76C1L,0x88A3D85AL,0x3D9D76C1L}},{{0x141BD8E7L,0x141BD8E7L,0x2D45AB60L,0L,0L},{0xC07E7F6FL,1L,1L,0xC07E7F6FL,0x3D9D76C1L},{0x165AAE70L,0L,0xE16D714EL,0xE16D714EL,0L},{0x3D9D76C1L,1L,7L,(-1L),(-1L)},{0x7F794FC7L,0x141BD8E7L,0x7F794FC7L,0xE16D714EL,0x2D45AB60L}}};
    const union U2 l_98 = {2L};
    uint32_t l_109[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_109[i] = 1UL;
    for (p_17.f0.f2 = 0; (p_17.f0.f2 > 17); p_17.f0.f2 = safe_add_func_uint32_t_u_u(p_17.f0.f2, 5))
    { 
        uint64_t l_51 = 18446744073709551614UL;
        int64_t l_55 = (-7L);
        int32_t l_57 = 1L;
        l_57 = (safe_lshift_func_int16_t_s_s((l_56[2][1][4] = (safe_lshift_func_uint8_t_u_s((func_20(((((g_28.f0.f1 , (((safe_div_func_uint32_t_u_u(l_51, (+l_53))) <= (l_54[0] , l_55)) ^ p_17.f0.f2)) != g_28.f0.f0) , g_28.f0) , p_18.f0), g_28.f0.f1, l_54[0].f0, p_18.f2) , g_28.f0.f3), 1))), 11));
        if ((safe_sub_func_int32_t_s_s((((((safe_unary_minus_func_uint32_t_u(p_18.f1)) || ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0xF6L, 0x50L)), 3)) <= l_53)) & p_18.f3) & g_19[1]) != p_16), p_17.f0.f3)))
        { 
            if (p_18.f0)
                break;
        }
        else
        { 
            g_74 = (g_73 = (safe_lshift_func_uint8_t_u_u(0x09L, (safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(p_18.f0, p_17.f0.f3)) > (((safe_mod_func_int8_t_s_s((p_18.f3 , (-1L)), g_28.f0.f3)) != (-10L)) < g_28.f0.f0)), g_28.f0.f3)))));
        }
    }
    for (g_28.f0.f1 = 0; (g_28.f0.f1 <= 3); g_28.f0.f1 += 1)
    { 
        uint16_t l_90 = 65535UL;
        --g_75[2][0][0];
        g_91 = (l_54[0].f0 & (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((((l_56[2][1][4] = (safe_sub_func_uint8_t_u_u(g_19[1], ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_54[0].f1 , (65535UL != p_17.f0.f2)), p_18.f0)), p_17.f0.f0)) ^ p_16)))) == 0L) , p_17.f0.f3), l_90)), 8)), g_27)));
    }
    if ((safe_add_func_int16_t_s_s(p_17.f0.f2, ((g_94 , p_17.f0.f3) , p_18.f2))))
    { 
        int32_t l_106 = 0x1CF7F800L;
        l_106 = ((p_17.f0.f2 ^= ((g_95[1][0]++) != (l_98 , (safe_lshift_func_uint16_t_u_s(((1L < (safe_rshift_func_uint16_t_u_s((g_103 , (safe_div_func_uint32_t_u_u(g_103.f0, 0x81C666DFL))), 14))) == g_91), l_56[2][1][4]))))) < l_106);
    }
    else
    { 
        uint16_t l_114 = 0UL;
        l_114 &= (safe_add_func_int64_t_s_s((g_91 = (l_109[4] |= g_94.f0)), (0xB09547896B8AE432LL > (((((safe_mul_func_int8_t_s_s(p_18.f0, 0x12L)) | 7L) | g_94.f0) || p_18.f0) <= 0x3068L))));
        return p_18.f3;
    }
    return g_73;
}



static union U3  func_20(uint32_t  p_21, uint32_t  p_22, const int32_t  p_23, int64_t  p_24)
{ 
    int8_t l_39 = 4L;
    int32_t l_41 = 1L;
    for (p_22 = 0; (p_22 > 19); ++p_22)
    { 
        g_27 = 0xE483BBB6L;
    }
    l_41 = (g_19[0] ^ (g_40 = (g_28 , ((safe_sub_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(g_19[3], (safe_div_func_uint8_t_u_u(g_19[2], p_23)))) <= 0x96D56A426232C2A4LL), 6)) & p_24) && p_22) > l_39), 7UL)) & l_39), 0x983CL)) < 1UL))));
    return g_28;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_19[i], "g_19[i]", print_hash_value);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28.f0.f0, "g_28.f0.f0", print_hash_value);
    transparent_crc(g_28.f0.f1, "g_28.f0.f1", print_hash_value);
    transparent_crc(g_28.f0.f2, "g_28.f0.f2", print_hash_value);
    transparent_crc(g_28.f0.f3, "g_28.f0.f3", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_75[i][j][k], "g_75[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_95[i][j], "g_95[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_116.f0.f0, "g_116.f0.f0", print_hash_value);
    transparent_crc(g_116.f0.f1, "g_116.f0.f1", print_hash_value);
    transparent_crc(g_116.f0.f2, "g_116.f0.f2", print_hash_value);
    transparent_crc(g_116.f0.f3, "g_116.f0.f3", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_154[i][j][k], "g_154[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);

    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_292.f0, "g_292.f0", print_hash_value);
    transparent_crc(g_292.f1, "g_292.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_295[i][j], "g_295[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_304.f0, "g_304.f0", print_hash_value);
    transparent_crc(g_304.f1, "g_304.f1", print_hash_value);
    transparent_crc(g_304.f2, "g_304.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
