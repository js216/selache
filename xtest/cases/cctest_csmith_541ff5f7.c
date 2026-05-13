// SPDX-License-Identifier: MIT
// cctest_csmith_541ff5f7.c --- cctest case csmith_541ff5f7 (csmith seed 1411380727)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc437129b */

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

// Options:   -s 1411380727 -o /tmp/csmith_gen_houjoxtt/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int8_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   const uint32_t  f0;
   int16_t  f1;
};

union U2 {
   int64_t  f0;
   int64_t  f1;
};

union U3 {
   int32_t  f0;
};


static int32_t g_4[4][1][5] = {{{0L,0x0A29822CL,0L,0xE3869393L,0x0A29822CL}},{{0L,(-1L),0xE3869393L,0L,0xE3869393L}},{{0L,0L,0x15CBCEF0L,0x0A29822CL,0xE9323D1BL}},{{0L,0xE9323D1BL,0xE3869393L,0xE3869393L,0xE9323D1BL}}};
static const union U3 g_17[2] = {{4L},{4L}};
static struct S0 g_25 = {8UL,0x5CL,4294967293UL};
static int32_t g_39 = 8L;
static int8_t g_41 = 1L;
static int8_t g_43 = (-1L);
static uint32_t g_44 = 0x675DAAFEL;
static int64_t g_71[3][5][2] = {{{0xD5E33AB57C19DE87LL,5L},{1L,0xD5E33AB57C19DE87LL},{0x770DDAD4DBF7CD62LL,0L},{0x770DDAD4DBF7CD62LL,0xD5E33AB57C19DE87LL},{1L,5L}},{{0xD5E33AB57C19DE87LL,(-6L)},{0x4B2487F0BBFFD320LL,0x905BEA6296EF6A07LL},{5L,0xEB874B34BCD0122BLL},{0xEB874B34BCD0122BLL,0xEB874B34BCD0122BLL},{5L,0x905BEA6296EF6A07LL}},{{0x4B2487F0BBFFD320LL,(-6L)},{0xD5E33AB57C19DE87LL,5L},{0x4B2487F0BBFFD320LL,0L},{0x905BEA6296EF6A07LL,0xFE2AA969AAE9A154LL},{0x905BEA6296EF6A07LL,0L}}};
static uint64_t g_72 = 0x998387B67A03D6E0LL;
static uint32_t g_85 = 0x4DB6C23AL;
static int16_t g_86 = 1L;
static uint8_t g_87 = 255UL;
static int16_t g_88 = 0x5809L;
static union U2 g_91 = {-1L};
static int64_t g_96 = 0xAD1D304E80792153LL;
static int64_t g_112 = 0x9B7F14100A9D4772LL;
static uint32_t g_115 = 0x32A9BCADL;
static uint16_t g_172[4] = {0x85F0L,0x85F0L,0x85F0L,0x85F0L};
static uint16_t g_177[3] = {65526UL,65526UL,65526UL};
static int8_t g_178 = 8L;
static uint16_t g_213 = 0x4622L;
static struct S0 g_215 = {18446744073709551615UL,0x63L,0xC0B0FB13L};
static int16_t g_250 = 0x1E34L;
static uint32_t g_275 = 4294967295UL;
static uint32_t g_276 = 0UL;
static uint32_t g_305 = 0xC5181D75L;



static struct S0  func_1(void);
static uint16_t  func_7(uint64_t  p_8, int8_t  p_9);
static uint32_t  func_10(union U3  p_11, uint8_t  p_12, const union U3  p_13, uint64_t  p_14, int32_t  p_15);
static uint64_t  func_21(union U3  p_22, struct S0  p_23, uint16_t  p_24);




static struct S0  func_1(void)
{ 
    int32_t l_3 = (-3L);
    union U3 l_16 = {0xEB8E136DL};
    struct S0 l_214 = {0xEA0DCDEAL,0xA2L,3UL};
    uint16_t l_263 = 0x4D3AL;
    int32_t l_322 = 0xE6F10A4FL;
    if ((~l_3))
    { 
        uint32_t l_18[1];
        int32_t l_201 = (-10L);
        union U2 l_207 = {0x25E921D82DD5B8F2LL};
        const int64_t l_249 = 0x90F6DC4C047494BALL;
        struct S0 l_252[3] = {{0xE0F49252L,1L,1UL},{0xE0F49252L,1L,1UL},{0xE0F49252L,1L,1UL}};
        int i;
        for (i = 0; i < 1; i++)
            l_18[i] = 4294967292UL;
        if (g_4[1][0][0])
        { 
            int64_t l_183 = 1L;
            int32_t l_202 = 1L;
            g_178 = (safe_lshift_func_uint16_t_u_u(func_7(((g_4[1][0][0] , (g_4[0][0][4] <= g_4[0][0][1])) | (g_86 = ((func_10(l_16, g_4[1][0][0], g_17[0], g_4[0][0][2], l_18[0]) , g_85) & l_18[0]))), l_3), l_3));
            for (l_16.f0 = 0; (l_16.f0 != (-9)); --l_16.f0)
            { 
                int16_t l_192 = (-5L);
                l_183 = (safe_rshift_func_uint16_t_u_u((g_177[1] = g_177[1]), 2));
                l_192 |= (safe_add_func_int64_t_s_s(((~l_18[0]) & ((!(safe_add_func_int16_t_s_s(l_18[0], (g_172[3] ^= (safe_mul_func_int32_t_s_s(g_96, ((g_112 & 0xAA89525BE5548FECLL) < g_177[0]))))))) <= l_183)), 0x7081A23FA78A7768LL));
            }
            l_202 = ((safe_add_func_int64_t_s_s(l_16.f0, (((safe_div_func_uint16_t_u_u(0x2C49L, (g_172[3] |= (safe_lshift_func_uint16_t_u_s((g_177[0] == ((l_201 = (((safe_add_func_int32_t_s_s(g_91.f1, l_183)) == g_177[0]) ^ 0x75C4L)) <= g_25.f0)), 12))))) < (-1L)) | g_41))) == g_41);
        }
        else
        { 
            int16_t l_238 = 0x6397L;
            int32_t l_247 = 0L;
            int32_t l_248 = 7L;
            for (g_25.f1 = 0; (g_25.f1 == 7); g_25.f1 = safe_add_func_uint32_t_u_u(g_25.f1, 4))
            { 
                const int8_t l_212 = 0x40L;
                int32_t l_251 = 0L;
                g_213 &= ((g_43 >= ((((((0x6C3BL == (l_207 , (((g_88 = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_212, g_43)), 15))) && 1L) >= 0xE5D0L))) , 1UL) == g_96) == 1L) ^ l_16.f0) <= 0xB1E9L)) || g_44);
                g_215 = l_214;
                l_251 |= (g_250 = (safe_add_func_uint8_t_u_u(((((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint64_t_u_u(18446744073709551615UL, ((l_3 < (l_248 &= (safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((l_238 == (l_247 = (((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_mod_func_uint8_t_u_u((g_87 || g_87), 0x80L)) != 0xE747864AL) < g_41) > 4294967294UL), l_18[0])), g_71[0][3][1])) ^ g_172[3]) > g_25.f1), l_238)) && g_86) & 1UL))) == l_238), l_18[0])), l_214.f1)), 3)) | l_16.f0), (-10L))) == l_214.f2), g_71[2][4][1])), 0L)), g_91.f0)))) == l_212))), l_212)) >= l_249), g_25.f2)) == 0xDBE4L) <= l_3) , 0UL), l_238)));
            }
            l_214 = l_252[0];
        }
    }
    else
    { 
        uint32_t l_254[5][5][4] = {{{3UL,7UL,5UL,4294967290UL},{0xFD5E33EDL,3UL,4294967295UL,0x4E35C125L},{0x25BA1AFDL,4294967292UL,0x25BA1AFDL,0x4E35C125L},{4294967295UL,3UL,0xFD5E33EDL,4294967290UL},{5UL,7UL,3UL,3UL}},{{0x8601B018L,0x8601B018L,3UL,0x25BA1AFDL},{5UL,0x1B27E7B4L,0xFD5E33EDL,7UL},{4294967295UL,0xFD5E33EDL,0x25BA1AFDL,0xFD5E33EDL},{0x25BA1AFDL,0xFD5E33EDL,4294967295UL,7UL},{0xFD5E33EDL,0x1B27E7B4L,5UL,0x25BA1AFDL}},{{3UL,0x8601B018L,0x8601B018L,3UL},{3UL,7UL,5UL,4294967290UL},{0xFD5E33EDL,3UL,4294967295UL,0x4E35C125L},{0x25BA1AFDL,4294967292UL,0x25BA1AFDL,0x4E35C125L},{4294967295UL,3UL,0xFD5E33EDL,4294967290UL}},{{5UL,7UL,3UL,3UL},{0x8601B018L,0x8601B018L,3UL,0x25BA1AFDL},{5UL,0x1B27E7B4L,0xFD5E33EDL,7UL},{4294967295UL,0xFD5E33EDL,0x25BA1AFDL,0xFD5E33EDL},{0x25BA1AFDL,0xFD5E33EDL,4294967295UL,7UL}},{{0xFD5E33EDL,0x1B27E7B4L,5UL,0x25BA1AFDL},{3UL,0x8601B018L,0x8601B018L,3UL},{3UL,7UL,5UL,4294967290UL},{0xFD5E33EDL,3UL,4294967295UL,0x4E35C125L},{0x25BA1AFDL,4294967292UL,0x25BA1AFDL,0x4E35C125L}}};
        int32_t l_261 = 0x5C57FDADL;
        uint32_t l_262[4][3] = {{0xA022452FL,0xA022452FL,0xA022452FL},{18446744073709551615UL,0UL,18446744073709551615UL},{0xA022452FL,0xA022452FL,0xA022452FL},{18446744073709551615UL,0UL,18446744073709551615UL}};
        int i, j, k;
        if ((l_263 = (~(((l_254[1][0][2] < (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(g_44, 0x5BA9L)) != (safe_div_func_uint16_t_u_u((l_261 = (0x3AL < l_214.f0)), l_3))), l_254[1][2][1]))) >= g_72) | l_262[2][1]))))
        { 
            uint64_t l_264 = 0xE24B3D24732960E5LL;
            g_275 = (l_264 , ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(g_88, 4)), (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_3, (safe_add_func_uint16_t_u_u(g_4[1][0][0], 65535UL)))), 1)))) & 0xBE73L));
            g_276++;
        }
        else
        { 
            struct S0 l_281 = {0x8BCB9B15L,0xCEL,3UL};
            for (g_43 = 0; (g_43 >= 21); g_43 = safe_add_func_uint16_t_u_u(g_43, 7))
            { 
                int32_t l_297 = 5L;
                l_261 ^= ((g_25 = l_281) , (((safe_add_func_uint32_t_u_u((l_281.f0 == (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((g_177[0] = (safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((0x22B1FF79L || (((+((safe_add_func_uint64_t_u_u(l_281.f1, 0x09D9FA94B1C12867LL)) > 0xC25C54F0L)) & (-6L)) & l_297)), 5)), l_281.f1)) > l_214.f1), 0xD949L))) || g_71[0][0][0]), g_4[1][0][3])), g_4[1][0][0]))), 0L)) >= g_91.f1) && 1UL));
            }
        }
    }
    g_305 &= ((l_214.f2 == ((+(l_214.f0 | l_263)) >= (safe_lshift_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s(l_16.f0, 7L)), 4L)) == g_112) , 0x5DL), 6)))) != l_214.f0);
    l_322 = (((l_263 | (safe_rshift_func_int8_t_s_u(((g_213 ^= g_25.f0) < g_25.f1), 0))) ^ (safe_mul_func_uint64_t_u_u((l_3 &= (safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_div_func_int32_t_s_s(g_91.f1, g_91.f1)) == (-1L)) , g_215.f2), g_172[3])), g_91.f1)), l_214.f2)) != g_305), g_25.f2)) & g_25.f2), l_214.f1))), 0L))) || (-1L));
    return l_214;
}



static uint16_t  func_7(uint64_t  p_8, int8_t  p_9)
{ 
    struct S0 l_100 = {0x44EF0715L,0xADL,0x6C8B9CA4L};
    int32_t l_113 = 0x1BA941DAL;
    union U2 l_171 = {0x13B53BB8E87DE450LL};
    int32_t l_173 = (-3L);
    if ((g_87 = 0L))
    { 
        int16_t l_99 = (-9L);
        int32_t l_108 = 0xB2B9DCA8L;
        int32_t l_110 = 0x1150147EL;
        int32_t l_142[3];
        int i;
        for (i = 0; i < 3; i++)
            l_142[i] = 7L;
        g_88 = p_9;
        if ((safe_add_func_int16_t_s_s((g_91 , ((safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((0x6BL > ((g_96 |= 0x8DC093C8L) || (safe_add_func_int32_t_s_s((l_99 >= 0xEE776C1F1C6DC0DCLL), p_8)))), 0xA71BL)), p_9)) != p_8)), g_71[2][4][0])))
        { 
            struct S0 l_101 = {0xEA8FD6C6L,-8L,0UL};
            uint16_t l_109 = 0x1476L;
            int32_t l_111 = 9L;
            int32_t l_114 = (-7L);
            l_101 = l_100;
            if ((safe_div_func_uint32_t_u_u(g_17[0].f0, ((l_110 = (l_109 = (safe_div_func_int8_t_s_s(((g_91 , (safe_lshift_func_uint16_t_u_s((l_108 = (0xAC8E6169L | (((g_91.f1 || g_71[2][4][0]) >= l_101.f2) , l_101.f2))), g_87))) || 0x07892551L), g_88)))) ^ 0xDCB7L))))
            { 
                int64_t l_133 = 0xFB1999DA2498811ELL;
                --g_115;
                l_133 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((l_113 ^= (safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint16_t_u_u(g_71[2][4][0], (safe_lshift_func_uint16_t_u_s(l_108, (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_8 || (((+p_8) == g_41) | p_8)), p_8)), 0xF0L)))))) <= g_17[0].f0) , g_71[2][0][1]) == g_88), 18446744073709551615UL))) > l_108) & l_108), p_8)), p_8));
            }
            else
            { 
                int16_t l_143[2][1][3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_143[i][j][k] = (-2L);
                    }
                }
                l_110 = ((l_111 &= (g_86 &= (((l_142[2] = (safe_add_func_int8_t_s_s((((l_108 = (l_113 |= (safe_sub_func_int32_t_s_s((((safe_add_func_uint64_t_u_u(l_110, (l_101.f0 <= (safe_add_func_uint16_t_u_u(65534UL, 65535UL))))) | 0x31BDL) >= (-7L)), 0x78CF1776L)))) >= 0xF27FL) , p_8), 0x94L))) , p_8) ^ l_143[1][0][0]))) != l_99);
            }
        }
        else
        { 
            int8_t l_144 = 7L;
            l_144 = 0xA867C81BL;
        }
    }
    else
    { 
        int64_t l_157 = (-1L);
        int32_t l_170 = 0xFED00A94L;
        for (g_44 = 13; (g_44 >= 56); ++g_44)
        { 
            int64_t l_153 = 0x009EE3F616C200A6LL;
            int32_t l_158 = 0xA747B883L;
            uint32_t l_169 = 1UL;
            for (g_115 = 0; (g_115 >= 38); g_115 = safe_add_func_int32_t_s_s(g_115, 1))
            { 
                uint32_t l_154 = 1UL;
                l_158 = ((safe_mul_func_uint16_t_u_u(((--g_72) == l_153), (0xDE0EBD96L > (((l_154 |= p_8) , (safe_mod_func_int16_t_s_s(0xA1B2L, g_25.f1))) && l_157)))) , g_91.f1);
            }
            for (l_100.f2 = 0; (l_100.f2 <= 34); l_100.f2++)
            { 
                l_173 |= (((((safe_mod_func_int8_t_s_s((safe_add_func_int64_t_s_s(g_43, (safe_sub_func_uint32_t_u_u(0UL, (((((safe_mul_func_int8_t_s_s((((l_170 = (l_113 = (l_153 < (l_169 <= g_43)))) , l_171) , g_115), g_172[3])) , g_91.f0) >= g_25.f1) < p_9) && 0xC6B3L))))), g_41)) & p_8) <= (-4L)) == g_71[2][4][0]) | g_25.f1);
            }
        }
    }
    l_100 = l_100;
    g_177[0] = (((g_87 = (safe_mod_func_int8_t_s_s(((l_100.f1 , l_173) , ((l_171 , ((((safe_unary_minus_func_uint8_t_u(l_171.f0)) > p_8) == 0x23L) & l_100.f0)) ^ g_4[1][0][0])), p_8))) ^ (-1L)) ^ g_44);
    return l_171.f0;
}



static uint32_t  func_10(union U3  p_11, uint8_t  p_12, const union U3  p_13, uint64_t  p_14, int32_t  p_15)
{ 
    int64_t l_34 = 0x069D1FE905687C41LL;
    int32_t l_35 = (-1L);
    int32_t l_74 = 0x5B987658L;
    struct S0 l_76 = {0x0794679FL,0x86L,4294967294UL};
    for (p_14 = 28; (p_14 == 19); p_14 = safe_sub_func_uint16_t_u_u(p_14, 4))
    { 
        const union U1 l_73 = {1UL};
        struct S0 l_75[1][4] = {{{0x4734A2D5L,0xABL,0x5697B4E6L},{0x4734A2D5L,0xABL,0x5697B4E6L},{0x4734A2D5L,0xABL,0x5697B4E6L},{0x4734A2D5L,0xABL,0x5697B4E6L}}};
        int i, j;
        l_74 &= ((func_21(p_11, g_25, (l_35 ^= (~(safe_lshift_func_uint16_t_u_s(((g_17[0].f0 == ((~((safe_lshift_func_int16_t_s_s((0x676BL ^ g_17[0].f0), l_34)) == 0UL)) >= p_14)) && l_34), 8))))) , l_73) , p_13.f0);
        l_76 = (g_25 = l_75[0][0]);
        for (g_41 = 0; (g_41 >= 0); g_41--)
        { 
            g_85 = (g_25.f1 | (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0xA8L, (p_12 = (safe_sub_func_int16_t_s_s(g_17[0].f0, ((g_71[2][4][0] = p_13.f0) >= g_72)))))), 0x2C72L)));
        }
    }
    return p_15;
}



static uint64_t  func_21(union U3  p_22, struct S0  p_23, uint16_t  p_24)
{ 
    int8_t l_38 = 0xE6L;
    int32_t l_42[3][1];
    union U2 l_51 = {0x4EE3B919D6B80F4BLL};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_42[i][j] = 0x3632CAC2L;
    }
    for (p_23.f2 = 15; (p_23.f2 < 1); --p_23.f2)
    { 
        int32_t l_40[5];
        const int32_t l_58[5][3] = {{(-1L),(-1L),0x29D3EAFCL},{(-7L),(-7L),0xB8686B46L},{(-1L),(-1L),0x29D3EAFCL},{(-7L),(-7L),0xB8686B46L},{(-1L),(-1L),0x29D3EAFCL}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_40[i] = 6L;
        l_42[1][0] = (((g_44++) && ((((safe_mod_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((((l_51 , (l_40[1] |= g_39)) != l_38) <= (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(5UL, 0x8616691CFE0C2DF1LL)) , 1L), p_23.f1)), p_22.f0))), l_58[4][2])) , l_40[3]), l_51.f0)) == (-1L)) >= g_43) < (-1L))) && p_23.f0);
    }
    g_72 |= ((safe_add_func_int32_t_s_s((g_71[2][4][0] |= (safe_sub_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((((l_42[1][0] = (p_23.f0 = (safe_mul_func_int16_t_s_s((((0x73CA56B74084DAEALL || ((safe_sub_func_uint8_t_u_u((p_23.f0 , (0L || (((safe_rshift_func_uint8_t_u_s(p_24, 6)) , 0x4262L) >= p_22.f0))), 0L)) && 0UL)) <= g_25.f0) , 0x0C60L), g_39)))) , 0x21DD8CACL) , 0x7DC7FB05L), l_51.f1)) && l_51.f1) & l_51.f1), p_22.f0))), 0x0A13E652L)) <= 18446744073709551615UL);
    return p_24;
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
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_17[i].f0, "g_17[i].f0", print_hash_value);

    }
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_71[i][j][k], "g_71[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);

    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
