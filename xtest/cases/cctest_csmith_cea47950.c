// SPDX-License-Identifier: MIT
// cctest_csmith_cea47950.c --- cctest case csmith_cea47950 (csmith seed 3466885456)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd66932b */

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

// Options:   -s 3466885456 -o /tmp/csmith_gen_zk2l_2_w/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const uint64_t  f1;
   const int32_t  f2;
   uint32_t  f3;
   int32_t  f4;
};

union U1 {
   uint16_t  f0;
   uint64_t  f1;
};


static int32_t g_2 = 0xC3C69AEDL;
static int32_t g_5[3] = {0x63126FF2L,0x63126FF2L,0x63126FF2L};
static uint32_t g_13 = 18446744073709551615UL;
static struct S0 g_19 = {0x8F928D9BL,5UL,0x7A4129B8L,0x755261FCL,-3L};
static uint16_t g_37 = 65535UL;
static uint8_t g_60 = 0xBDL;
static int64_t g_66 = (-1L);
static uint64_t g_70 = 18446744073709551606UL;
static int32_t g_73 = (-1L);
static uint64_t g_74 = 8UL;
static uint8_t g_77 = 0xACL;
static uint16_t g_81 = 0xFAA9L;
static uint32_t g_103 = 18446744073709551613UL;
static uint64_t g_165 = 0UL;



static uint16_t  func_1(void);
static int64_t  func_15(int8_t  p_16, struct S0  p_17, int64_t  p_18);
static uint32_t  func_28(int32_t  p_29, const uint32_t  p_30);
static int32_t  func_50(int16_t  p_51, uint32_t  p_52, union U1  p_53, union U1  p_54);




static uint16_t  func_1(void)
{ 
    int16_t l_22 = 0xF7C2L;
    int32_t l_129 = 0xED72739EL;
    int32_t l_130 = 0x49617166L;
    uint64_t l_141 = 0x31763EEA7E5B6355LL;
    int32_t l_160 = 0xC20038BEL;
    for (g_2 = (-15); (g_2 == 9); ++g_2)
    { 
        int64_t l_23 = 0x720104353EA3A722LL;
        int32_t l_35 = 0xC9AA6F57L;
        struct S0 l_36 = {1L,2UL,0x3A47399DL,0x12CD0AB8L,0L};
        uint32_t l_102[5][2] = {{0xF132C5A1L,0xF132C5A1L},{0xF132C5A1L,0xF132C5A1L},{0xF132C5A1L,0xF132C5A1L},{0xF132C5A1L,0xF132C5A1L},{0xF132C5A1L,0xF132C5A1L}};
        int i, j;
        for (g_5[0] = 0; (g_5[0] > 15); g_5[0] = safe_add_func_int16_t_s_s(g_5[0], 2))
        { 
            const uint8_t l_10 = 0UL;
            int32_t l_101 = (-1L);
            int32_t l_116 = 0L;
            if (((l_23 = ((safe_lshift_func_uint8_t_u_u(l_10, ((safe_rshift_func_uint8_t_u_s((g_13 = l_10), 7)) <= (((g_2 , (~func_15(g_2, g_19, g_19.f1))) , g_5[0]) , 0x4D258D0336D06583LL)))) , l_22)) && g_13))
            { 
                struct S0 l_31 = {0x18D7C584L,0xDB553A81F6ED7348LL,-6L,0xB79A97A8L,0x1D9D65FEL};
                int32_t l_84 = (-4L);
                l_84 = (safe_rshift_func_int16_t_s_s((18446744073709551606UL ^ ((safe_mul_func_uint32_t_u_u(func_28((l_31 , func_15((!((0xC239170055833AEDLL || (safe_add_func_int64_t_s_s(func_15((l_35 = g_19.f0), l_36, g_37), 0L))) , l_31.f2)), g_19, g_19.f2)), l_10), 0L)) ^ l_31.f0)), 12));
                if (g_2)
                    continue;
                l_102[2][1] = (safe_sub_func_int32_t_s_s((((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x4AL, 5)), 4)), (l_101 = (((safe_rshift_func_uint16_t_u_u(l_31.f4, 2)) & ((((((g_60 == ((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(1UL, 8UL)), g_2)) <= g_77)) == g_13) >= g_19.f2) ^ g_2) >= 0x8031L) , l_36.f4)) > g_19.f2)))), l_31.f4)) ^ g_73) == g_19.f1), g_19.f2));
            }
            else
            { 
                return l_101;
            }
            g_103 = l_22;
            l_116 = ((safe_div_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(((l_101 &= 0x1313L) && (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(0x81FFL)), ((!(safe_mul_func_uint8_t_u_u(l_22, ((g_60 = (--g_77)) != l_10)))) , 0UL)))), 0xBD6DA29AL)) , g_13) <= g_81), 0xD3E82D73L)) >= 9L);
        }
        return l_35;
    }
    for (g_74 = (-25); (g_74 < 43); ++g_74)
    { 
        int64_t l_119[4][4][2] = {{{1L,0L},{(-8L),0L},{1L,(-8L)},{1L,1L}},{{1L,(-8L)},{1L,0L},{(-8L),0L},{1L,(-8L)}},{{1L,1L},{1L,(-8L)},{1L,0L},{(-8L),0L}},{{1L,(-8L)},{1L,1L},{1L,(-8L)},{1L,0L}}};
        int16_t l_140 = (-5L);
        const union U1 l_153 = {1UL};
        int32_t l_166 = (-1L);
        int i, j, k;
        if ((l_119[1][0][0] == (g_81 > 3L)))
        { 
            struct S0 l_135[5][3] = {{{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L},{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L},{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L}},{{0x3E211E8DL,0UL,0L,0x0AEDAF9CL,-1L},{0x3E211E8DL,0UL,0L,0x0AEDAF9CL,-1L},{0x3E211E8DL,0UL,0L,0x0AEDAF9CL,-1L}},{{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L},{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L},{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L}},{{0x3E211E8DL,0UL,0L,0x0AEDAF9CL,-1L},{0x3E211E8DL,0UL,0L,0x0AEDAF9CL,-1L},{0x3E211E8DL,0UL,0L,0x0AEDAF9CL,-1L}},{{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L},{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L},{0xB3387B99L,0x05434A3FD71FAF2ALL,0L,0UL,0x1093E8F6L}}};
            int i, j;
            g_5[0] = ((1L < (safe_mul_func_uint16_t_u_u((g_19 , ((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((l_130 = ((safe_rshift_func_int16_t_s_u((((g_66 = 0xA74C462F11252BC4LL) < (l_129 |= 0x9E22A4178B3ED55ELL)) && g_2), 12)) || l_129)))), l_22)), l_22)) , 0x20EDL)), l_119[1][0][0]))) || g_77);
            l_130 ^= (safe_div_func_int64_t_s_s(1L, (safe_rshift_func_int8_t_s_u((g_5[2] > ((l_135[0][0] , (safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((g_19.f0 , 0x0542L), l_135[0][0].f1)) || 0xDD91154651966E86LL), (-8L)))) | l_140)), l_141))));
        }
        else
        { 
            uint32_t l_149 = 0x9DADA64CL;
            for (l_130 = 2; (l_130 >= 0); l_130 -= 1)
            { 
                uint64_t l_148 = 18446744073709551615UL;
                uint32_t l_150 = 0UL;
                int i;
                l_129 = ((0xDDL ^ (safe_mul_func_uint8_t_u_u((g_5[l_130] = (g_5[l_130] , (safe_div_func_int32_t_s_s(((((((g_19.f4 || (safe_lshift_func_uint8_t_u_u(255UL, g_5[l_130]))) , (-1L)) | 0x3C5DL) ^ g_19.f0) || g_5[l_130]) , g_5[l_130]), g_19.f2)))), l_148))) <= l_149);
                l_129 = (((l_148 , (l_150 ^= 0x3730F596B175D022LL)) == ((safe_div_func_uint8_t_u_u((l_153 , (255UL & 0xA3L)), g_5[0])) , (-1L))) || g_19.f4);
                g_5[0] = (safe_mul_func_uint16_t_u_u(0x1956L, (safe_mul_func_uint8_t_u_u(((g_19.f0 , (safe_lshift_func_int8_t_s_s(l_160, g_60))) <= 0x9821L), g_19.f1))));
            }
            for (l_129 = 0; (l_129 < (-2)); l_129 = safe_sub_func_uint8_t_u_u(l_129, 7))
            { 
                l_166 |= (safe_mod_func_uint16_t_u_u(g_19.f2, ((g_165 , g_19.f0) | 18446744073709551615UL)));
            }
        }
    }
    for (g_66 = 2; (g_66 >= 0); g_66 -= 1)
    { 
        int64_t l_167 = 0x2895D01DBD879D1BLL;
        for (g_19.f4 = 0; (g_19.f4 <= 2); g_19.f4 += 1)
        { 
            int32_t l_168 = (-4L);
            int i;
            l_168 &= ((g_19 , (((l_167 = g_5[g_19.f4]) , (g_5[g_19.f4] != g_5[g_19.f4])) >= g_5[g_19.f4])) <= g_5[g_19.f4]);
        }
    }
    return l_130;
}



static int64_t  func_15(int8_t  p_16, struct S0  p_17, int64_t  p_18)
{ 
    const uint64_t l_20[5] = {0xC4779D44F4CC511ELL,0xC4779D44F4CC511ELL,0xC4779D44F4CC511ELL,0xC4779D44F4CC511ELL,0xC4779D44F4CC511ELL};
    int32_t l_21[2];
    int i;
    for (i = 0; i < 2; i++)
        l_21[i] = (-1L);
    l_21[0] |= l_20[0];
    return l_21[0];
}



static uint32_t  func_28(int32_t  p_29, const uint32_t  p_30)
{ 
    int32_t l_48 = 1L;
    int32_t l_49 = 0x6251CA2AL;
    union U1 l_61 = {0x4BC0L};
    if ((safe_mul_func_uint8_t_u_u((((-4L) == g_19.f4) < p_30), (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((l_48 != g_5[2]), g_19.f0)), g_19.f2)), 255UL)), l_49)))))
    { 
        uint32_t l_59 = 0UL;
        int32_t l_65 = (-1L);
        if ((l_65 ^= func_50(l_49, (g_19.f2 | (safe_add_func_int8_t_s_s((g_60 = ((safe_sub_func_uint64_t_u_u(l_49, ((-7L) ^ l_59))) | 0x8A7CL)), 1L))), l_61, l_61)))
        { 
            uint32_t l_67 = 8UL;
            l_67--;
            g_70++;
        }
        else
        { 
            return l_65;
        }
        g_74++;
        g_77 = p_30;
    }
    else
    { 
        uint32_t l_78 = 0x26016E5DL;
        l_78--;
        --g_81;
    }
    return p_29;
}



static int32_t  func_50(int16_t  p_51, uint32_t  p_52, union U1  p_53, union U1  p_54)
{ 
    uint32_t l_64 = 0xC50754B4L;
    for (p_54.f0 = (-26); (p_54.f0 >= 30); ++p_54.f0)
    { 
        return l_64;
    }
    return p_53.f0;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f3, "g_19.f3", print_hash_value);
    transparent_crc(g_19.f4, "g_19.f4", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
