// SPDX-License-Identifier: MIT
// cctest_csmith_f6a7692f.c --- cctest case csmith_f6a7692f (csmith seed 4138166575)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe657513f */
/* @exp_ticks 0x499d */

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

// Options:   -s 4138166575 -o /tmp/csmith_gen_fwavi1ug/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
};


static int32_t g_4 = 0xC8A6B950L;
static union U1 g_6 = {0x7CFAF425L};
static uint16_t g_49[4][4][5] = {{{0xDEF9L,0UL,0xD7FAL,0xFE44L,0UL},{65526UL,0xED16L,5UL,0x2E80L,0x6571L},{0x1273L,0UL,0xB496L,0xB496L,0UL},{0UL,5UL,0xA400L,0x918CL,0x0EC6L}},{{0UL,65526UL,65534UL,0x1273L,0xFE44L},{65527UL,0x2F2FL,0x6571L,0xED16L,1UL},{0UL,1UL,0xDEF9L,1UL,0UL},{0UL,65534UL,1UL,0x6571L,5UL}},{{0x1273L,0UL,0xB70CL,0xC946L,8UL},{65526UL,65527UL,65534UL,0x2F2FL,65526UL},{0UL,65526UL,65526UL,0UL,1UL},{65526UL,5UL,1UL,0x03F8L,1UL}},{{0xD7FAL,1UL,8UL,0UL,65534UL},{1UL,0UL,0x2E80L,0x03F8L,0x03F8L},{0UL,0xD7FAL,0UL,0UL,0xFE44L},{0UL,0xA400L,0UL,0x2F2FL,0x918CL}}};
static uint32_t g_64 = 18446744073709551611UL;
static uint32_t g_70[5] = {0xAE622E34L,0xAE622E34L,0xAE622E34L,0xAE622E34L,0xAE622E34L};
static struct S0 g_75 = {1L};
static uint16_t g_87 = 0x16B2L;
static int64_t g_104 = 0x06BB7C98E3433B3CLL;
static int16_t g_106[2] = {0xBCC7L,0xBCC7L};
static uint32_t g_111 = 4294967289UL;
static int16_t g_124 = (-1L);



static int8_t  func_1(void);
static int32_t  func_2(union U1  p_3);
static int8_t  func_10(uint16_t  p_11);
static uint32_t  func_14(struct S0  p_15, int64_t  p_16, int32_t  p_17, int64_t  p_18, uint8_t  p_19);




static int8_t  func_1(void)
{ 
    uint8_t l_5[3][5] = {{0x25L,0x65L,0x65L,0x25L,248UL},{0x25L,0x65L,0x65L,0x25L,248UL},{0x25L,0x65L,0x65L,0x25L,248UL}};
    uint64_t l_153 = 0UL;
    int i, j;
    l_153 = func_2(((g_4 | ((l_5[1][4] > l_5[1][1]) >= g_4)) , g_6));
    return l_153;
}



static int32_t  func_2(union U1  p_3)
{ 
    int16_t l_7 = 0L;
    int32_t l_13 = 0xADF29855L;
    int32_t l_71 = 8L;
    int32_t l_88[5][5][2] = {{{(-6L),2L},{2L,5L},{2L,2L},{(-6L),1L},{2L,(-6L)}},{{2L,1L},{(-6L),2L},{2L,5L},{2L,2L},{(-6L),1L}},{{2L,(-6L)},{2L,1L},{(-6L),2L},{2L,5L},{2L,2L}},{{(-6L),1L},{2L,(-6L)},{2L,1L},{(-6L),2L},{2L,5L}},{{2L,2L},{(-6L),1L},{2L,(-6L)},{2L,1L},{(-6L),2L}}};
    int16_t l_105 = 0x8ADBL;
    struct S0 l_123 = {-5L};
    struct S0 l_129 = {0x1C0895ADL};
    uint8_t l_150[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_150[i] = 0x50L;
    if (l_7)
    { 
        int16_t l_12 = 0x49A2L;
        struct S0 l_20 = {0xEB2D3650L};
        int32_t l_77 = 0x37E6EF1FL;
        l_77 = (safe_mod_func_int16_t_s_s((func_10((((l_12 || ((((l_13 <= p_3.f0) >= (((((func_14(l_20, p_3.f0, p_3.f0, p_3.f0, l_7) , l_71) || g_64) , g_4) , l_12) || g_49[0][3][2])) && p_3.f0) , p_3.f0)) & l_7) & 1UL)) < l_12), 7UL));
        g_4 = (l_20 , (l_77 ^= (((((g_6 , ((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(p_3.f0, 3)) | g_6.f0), 0x98C5L)), g_49[1][1][2])) , l_20.f0)) == 1L) , p_3.f0) != p_3.f0) , p_3.f0)));
    }
    else
    { 
        int32_t l_86[1];
        int32_t l_89 = 0x1D1409FAL;
        uint16_t l_96[4] = {1UL,1UL,1UL,1UL};
        int32_t l_109 = 0x1E3A2289L;
        int i;
        for (i = 0; i < 1; i++)
            l_86[i] = 1L;
        if (((safe_sub_func_int64_t_s_s((l_88[2][3][0] &= ((0xC178L && (g_49[2][2][3] &= ((l_86[0] = 0L) & (l_13 ^= (g_87 ^= g_70[3]))))) == (0L || 0x4BL))), g_70[0])) >= l_89))
        { 
            uint64_t l_107 = 0xA6A6FFDE101195FDLL;
            for (l_13 = 4; (l_13 >= 1); l_13 -= 1)
            { 
                int64_t l_108 = 0L;
                int32_t l_110[3][3] = {{0L,0L,0L},{0x348BD332L,(-1L),0x348BD332L},{0L,0L,0L}};
                int i, j;
                l_88[2][3][0] = (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(g_75.f0, ((((l_96[0] , ((safe_div_func_int8_t_s_s((~(safe_mul_func_uint16_t_u_u(((((((((((g_106[1] = (safe_div_func_int16_t_s_s((g_104 = (-7L)), (l_105 , 0x8E9FL)))) == g_70[0]) ^ l_107) ^ p_3.f0) | 0x42L) <= g_75.f0) && g_106[0]) | 0x96L) < (-1L)) >= p_3.f0), l_108))), l_96[3])) || l_108)) , l_107) > g_75.f0) != 4UL))), p_3.f0)), 0xD1L));
                g_111--;
            }
            g_4 ^= (l_89 >= (((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((l_88[2][3][0] = (safe_rshift_func_uint8_t_u_u(0xF4L, 1))), ((0L != 0x09L) <= 0xF0F84FEBL))) > 0xBEA04750L), g_49[2][0][0])) , (-1L)) || g_75.f0));
            return g_75.f0;
        }
        else
        { 
            int16_t l_120 = 0xA938L;
            return l_120;
        }
    }
    for (l_71 = 18; (l_71 == (-13)); --l_71)
    { 
        uint64_t l_127 = 1UL;
        for (g_64 = 0; (g_64 <= 3); g_64 += 1)
        { 
            struct S0 l_128 = {0x3D57EAC7L};
            g_75 = l_123;
            for (l_13 = 0; (l_13 <= 1); l_13 += 1)
            { 
                int i, j, k;
                l_88[(l_13 + 1)][(l_13 + 2)][l_13] = (((g_124 |= g_49[g_64][g_64][g_64]) >= ((g_104 ^= l_88[g_64][(g_64 + 1)][l_13]) , (0x5681L || (g_106[1] = (l_88[l_13][(l_13 + 2)][l_13] == (-1L)))))) > l_127);
                if (l_88[(l_13 + 1)][(l_13 + 2)][l_13])
                    continue;
                l_129 = l_128;
            }
        }
        for (l_13 = 0; (l_13 > 9); l_13++)
        { 
            int8_t l_132 = 0L;
            int32_t l_143 = 0x25814189L;
            int32_t l_146 = 0xDF996105L;
            int32_t l_147 = 4L;
            if ((g_75.f0 ^ 0x17L))
            { 
                g_4 |= l_132;
            }
            else
            { 
                g_4 = 0x39A01C8DL;
                return g_49[0][3][2];
            }
            for (l_105 = 23; (l_105 >= 8); l_105 = safe_sub_func_uint64_t_u_u(l_105, 6))
            { 
                l_88[4][2][0] = l_132;
            }
            p_3.f0 = ((1L <= ((((0x3209L || (+(safe_mul_func_int8_t_s_s((l_147 = (safe_rshift_func_uint16_t_u_u(((l_146 &= (+(safe_add_func_uint8_t_u_u(((l_143 ^= g_49[2][2][0]) && ((safe_div_func_int16_t_s_s(l_127, 5L)) > p_3.f0)), 0x5BL)))) < 3UL), 15))), g_70[0])))) && (-7L)) , p_3.f0) == g_64)) | p_3.f0);
        }
    }
    for (g_4 = (-18); (g_4 > 11); g_4 = safe_add_func_uint64_t_u_u(g_4, 2))
    { 
        l_150[1]--;
    }
    return p_3.f0;
}



static int8_t  func_10(uint16_t  p_11)
{ 
    uint16_t l_72 = 1UL;
    int32_t l_76 = (-10L);
    ++l_72;
    g_75 = g_75;
    return l_76;
}



static uint32_t  func_14(struct S0  p_15, int64_t  p_16, int32_t  p_17, int64_t  p_18, uint8_t  p_19)
{ 
    int32_t l_65 = 0x05BCAFB9L;
    int32_t l_69 = 0x0CAFCEB5L;
    for (g_6.f0 = 0; (g_6.f0 == (-16)); g_6.f0 = safe_sub_func_int8_t_s_s(g_6.f0, 2))
    { 
        uint64_t l_30 = 18446744073709551615UL;
        int32_t l_68 = (-1L);
        if (p_15.f0)
            break;
        for (g_4 = 27; (g_4 <= (-16)); g_4 = safe_sub_func_int64_t_s_s(g_4, 1))
        { 
            int32_t l_27[2][3][5] = {{{0x4FD57441L,0x9063446BL,1L,1L,0x9063446BL},{0x92D14B43L,0x29BFAEADL,1L,0x380D33B9L,0x29BFAEADL},{0x92D14B43L,0x9063446BL,0x51723279L,0x380D33B9L,0x9063446BL}},{{0x4FD57441L,0x9063446BL,1L,1L,0x9063446BL},{0x92D14B43L,0x29BFAEADL,1L,0x380D33B9L,0x29BFAEADL},{0x92D14B43L,0x9063446BL,0x51723279L,0x380D33B9L,0x9063446BL}}};
            int32_t l_48[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_48[i] = 0x3184BAFCL;
            if (((safe_sub_func_uint32_t_u_u((l_27[1][2][2] , (safe_lshift_func_int16_t_s_u(1L, l_30))), (safe_lshift_func_uint8_t_u_u(((++p_19) ^ (safe_mul_func_uint8_t_u_u((((((((safe_add_func_uint64_t_u_u(((g_4 & g_6.f0) < p_17), p_15.f0)) ^ 0xEF321248C33196ADLL) , 0UL) | p_17) <= g_6.f0) && g_4) != p_16), g_6.f0))), l_27[0][2][0])))) > 0x1AC5L))
            { 
                struct S0 l_47 = {0x39440774L};
                g_49[0][3][2] = ((-1L) <= (safe_rshift_func_uint8_t_u_u((((l_48[0] = (safe_mul_func_int16_t_s_s((p_16 != (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0xE5L, ((l_47 , g_6.f0) < l_30))), p_16))), p_18))) , 0xAC17B1AB372C247ALL) & 0L), 7)));
            }
            else
            { 
                int32_t l_63[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_63[i] = 0x89CDEE7BL;
                l_65 &= (g_49[2][1][4] | ((((safe_mul_func_int16_t_s_s(0xD994L, ((((safe_rshift_func_int16_t_s_u((g_64 = (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(0xF671L, ((safe_add_func_int32_t_s_s(((!0xC3A74F57033C9969LL) == p_19), p_15.f0)) , p_19))) == l_30), l_63[0])), 0xB244L))), g_6.f0)) && 0L) >= g_6.f0) == g_49[3][0][2]))) ^ 0x391DAA6E977603CCLL) || g_4) & p_15.f0));
            }
        }
        g_70[0] = (safe_sub_func_uint64_t_u_u((((l_30 == ((g_4 = ((l_68 = (g_4 & (l_30 && (l_65 |= 8L)))) , l_69)) | p_15.f0)) != l_30) >= g_6.f0), l_30));
    }
    return g_64;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_49[i][j][k], "g_49[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);

    }
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);

    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
