// SPDX-License-Identifier: MIT
// cctest_csmith_e488974a.c --- cctest case csmith_e488974a (csmith seed 3834156874)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8ecf8a */

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

// Options:   -s 3834156874 -o /tmp/csmith_gen_6e1pkt8s/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
   int16_t  f4;
   int64_t  f5;
};

union U1 {
   uint64_t  f0;
   int64_t  f1;
   int8_t  f2;
};


static int16_t g_2[1][5][5] = {{{(-6L),1L,1L,1L,1L},{(-6L),1L,1L,1L,1L},{(-6L),1L,1L,1L,1L},{(-6L),1L,1L,1L,1L},{(-6L),1L,1L,1L,1L}}};
static int32_t g_3 = 0x1DA622A1L;
static int64_t g_58[5][2] = {{0x06DF3F1863D476FCLL,8L},{0x74484A863074C89ALL,0x06DF3F1863D476FCLL},{(-3L),(-3L)},{(-3L),0x06DF3F1863D476FCLL},{0x74484A863074C89ALL,8L}};
static uint64_t g_68[5][3][5] = {{{0xDE0C47FC0BD78952LL,0x668E54706CD8FDA5LL,0xC75F9279698822BDLL,0xC75F9279698822BDLL,0x668E54706CD8FDA5LL},{0xDE0C47FC0BD78952LL,0UL,0x757037A9E214278DLL,6UL,0xCEC93CBC91981F0BLL},{0xDE0C47FC0BD78952LL,0x67550B1092FBB161LL,0xCEC93CBC91981F0BLL,0UL,4UL}},{{1UL,4UL,0UL,0xCEC93CBC91981F0BLL,0x67550B1092FBB161LL},{1UL,18446744073709551615UL,0xAD62130E9DD37137LL,1UL,0x778C533BF95235BBLL},{1UL,0x0CF2F2894906A58ELL,0x668E54706CD8FDA5LL,0x668E54706CD8FDA5LL,0x0CF2F2894906A58ELL}},{{1UL,0x778C533BF95235BBLL,1UL,0xAD62130E9DD37137LL,18446744073709551615UL},{1UL,0x67550B1092FBB161LL,0xCEC93CBC91981F0BLL,0UL,4UL},{1UL,4UL,0UL,0xCEC93CBC91981F0BLL,0x67550B1092FBB161LL}},{{1UL,18446744073709551615UL,0xAD62130E9DD37137LL,1UL,0x778C533BF95235BBLL},{1UL,0x0CF2F2894906A58ELL,0x668E54706CD8FDA5LL,0x668E54706CD8FDA5LL,0x0CF2F2894906A58ELL},{1UL,0x778C533BF95235BBLL,1UL,0xAD62130E9DD37137LL,18446744073709551615UL}},{{1UL,0x67550B1092FBB161LL,0xCEC93CBC91981F0BLL,0UL,4UL},{1UL,4UL,0UL,0xCEC93CBC91981F0BLL,0x67550B1092FBB161LL},{1UL,18446744073709551615UL,0xAD62130E9DD37137LL,1UL,0x778C533BF95235BBLL}}};
static uint32_t g_102 = 18446744073709551615UL;
static struct S0 g_145 = {255UL,-4L,0x73AF25C912EA93CCLL,1UL,1L,0x328A76B0EF2B8E86LL};
static int32_t g_147[2] = {1L,1L};
static int8_t g_183[2][1] = {{(-1L)},{(-1L)}};
static uint16_t g_192 = 0x2DF3L;
static int32_t g_198 = 0L;
static int8_t g_265 = 5L;
static int16_t g_277 = (-3L);
static union U1 g_288 = {18446744073709551615UL};



static union U1  func_1(void);
static uint32_t  func_15(int16_t  p_16, uint32_t  p_17, uint64_t  p_18, int32_t  p_19);
static struct S0  func_30(struct S0  p_31, int32_t  p_32, const int64_t  p_33);
static struct S0  func_34(uint16_t  p_35);




static union U1  func_1(void)
{ 
    int32_t l_10 = 3L;
    union U1 l_289 = {0x694A0AEEF7D3C1ADLL};
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        int16_t l_7 = 4L;
        int32_t l_20 = 7L;
        g_277 ^= (((safe_div_func_uint64_t_u_u(((safe_unary_minus_func_int16_t_s(l_7)) && ((((g_147[0] = ((safe_lshift_func_uint8_t_u_u(l_7, l_10)) , (safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((func_15((l_20 = l_10), l_7, g_2[0][2][0], l_10) <= 0L), g_3)) <= g_265), g_3)))) < 1L) > 1L) && 0UL)), g_3)) & g_3) | 0x016A6488L);
        l_20 = (((-4L) >= (g_3 & (safe_rshift_func_int16_t_s_s(l_10, 0)))) , (((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(l_20, g_102)) || 18446744073709551608UL) > g_147[1]), g_145.f4)), 2L)), l_20)) && g_277) > 0xC290L));
        return g_288;
    }
    return l_289;
}



static uint32_t  func_15(int16_t  p_16, uint32_t  p_17, uint64_t  p_18, int32_t  p_19)
{ 
    uint16_t l_25 = 0xC877L;
    int32_t l_226 = 0x9EE059EFL;
    const struct S0 l_233 = {0xB0L,0x2B1045D4L,1UL,0xF404DFAAL,0x5959L,0x263723E2319AEFDALL};
    int32_t l_269 = (-10L);
    int32_t l_271 = 1L;
    int32_t l_272[2][2][2] = {{{0x0A1730DDL,0x0A1730DDL},{0x0A1730DDL,0x0A1730DDL}},{{0x0A1730DDL,0x0A1730DDL},{0x0A1730DDL,0x0A1730DDL}}};
    uint32_t l_274 = 0xF3C2A6CFL;
    int i, j, k;
    if (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_2[0][0][4], (((((l_25 < (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_25 & p_17), 5)), 0))) & l_25) > g_2[0][4][0]) == g_2[0][4][2]) || 0x3A34071EL))), g_3)) < g_3))
    { 
        uint32_t l_48 = 4UL;
        struct S0 l_225 = {255UL,0x0C646F5CL,0x77D8F50401724639LL,0UL,-1L,0x8622381DE4584C0BLL};
        l_225 = func_30(func_34((safe_rshift_func_int8_t_s_u(0x33L, (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(g_2[0][2][2], p_16)) < (safe_div_func_int16_t_s_s(((l_48 , l_25) , g_3), l_48))), g_2[0][2][3])), l_48)) == 65535UL), g_2[0][2][1]))))), p_18, g_145.f3);
        l_226 = 0x4E05431AL;
    }
    else
    { 
        uint32_t l_227 = 0UL;
        int32_t l_230 = 0L;
        int32_t l_266 = 1L;
        int32_t l_267 = 0L;
        int32_t l_268 = (-1L);
        int32_t l_270 = 0x4D16BD2DL;
        int32_t l_273[3];
        int i;
        for (i = 0; i < 3; i++)
            l_273[i] = 5L;
        for (g_198 = 0; (g_198 >= 0); g_198 -= 1)
        { 
            uint16_t l_236 = 1UL;
            int32_t l_237 = 0xDFB2AA1FL;
            int32_t l_246 = 0xD6436AE9L;
            struct S0 l_254[5][1] = {{{1UL,0xC1B82195L,0x82F34E296A022166LL,0x7D682C87L,0xA03AL,1L}},{{1UL,0xC1B82195L,0x82F34E296A022166LL,0x7D682C87L,0xA03AL,1L}},{{1UL,0xC1B82195L,0x82F34E296A022166LL,0x7D682C87L,0xA03AL,1L}},{{1UL,0xC1B82195L,0x82F34E296A022166LL,0x7D682C87L,0xA03AL,1L}},{{1UL,0xC1B82195L,0x82F34E296A022166LL,0x7D682C87L,0xA03AL,1L}}};
            int i, j;
            g_147[1] |= ((((l_227 = p_19) != (safe_div_func_int8_t_s_s((g_183[1][0] = ((l_230 = 0x8ABBL) <= (g_145.f4 &= (l_237 = (safe_lshift_func_int8_t_s_s((((g_192 = ((p_18 = ((((l_233 , (safe_lshift_func_uint8_t_u_s((l_236 , g_145.f3), 3))) , 0x515CL) == p_16) != 0x5CAAL)) | p_17)) != g_145.f5) > 18446744073709551615UL), l_236)))))), p_16))) , p_19) >= p_19);
            for (l_227 = 0; (l_227 <= 0); l_227 += 1)
            { 
                uint8_t l_242 = 0xCEL;
                int32_t l_245 = (-1L);
                int64_t l_249 = (-4L);
                l_230 &= (((((((((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((3L > p_17), (l_242 | (safe_lshift_func_uint8_t_u_u((l_245 = (g_145.f0 == 0xD287EBBFL)), g_145.f5))))) , g_183[0][0]) <= p_16), p_17)) & g_145.f0) == p_17) != l_236) != g_145.f4) < l_242) > l_246) >= l_242) | g_58[0][0]);
                l_245 = g_145.f2;
                l_246 ^= (((safe_rshift_func_int16_t_s_u((1L && (((l_249 , ((safe_lshift_func_uint8_t_u_s(9UL, (((safe_mul_func_int8_t_s_s((g_183[1][0] ^= 0xAFL), p_18)) || 0x06L) <= 0xE244C01E1E6FD7EBLL))) == p_18)) < g_145.f3) || (-6L))), 3)) > l_230) && p_18);
            }
            l_246 = ((g_145 = (l_254[2][0] = l_254[2][0])) , 0L);
            for (l_25 = 0; (l_25 <= 0); l_25 += 1)
            { 
                uint64_t l_255[5] = {1UL,1UL,1UL,1UL,1UL};
                struct S0 l_264 = {0UL,0xC0A555EBL,0x02BC30E36697B6F9LL,8UL,5L,-1L};
                int i;
                l_255[4] &= ((l_254[2][0].f5 >= p_18) || p_19);
                l_264 = func_30(l_254[2][0], ((safe_lshift_func_int16_t_s_s((p_18 == (safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((((l_255[2] && g_58[0][0]) > l_233.f3) > g_145.f1), l_230)), p_18)) <= p_16) && l_255[4]), g_58[4][1]))), g_58[0][0])) == p_19), p_19);
            }
        }
        l_274--;
    }
    return l_272[0][0][0];
}



static struct S0  func_30(struct S0  p_31, int32_t  p_32, const int64_t  p_33)
{ 
    int16_t l_222 = 0x7E41L;
    int32_t l_223 = 6L;
    int32_t l_224 = 0x694F7BBAL;
    for (p_31.f4 = 0; (p_31.f4 == 7); p_31.f4++)
    { 
        uint64_t l_206 = 0x48FFD3BA70242F93LL;
        l_206 = (safe_rshift_func_uint8_t_u_s((p_31.f0 = (safe_rshift_func_int8_t_s_s(g_145.f3, 3))), 0));
        g_145.f1 ^= (safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_224 = (p_31.f1 ^= (l_223 &= (safe_mul_func_int16_t_s_s(p_31.f4, (+(g_147[1] = ((((l_206 & (safe_lshift_func_uint16_t_u_u(((g_68[2][2][2] >= (((safe_div_func_uint16_t_u_u((((((p_31.f0 &= ((g_58[4][1] = ((0xEFCB1569L ^ p_31.f2) >= 4294967289UL)) < 0x1CE538C8CD2030A4LL)) <= p_31.f4) != g_147[1]) <= l_206) && g_2[0][2][0]), p_31.f3)) == l_222) < (-1L))) && g_145.f2), p_33))) <= 1UL) == l_206) == g_3)))))))), l_222)), g_102)), g_68[2][2][2])) , p_31.f3), p_32));
    }
    return g_145;
}



static struct S0  func_34(uint16_t  p_35)
{ 
    int16_t l_59 = 0x6B68L;
    int32_t l_60 = 0x8A42286EL;
    int32_t l_61 = 0L;
    int64_t l_100[3];
    int32_t l_118 = 8L;
    uint32_t l_157 = 0x2C6A0115L;
    struct S0 l_199 = {1UL,-3L,1UL,0x58D1DA83L,1L,-1L};
    int i;
    for (i = 0; i < 3; i++)
        l_100[i] = (-10L);
    if (((g_3 | (safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((g_2[0][2][2] = (safe_lshift_func_int8_t_s_u(((l_61 = ((l_60 = (safe_mod_func_int8_t_s_s((((+((0x57AFC499L < ((g_58[0][0] ^= p_35) == (p_35 , 0x1351L))) < 2UL)) & g_3) | l_59), 0xBCL))) ^ p_35)) ^ 0xB986L), 7))), p_35)) | l_59), 65527UL))) , (-4L)))
    { 
        int8_t l_62 = 0L;
        int32_t l_65 = 1L;
        l_61 ^= ((p_35 = l_62) >= ((l_65 = (g_3 || ((-1L) ^ (((l_62 , g_58[0][0]) != 0UL) < l_59)))) == l_62));
        g_68[2][2][2] &= (safe_div_func_uint32_t_u_u(g_58[0][0], l_65));
    }
    else
    { 
        uint32_t l_103 = 9UL;
        int32_t l_119 = 0x60E86605L;
        int32_t l_120 = 0xC2164845L;
        int32_t l_135 = 9L;
lbl_151:
        for (l_59 = (-9); (l_59 <= (-5)); ++l_59)
        { 
            uint32_t l_101 = 4294967286UL;
            l_103 = (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((g_102 = ((((g_2[0][2][3] < (safe_rshift_func_uint8_t_u_s(((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((+(((p_35 & (+(~(safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(((g_68[2][2][2] > ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(p_35, g_58[3][1])) , g_3), l_100[2])) ^ 65535UL), l_100[0])) == l_59)) < p_35), 0x0C9FL)) ^ 0x1C60L), g_58[0][0]))))) >= 1UL) & l_101)) != g_58[3][1]), p_35)), g_58[4][0])), l_100[2])) < p_35), 9L)) && p_35) == g_68[1][1][2]) & g_68[1][0][4]), 7))) != p_35) > p_35) | g_68[2][2][2])), p_35)), g_58[0][0]));
        }
        l_120 = ((safe_mod_func_uint32_t_u_u((((g_2[0][3][1] = (l_119 = ((~((!(safe_add_func_int64_t_s_s(l_61, (safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u(g_58[0][1], (safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((0x2B5FAC05FCAF600DLL < 0x6A2755E220C4E49CLL), p_35)) <= 9UL), l_118)))), p_35))))) < g_58[1][0])) && p_35))) | 65533UL) ^ 65535UL), p_35)) < 6UL);
        if ((0UL > (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((0xF9L & (safe_rshift_func_uint8_t_u_s(g_102, (safe_sub_func_int16_t_s_s(((p_35 && l_60) & p_35), 0x0BDBL))))), 9L)), p_35)), 9)), g_2[0][0][1])), l_135))))
        { 
            uint8_t l_148 = 0xDFL;
            for (l_119 = 0; (l_119 > 28); l_119 = safe_add_func_int8_t_s_s(l_119, 8))
            { 
                uint64_t l_146 = 18446744073709551614UL;
                g_145.f1 = (g_147[1] &= (safe_mul_func_int16_t_s_s((+0xDDL), ((safe_mul_func_uint8_t_u_u((0x035C9A6DL || (l_146 = (safe_lshift_func_int16_t_s_s((((g_145 , l_100[2]) ^ g_145.f3) ^ g_68[2][2][2]), 9)))), (-1L))) >= p_35))));
                if (l_148)
                    break;
            }
            for (l_60 = 0; (l_60 >= (-22)); l_60 = safe_sub_func_int16_t_s_s(l_60, 1))
            { 
                if (l_103)
                    break;
            }
            if (l_59)
                goto lbl_151;
        }
        else
        { 
            struct S0 l_152 = {255UL,0L,18446744073709551614UL,7UL,-1L,0xDBA62EB872B59225LL};
            return l_152;
        }
    }
    l_60 = (((safe_mul_func_int16_t_s_s(g_68[1][2][1], ((safe_lshift_func_int16_t_s_s(((l_157 != (safe_lshift_func_int8_t_s_u(0x22L, 1))) <= (g_58[0][0] = (safe_div_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(l_157, g_58[0][0])), 2)) < 0x5C1620E12151E35FLL) , g_68[3][1][1]) != g_2[0][1][2]), l_60)))), g_68[4][2][3])) || g_145.f1))) , l_59) & g_102);
    for (p_35 = 0; (p_35 >= 54); p_35++)
    { 
        int16_t l_176 = 0L;
        int32_t l_190 = 1L;
        int32_t l_191[5][1];
        int64_t l_195[2][5][1] = {{{0xE54AC5FBAF3FA6EFLL},{0x6C2B630719000718LL},{0xE54AC5FBAF3FA6EFLL},{0x6C2B630719000718LL},{0xE54AC5FBAF3FA6EFLL}},{{0x6C2B630719000718LL},{0xE54AC5FBAF3FA6EFLL},{0x6C2B630719000718LL},{0xE54AC5FBAF3FA6EFLL},{0x6C2B630719000718LL}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_191[i][j] = 0x833BBF8EL;
        }
        g_147[1] = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((l_176 ^ (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((l_61 = (p_35 <= g_183[1][0])), (safe_sub_func_int32_t_s_s(((g_198 = (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((l_195[1][4][0] ^= (++g_192)) != (l_60 = (((safe_lshift_func_uint8_t_u_u(g_68[2][2][2], 1)) < l_100[1]) & p_35))), (-6L))), l_100[2]))) >= l_191[4][0]), (-10L))))), g_58[0][1])), g_58[4][0]))), (-9L))), l_59)) > g_147[1]) & 0xAFL) | l_100[2]), 3)) ^ g_145.f1), 1));
    }
    return l_199;
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
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_58[i][j], "g_58[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_68[i][j][k], "g_68[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_145.f3, "g_145.f3", print_hash_value);
    transparent_crc(g_145.f4, "g_145.f4", print_hash_value);
    transparent_crc(g_145.f5, "g_145.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_147[i], "g_147[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_183[i][j], "g_183[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_288.f2, "g_288.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
