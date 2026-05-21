// SPDX-License-Identifier: MIT
// cctest_csmith_4478ccba.c --- cctest case csmith_4478ccba (csmith seed 1148767418)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xffc57aef */

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

// Options:   -s 1148767418 -o /tmp/csmith_gen_kyq25bxg/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int64_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

union U2 {
   uint64_t  f0;
   uint8_t  f1;
};

union U3 {
   uint32_t  f0;
   const uint32_t  f1;
   int32_t  f2;
   int16_t  f3;
};


static uint8_t g_4 = 0xB4L;
static uint16_t g_12 = 0xAB2BL;
static union U2 g_32[5][5][3] = {{{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}}},{{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}}},{{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}}},{{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}}},{{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}},{{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL},{0x1C911B6BEFC5446ELL}}}};
static int64_t g_44 = 0x6AC63FEC725EA9B8LL;
static struct S1 g_46 = {9UL,0xD83981A7L,1UL,0x942AL,0x35BD15A5L};
static uint32_t g_65 = 0xFB89B2A2L;
static int32_t g_73 = 6L;
static union U3 g_75[3] = {{9UL},{9UL},{9UL}};
static int16_t g_88 = 0L;
static const struct S0 g_102 = {0xB17DL,3UL,4294967295UL,0x8FF0B4F352AAD8DCLL};
static uint32_t g_174 = 0xDEAF15A9L;
static int16_t g_194 = 0xC019L;
static struct S1 g_220 = {4294967295UL,0xE3016BB0L,0xC63E1A42L,65535UL,4294967292UL};
static int32_t g_231[1][5][5] = {{{0x7B4A2E47L,0xE07EB25AL,0L,0L,0xE07EB25AL},{0xE07EB25AL,0x1EDC45B8L,0x7B4A2E47L,0xE07EB25AL,0L},{(-2L),0xE07EB25AL,1L,0xE07EB25AL,(-2L)},{0x7B4A2E47L,0x7275740AL,0x1EDC45B8L,0L,0x7275740AL},{(-2L),0x1EDC45B8L,0x1EDC45B8L,(-2L),0L}}};
static int16_t g_232 = 0xEBFFL;
static uint32_t g_264 = 0xD88AFD82L;
static int64_t g_337 = (-1L);
static uint32_t g_346 = 0x58029260L;
static uint64_t g_364 = 18446744073709551615UL;
static uint32_t g_375 = 0x60920112L;



static union U2  func_1(void);
static int32_t  func_2(uint32_t  p_3);
static union U3  func_17(const uint32_t  p_18, int32_t  p_19, union U2  p_20, int32_t  p_21, int32_t  p_22);
static union U2  func_23(struct S0  p_24, int32_t  p_25);




static union U2  func_1(void)
{ 
    uint32_t l_347[3][3] = {{0xC1D8947DL,0xC1D8947DL,0x2DCA83EEL},{0xC1D8947DL,0xC1D8947DL,0x2DCA83EEL},{0xC1D8947DL,0xC1D8947DL,0x2DCA83EEL}};
    int32_t l_352 = 0xC3FD210DL;
    uint32_t l_365 = 0x98A50781L;
    union U2 l_379 = {3UL};
    int32_t l_409 = 0x4DE0FEB4L;
    int32_t l_410 = 1L;
    int32_t l_414 = 0xDD302424L;
    int32_t l_415 = 0xB42ED20DL;
    int32_t l_416 = 0xC3AA4988L;
    int i, j;
    g_346 ^= func_2((g_4--));
    if ((((((l_347[2][1] | (l_352 = (safe_mod_func_uint16_t_u_u((g_12--), g_46.f4)))) >= (g_346 = (g_220.f0 = (safe_add_func_uint8_t_u_u(g_75[2].f2, (safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((!(safe_lshift_func_int16_t_s_s((((g_364 ^= 0xB13ED26C3D5AC0A1LL) < 0x414D2B7C5AFDBD77LL) == g_46.f2), l_365))), g_73)), g_75[2].f2)) >= l_365), g_194))))))) & g_75[2].f2) < l_347[1][1]) | g_220.f4))
    { 
        uint64_t l_376 = 0x3AF9471E4B83D750LL;
        for (g_264 = 15; (g_264 == 18); ++g_264)
        { 
            int16_t l_374 = 0x4928L;
            g_46 = g_46;
            if ((((g_364 = (((((g_375 &= (0x44L || ((g_220.f3 = (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x792CL, (g_75[2] , g_4))), l_374))) >= 0x4F25L))) & g_220.f4) || l_374) <= g_194) || 0x373DL)) , g_4) == l_365))
            { 
                l_376++;
                return l_379;
            }
            else
            { 
                union U2 l_380 = {18446744073709551615UL};
                return l_380;
            }
        }
    }
    else
    { 
        uint32_t l_394 = 0x3A08310EL;
        union U2 l_395 = {0xD41A894548E907C6LL};
        int32_t l_403[3][5] = {{7L,7L,0xAE3CA7A2L,7L,7L},{0xC9098E91L,0xD7E87CBEL,0xC9098E91L,0xC9098E91L,0xD7E87CBEL},{7L,0x0572C180L,0x0572C180L,7L,0x0572C180L}};
        uint32_t l_417 = 0xFA6C644FL;
        int i, j;
        for (l_352 = 4; (l_352 == 13); l_352 = safe_add_func_int8_t_s_s(l_352, 9))
        { 
            if (l_352)
                break;
            g_73 ^= g_264;
        }
        if ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((((g_75[2].f0 , (safe_rshift_func_uint8_t_u_s(g_232, 3))) , ((safe_div_func_uint8_t_u_u((0xA617L < (!(((safe_sub_func_int32_t_s_s((l_365 != 0x528E9F85E873ECC4LL), l_394)) | l_347[2][1]) | l_394))), 0xB2L)) | l_394)) != 0xE0D6L), 1L)), l_347[2][1])))
        { 
            return l_395;
        }
        else
        { 
            int16_t l_398 = 0L;
            int32_t l_407 = (-1L);
            int32_t l_408 = 0x5F70616CL;
            int32_t l_411 = 0x78061336L;
            int32_t l_412 = 0x835A2544L;
            int32_t l_413 = (-9L);
            l_398 = (safe_lshift_func_uint16_t_u_s(g_65, 9));
            for (l_395.f1 = 0; (l_395.f1 < 45); l_395.f1++)
            { 
                uint32_t l_404 = 0xECD880B4L;
                g_73 = g_12;
                g_231[0][0][4] = ((safe_lshift_func_uint8_t_u_s(l_398, 2)) != l_379.f0);
                l_404++;
            }
            l_417--;
        }
        l_410 = (g_75[2] , g_264);
    }
    return g_32[1][0][0];
}



static int32_t  func_2(uint32_t  p_3)
{ 
    struct S0 l_7[5][1] = {{{0x7346L,0UL,4294967286UL,0L}},{{1L,18446744073709551608UL,0x79253A34L,0x865B49D585ED0657LL}},{{0x7346L,0UL,4294967286UL,0L}},{{1L,18446744073709551608UL,0x79253A34L,0x865B49D585ED0657LL}},{{0x7346L,0UL,4294967286UL,0L}}};
    int32_t l_8 = 2L;
    int32_t l_9[1][5][2];
    union U2 l_30 = {18446744073709551615UL};
    int8_t l_55[3];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_9[i][j][k] = (-4L);
        }
    }
    for (i = 0; i < 3; i++)
        l_55[i] = 1L;
    for (p_3 = 0; (p_3 <= 0); p_3 += 1)
    { 
        uint32_t l_10 = 0x6EA3DE81L;
        int8_t l_31 = 0L;
        l_8 = g_4;
        l_9[0][2][1] = p_3;
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            uint64_t l_11 = 1UL;
            int32_t l_15 = 9L;
            l_10 ^= (g_4 == g_4);
            for (l_8 = 0; (l_8 >= 0); l_8 -= 1)
            { 
                if (l_11)
                    break;
                if (g_4)
                    continue;
                ++g_12;
            }
            l_15 ^= (-6L);
        }
        for (l_8 = 0; (l_8 <= 0); l_8 += 1)
        { 
            int64_t l_16[1][4] = {{(-1L),(-1L),(-1L),(-1L)}};
            int32_t l_345 = 0x0B7F6C10L;
            int i, j;
            l_16[0][0] |= g_12;
            for (g_4 = 0; (g_4 <= 0); g_4 += 1)
            { 
                int i, j;
            }
        }
    }
    return g_231[0][4][1];
}



static union U3  func_17(const uint32_t  p_18, int32_t  p_19, union U2  p_20, int32_t  p_21, int32_t  p_22)
{ 
    uint32_t l_63 = 0UL;
    struct S1 l_85 = {4294967286UL,5L,0x0D747CD2L,7UL,0x556C3ABCL};
    struct S0 l_160[3][4] = {{{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L}},{{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L}},{{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L},{0L,0xBF6C956EL,0x2FDC879AL,-5L}}};
    union U3 l_163 = {0UL};
    int32_t l_171[5] = {1L,1L,1L,1L,1L};
    int64_t l_187[3][2][1] = {{{8L},{(-9L)}},{{8L},{(-9L)}},{{8L},{(-9L)}}};
    uint64_t l_192 = 0UL;
    int32_t l_235 = 0x7F5B4925L;
    int32_t l_238 = 0xA2FD7D86L;
    uint32_t l_317 = 18446744073709551606UL;
    uint64_t l_336 = 18446744073709551613UL;
    int i, j, k;
    if (p_22)
    { 
        int8_t l_62 = 1L;
        int32_t l_64 = (-8L);
        uint64_t l_97[5] = {0x975FB2DAB2D383E8LL,0x975FB2DAB2D383E8LL,0x975FB2DAB2D383E8LL,0x975FB2DAB2D383E8LL,0x975FB2DAB2D383E8LL};
        uint32_t l_125 = 18446744073709551615UL;
        int i;
        l_63 = ((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_20.f0, p_19)) && (safe_lshift_func_uint8_t_u_s(g_46.f0, (p_20.f0 & l_62)))), p_18)) || 251UL) & l_62) , 0L);
        for (g_46.f4 = 0; (g_46.f4 <= 2); g_46.f4 += 1)
        { 
            --g_65;
            for (l_64 = 0; (l_64 <= 2); l_64 += 1)
            { 
                uint16_t l_68 = 0xC877L;
                int32_t l_74 = 1L;
                g_73 = ((l_68 & l_63) != ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_18 >= (-9L)), 5)), g_46.f4)) == (-1L)));
                l_74 = g_44;
                if (l_68)
                    break;
            }
            for (p_20.f1 = 0; (p_20.f1 <= 2); p_20.f1 += 1)
            { 
                if (g_4)
                    break;
            }
        }
        if ((0UL <= (g_75[2] , l_63)))
        { 
            union U3 l_86 = {3UL};
            struct S0 l_105 = {0xCF38L,0x8DD50FD9L,0xBFE20E5FL,4L};
            uint8_t l_113 = 0x9DL;
lbl_98:
            if (((l_63 && (g_75[2].f2 |= (+((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((g_73 |= (safe_sub_func_uint16_t_u_u((p_18 , ((((l_64 ^ (safe_div_func_int16_t_s_s((-2L), p_21))) ^ 5UL) & g_46.f3) < p_20.f1)), p_21))), p_19)) , l_64), p_18)) | (-10L))))) & l_63))
            { 
                int32_t l_87 = 0xB24E923EL;
                l_85 = g_46;
                p_22 = (l_86 , ((l_87 | (g_88 = g_46.f2)) , l_87));
                if (g_46.f2)
                    goto lbl_98;
            }
            else
            { 
                uint16_t l_94 = 0x1337L;
                l_64 |= (safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((~p_19) <= (g_73 = ((0xED46L || ((0x1750CCDA4A6FB27ALL > (((l_86 , g_4) & p_19) > l_85.f3)) <= p_20.f1)) ^ (-1L)))) < 0xC9L) == l_85.f1), l_94)), 0xCFL));
                g_73 = (((((l_64 |= p_22) <= g_75[2].f3) & (g_44 ^= ((safe_sub_func_int8_t_s_s(1L, (g_46.f0 & g_73))) < 8L))) < p_20.f1) == p_20.f1);
                l_97[1] = (-1L);
            }
            for (g_46.f0 = 0; (g_46.f0 != 56); g_46.f0 = safe_add_func_int16_t_s_s(g_46.f0, 2))
            { 
                l_64 = g_46.f1;
                p_22 = (((((!g_4) <= (g_102 , (g_75[2].f3 |= ((safe_mod_func_uint16_t_u_u((l_105 , ((g_88 = p_19) && 65535UL)), 8UL)) <= p_18)))) , 1L) != g_65) > g_46.f2);
            }
            p_19 ^= (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((p_20.f1 , (func_23(l_105, (((!((safe_mod_func_int32_t_s_s(((l_113 , (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((g_46.f3 = ((((safe_sub_func_int16_t_s_s((+(safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((g_102 , 0L), g_46.f2)), 0x7B682B91L))), 0xD201L)) , l_105.f0) != 0x96BE4A3EL) , 0xF918L)) || l_97[4]), g_75[2].f3)) || g_102.f0), p_20.f1))) && l_105.f2), p_22)) <= l_125)) == g_12) & p_21)) , l_64)), l_86.f3)), g_102.f3));
        }
        else
        { 
            uint32_t l_167[3];
            int32_t l_170 = 0xF3B2C594L;
            int32_t l_172 = (-7L);
            int i;
            for (i = 0; i < 3; i++)
                l_167[i] = 0xA170B35BL;
            g_75[2].f2 &= (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(g_46.f1, (g_46.f1 , (safe_mul_func_uint16_t_u_u(0x8204L, ((255UL == g_102.f2) & g_46.f1)))))), 0x8AL));
            for (g_44 = 16; (g_44 <= (-17)); g_44--)
            { 
                p_22 &= (safe_unary_minus_func_int16_t_s(((((safe_add_func_uint32_t_u_u((l_64 &= ((safe_sub_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_46.f3 >= ((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((g_75[2].f0--) <= (g_46.f1 != p_20.f1)), (safe_mul_func_int16_t_s_s(g_65, 0x71B2L)))), g_46.f3)) ^ 0x7DC8F0C8L)), l_97[1])), 1L)) == g_102.f3), (-4L))) , g_44)), p_20.f1)) < g_4) == p_18) ^ 0x8D086120L)));
            }
            if ((0x504DL > ((l_64 = (safe_rshift_func_int16_t_s_s(p_20.f1, 3))) > (safe_mod_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(p_20.f1, 15)) >= (~((g_88 = (p_20.f1 , g_46.f0)) != 1UL))) <= 65535UL) > 0x946DB040L) || 4UL), g_75[2].f0)))))
            { 
                g_73 = (safe_div_func_int8_t_s_s(((l_160[0][1] , (safe_rshift_func_int16_t_s_s((g_88 = (l_163 , ((((l_85.f3 > (safe_mul_func_int16_t_s_s(((l_62 != l_85.f4) == g_4), p_20.f1))) != 4294967295UL) | g_44) || 4294967286UL))), 12))) & p_21), p_19));
            }
            else
            { 
                int64_t l_166[2][3][2] = {{{(-6L),(-6L)},{(-6L),(-1L)},{0x7C410A6EAA2CC396LL,0x23A43FDB6C3E7DB0LL}},{{(-1L),0x23A43FDB6C3E7DB0LL},{0x7C410A6EAA2CC396LL,(-1L)},{(-6L),(-6L)}}};
                int32_t l_173 = 0x67525A2BL;
                int i, j, k;
                --l_167[1];
                ++g_174;
            }
        }
    }
    else
    { 
        struct S1 l_179 = {5UL,-9L,0UL,65534UL,0UL};
        int32_t l_193[3][3][1] = {{{0x20AC4CADL},{(-8L)},{0x20AC4CADL}},{{(-8L)},{0x20AC4CADL},{(-8L)}},{{0x20AC4CADL},{(-8L)},{0x20AC4CADL}}};
        int8_t l_207 = 0xC4L;
        uint32_t l_209 = 0xD0201380L;
        int8_t l_236 = 0xF6L;
        uint8_t l_239 = 0xCAL;
        int32_t l_259[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_259[i] = 0xD5BE5818L;
lbl_199:
        if (p_20.f0)
        { 
lbl_244:
            for (l_163.f3 = (-3); (l_163.f3 < (-15)); l_163.f3 = safe_sub_func_int8_t_s_s(l_163.f3, 4))
            { 
                l_85 = l_179;
            }
        }
        else
        { 
            uint64_t l_182 = 1UL;
            int32_t l_188 = 7L;
            p_22 |= g_174;
            l_179 = g_46;
            l_188 &= ((safe_mul_func_int16_t_s_s(((9UL | (((p_20.f0 || (l_182 , (safe_sub_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((l_179 , 1L), g_46.f3)) , g_73) ^ 0x4324L), l_160[0][1].f2)))) || l_187[0][0][0]) != g_46.f3)) <= g_88), 0x684DL)) < 0L);
        }
        if (g_46.f0)
        { 
            uint32_t l_189 = 4294967288UL;
            int32_t l_195 = (-1L);
            int32_t l_210[3][3][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_210[i][j][k] = 0x3635EDB8L;
                }
            }
            l_189 |= (-9L);
            if ((safe_add_func_int64_t_s_s(l_189, (l_192 = l_189))))
            { 
                uint64_t l_196 = 0x3ED77FB83B52146CLL;
                --l_196;
                if (l_179.f3)
                    goto lbl_199;
            }
            else
            { 
                int16_t l_202 = 0x44B3L;
                int32_t l_208 = 0xC6A1E28AL;
                int32_t l_219 = 1L;
                l_210[1][2][0] ^= (0xD8A3B9CDL > ((((l_195 = (l_171[3] ^= ((((((l_209 = ((((safe_add_func_uint32_t_u_u((l_202 = 0x2706B0FEL), p_18)) <= (safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_u(((func_23(g_102, l_207) , g_174) | l_208), 1))))))) || p_20.f1) && p_18)) != p_20.f1) <= l_195) | p_19) ^ l_195) >= 0x0FL))) != g_75[2].f1) || g_88) , g_46.f4));
                g_73 ^= ((((l_210[1][2][0] = (safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0xADL, (safe_sub_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(g_102.f2, (l_193[0][2][0] = l_208))) == 0L) == p_20.f1), 0x35L)))) != g_12) & 0x0ABA4FA0E64833E0LL), p_19))) > p_20.f0) && p_20.f1) == l_219);
                g_220 = g_46;
            }
        }
        else
        { 
            uint32_t l_222 = 0x4851BE00L;
            int32_t l_227[1][2];
            struct S1 l_242[5] = {{0x3395F33AL,-9L,0xA39DDDDFL,65531UL,4294967295UL},{0x3395F33AL,-9L,0xA39DDDDFL,65531UL,4294967295UL},{0x3395F33AL,-9L,0xA39DDDDFL,65531UL,4294967295UL},{0x3395F33AL,-9L,0xA39DDDDFL,65531UL,4294967295UL},{0x3395F33AL,-9L,0xA39DDDDFL,65531UL,4294967295UL}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_227[i][j] = 2L;
            }
            if (((-4L) | (l_163.f2 = (0xA073L < l_179.f3))))
            { 
                int16_t l_221 = 0xD01FL;
                l_222--;
                l_227[0][1] &= (((l_163.f2 = (~((((!18446744073709551615UL) , g_46) , p_20.f0) >= (p_19 == l_222)))) != p_19) | g_46.f4);
            }
            else
            { 
                return g_75[2];
            }
            l_227[0][0] = g_75[2].f0;
            for (g_65 = 0; (g_65 != 31); g_65 = safe_add_func_uint16_t_u_u(g_65, 1))
            { 
                int32_t l_230[3];
                int16_t l_233 = 0xA311L;
                int32_t l_234 = 0L;
                int8_t l_237 = 0x0AL;
                int i;
                for (i = 0; i < 3; i++)
                    l_230[i] = 0x1841E320L;
                l_193[2][1][0] &= p_19;
                ++l_239;
                l_242[0] = g_46;
            }
        }
        for (g_46.f1 = 0; (g_46.f1 <= 2); g_46.f1 += 1)
        { 
            int8_t l_250 = 1L;
            struct S1 l_276 = {4294967294UL,0x5DB1F9F6L,0xFAA2CB44L,0x2E45L,0UL};
            p_19 ^= p_20.f1;
            if (l_179.f3)
            { 
                struct S0 l_243 = {0x1662L,1UL,6UL,-5L};
                l_243 = (l_160[2][2] = l_160[1][0]);
                if (g_12)
                    goto lbl_244;
            }
            else
            { 
                int16_t l_258[3][1][4];
                int32_t l_275 = 0xEC74FFF7L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_258[i][j][k] = 0xAFEDL;
                    }
                }
                l_259[0] = (((!(safe_add_func_int64_t_s_s(g_102.f3, (safe_add_func_uint16_t_u_u((g_12--), (safe_sub_func_int64_t_s_s(0xC0EE888F001C752FLL, 18446744073709551615UL))))))) , ((safe_add_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s((((l_193[0][1][0] ^= p_22) | l_258[2][0][0]) < l_239))) > 7UL), l_238)) , 18446744073709551615UL)) < 0L);
                p_19 = (safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(((g_264++) < (safe_mod_func_uint8_t_u_u(g_194, ((safe_sub_func_int32_t_s_s(((~(g_232 > (safe_div_func_uint32_t_u_u((l_275 = ((~65534UL) || g_220.f1)), g_232)))) == 0x0DAA97D915561DD0LL), g_194)) ^ p_22)))), g_12)) & l_85.f3), g_73));
                g_220 = l_276;
            }
            for (p_20.f0 = 0; (p_20.f0 <= 2); p_20.f0 += 1)
            { 
                return g_75[2];
            }
        }
    }
    if (((g_102 , (((((p_21 , (l_238 = (!(safe_div_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u((((l_171[1] &= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((-1L))), (0x31D93221E11CBF97LL != l_238)))) <= l_235) , g_231[0][2][0]), g_220.f1)) , l_85.f0) && p_20.f1), l_235))))) , g_4) && p_19) , 0x6B01L) & (-5L))) && 1UL))
    { 
        int8_t l_296 = 0xD7L;
        int32_t l_297 = 0xA64C937BL;
        l_297 = (~(((p_22 >= ((((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u((l_85.f0 || (255UL || ((safe_mul_func_uint16_t_u_u(65535UL, 0xB0B1L)) > 1UL))), 0xD0A982E34CCA1ABCLL)), p_22)) != g_194) , 18446744073709551608UL) < l_296), p_20.f1)), l_187[0][0][0])) >= p_19) != l_163.f3) >= g_102.f1)) <= 0xDAL) == 0x1197L));
    }
    else
    { 
        int32_t l_300 = 0x2BF600C5L;
        int32_t l_301[3][2][5] = {{{(-1L),0x2862EAA7L,0x17132434L,0x17132434L,0x2862EAA7L},{(-3L),8L,(-1L),(-1L),8L}},{{(-1L),0x2862EAA7L,0x17132434L,0x17132434L,0x2862EAA7L},{(-3L),8L,(-1L),(-1L),8L}},{{(-1L),0x2862EAA7L,0x17132434L,0x17132434L,0x2862EAA7L},{(-3L),8L,(-1L),(-1L),8L}}};
        uint64_t l_314 = 1UL;
        struct S1 l_320 = {0xBC8424BEL,0xB7B60389L,6UL,65531UL,4294967295UL};
        int32_t l_335 = (-2L);
        int i, j, k;
        if (((safe_add_func_int8_t_s_s(0x48L, (g_220.f0 != l_300))) >= ((((l_301[2][0][0] = p_22) ^ g_102.f2) != g_44) > p_19)))
        { 
            for (p_20.f0 = (-17); (p_20.f0 != 19); p_20.f0++)
            { 
                if (g_102.f3)
                    break;
                g_231[0][3][4] &= (~0x7FL);
            }
        }
        else
        { 
            uint8_t l_306[4][1] = {{2UL},{254UL},{2UL},{254UL}};
            int32_t l_307 = 1L;
            int32_t l_308[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_308[i] = 0x3CE19016L;
            if ((((0xC2L >= (253UL & (l_306[0][0] |= (+(l_63 && p_20.f1))))) != l_307) > p_21))
            { 
                int32_t l_309 = 0xB4E15A36L;
                int32_t l_310 = 0x25ED15D5L;
                int32_t l_311 = 5L;
                int32_t l_312 = 9L;
                int32_t l_313[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_313[i] = 0xF63ACA23L;
                --l_314;
                --l_317;
                l_320 = l_85;
            }
            else
            { 
                uint64_t l_334 = 18446744073709551615UL;
                g_231[0][1][2] ^= ((safe_mul_func_int16_t_s_s(p_20.f1, (safe_mul_func_uint8_t_u_u((18446744073709551608UL < (((g_220.f0 < (~((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_18, l_334)) == l_308[1]), l_335)) & 0UL))) ^ p_19) >= l_336)), g_220.f0)))) && 0xBFL);
            }
        }
    }
    return l_163;
}



static union U2  func_23(struct S0  p_24, int32_t  p_25)
{ 
    const union U2 l_41 = {0UL};
    struct S0 l_53 = {0x8015L,5UL,0UL,1L};
    for (p_24.f1 = 0; (p_24.f1 <= 2); p_24.f1 += 1)
    { 
        uint64_t l_38[1][5];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_38[i][j] = 0xE9518344157F02CALL;
        }
        for (p_24.f0 = 0; (p_24.f0 <= 2); p_24.f0 += 1)
        { 
            uint32_t l_33 = 0x0EB5CFE7L;
            l_33++;
            for (g_12 = 0; (g_12 <= 2); g_12 += 1)
            { 
                int i, j, k;
                return g_32[p_24.f0][p_24.f0][g_12];
            }
        }
        for (p_24.f3 = 2; (p_24.f3 >= 0); p_24.f3 -= 1)
        { 
            uint16_t l_42[5][3] = {{0x142BL,0x142BL,0x142BL},{0UL,0xAEFFL,0UL},{0x142BL,0x142BL,0x142BL},{0UL,0xAEFFL,0UL},{0x142BL,0x142BL,0x142BL}};
            int32_t l_43 = 0xBEBC4FF0L;
            int i, j;
            l_42[1][1] &= ((safe_lshift_func_uint16_t_u_s((l_38[0][3] == (-8L)), (((((p_24.f1 > ((l_41 , 0x823142ACL) ^ 0x9C99C4DBL)) && g_4) || g_4) >= 0L) != l_38[0][3]))) && p_24.f0);
            for (p_24.f2 = 0; (p_24.f2 <= 2); p_24.f2 += 1)
            { 
                struct S1 l_45[4] = {{4294967290UL,-1L,4294967290UL,0x684CL,0x74835F01L},{4294967290UL,-1L,4294967290UL,0x684CL,0x74835F01L},{4294967290UL,-1L,4294967290UL,0x684CL,0x74835F01L},{4294967290UL,-1L,4294967290UL,0x684CL,0x74835F01L}};
                int i;
                g_44 = ((l_43 = ((g_12 & (1L == ((l_41.f0 == (((l_38[0][3] | p_24.f0) ^ 0x3419109783D71515LL) != g_12)) == g_4))) ^ l_38[0][2])) , (-1L));
                g_46 = l_45[1];
            }
        }
    }
    p_25 ^= (safe_lshift_func_uint16_t_u_s(p_24.f0, 2));
    if (g_44)
    { 
        return l_41;
    }
    else
    { 
        struct S0 l_54 = {0xFF8CL,0UL,0xBA83BDBBL,-1L};
        for (g_46.f4 = 22; (g_46.f4 < 11); g_46.f4--)
        { 
            if (g_12)
                break;
            for (g_12 = 0; g_12 < 5; g_12 += 1)
            {
                for (g_44 = 0; g_44 < 5; g_44 += 1)
                {
                    for (g_46.f0 = 0; g_46.f0 < 3; g_46.f0 += 1)
                    {
                        union U2 tmp = {18446744073709551614UL};
                        g_32[g_12][g_44][g_46.f0] = tmp;
                    }
                }
            }
            for (p_24.f2 = 0; (p_24.f2 > 50); p_24.f2 = safe_add_func_uint16_t_u_u(p_24.f2, 8))
            { 
                l_54 = l_53;
            }
        }
    }
    return l_41;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_32[i][j][k].f0, "g_32[i][j][k].f0", print_hash_value);
                transparent_crc(g_32[i][j][k].f1, "g_32[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
    transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
    transparent_crc(g_46.f4, "g_46.f4", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_75[i].f0, "g_75[i].f0", print_hash_value);
        transparent_crc(g_75[i].f1, "g_75[i].f1", print_hash_value);
        transparent_crc(g_75[i].f2, "g_75[i].f2", print_hash_value);
        transparent_crc(g_75[i].f3, "g_75[i].f3", print_hash_value);

    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_102.f2, "g_102.f2", print_hash_value);
    transparent_crc(g_102.f3, "g_102.f3", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    transparent_crc(g_220.f4, "g_220.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_231[i][j][k], "g_231[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
